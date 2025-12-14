/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48583
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) var_2))));
    var_11 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) <= (4508152446308814165ULL))) ? (((/* implicit */unsigned long long int) ((((var_1) != (818539022))) ? (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) : (max((((/* implicit */long long int) 262143)), (var_9)))))) : (max((((unsigned long long int) (short)31031)), (min((var_4), (((/* implicit */unsigned long long int) (short)-23990))))))));
    var_12 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (var_4) : (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) 262143))));
}
