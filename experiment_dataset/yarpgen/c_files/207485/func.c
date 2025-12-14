/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207485
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) < (((/* implicit */int) min((var_18), ((unsigned short)65535))))))), (var_3));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)21)), ((unsigned short)47675)))), (((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((unsigned short) (unsigned short)50503)))));
}
