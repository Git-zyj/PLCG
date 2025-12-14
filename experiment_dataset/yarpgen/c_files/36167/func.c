/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36167
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
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_4)), ((unsigned short)0)));
    var_15 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)28)))) | ((((-(((/* implicit */int) var_5)))) & (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_7))))))));
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_12)))))), (min((((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))))));
    var_18 -= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))));
}
