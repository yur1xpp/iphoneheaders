/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <UIKit/UIImage.h>

@class NSString;

@interface UIImageNibPlaceholder : UIImage <NSCoding> {
	NSString* runtimeResourceName;
}
-(instancetype)initWithContentsOfFile:(id)file andRuntimeResourceName:(id)name;
-(instancetype)initWithData:(id)data andRuntimeResourceName:(id)name;
-(void)dealloc;
-(nullable instancetype)initWithCoder:(NSCoder *)coder;
-(void)encodeWithCoder:(id)coder;
@end

