/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50271
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
    var_19 = ((/* implicit */unsigned short) var_12);
    var_20 = ((((/* implicit */_Bool) var_2)) ? (min((min((((/* implicit */unsigned int) var_14)), (var_12))), ((~(var_12))))) : (min((((/* implicit */unsigned int) var_14)), (var_17))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned short) var_5)))));
    var_22 ^= ((/* implicit */short) ((((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))))) >= (((/* implicit */int) ((unsigned char) var_0)))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_14))))) ? ((+(2243993436U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)163)))))))) ? ((-((~(((/* implicit */int) var_14)))))) : (((((/* implicit */int) var_14)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) 1134989126U)) < (var_0))))))));
}
