/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39235
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ? (max((var_1), (((/* implicit */unsigned long long int) var_19)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_16)), (var_5))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) : (min((var_5), (var_5))))))));
    var_21 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((var_12), (var_15)))) ? (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))))) : ((~(var_1)))))));
}
