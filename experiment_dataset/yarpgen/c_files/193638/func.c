/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193638
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_0))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_15))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_14)) ? (var_4) : (((/* implicit */int) (short)-1))))))));
    var_18 = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))), (((/* implicit */int) min((var_13), (var_13))))))));
    var_19 = ((/* implicit */unsigned long long int) min((min((var_6), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-93)), ((unsigned short)65535)))))), (((/* implicit */int) var_15))));
    var_20 |= (signed char)-96;
}
