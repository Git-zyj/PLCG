/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233649
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
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */short) var_16)))))) & (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_7)))))));
    var_20 -= ((/* implicit */signed char) ((_Bool) ((long long int) (-(var_6)))));
    var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_2)))) - (((((/* implicit */unsigned long long int) var_3)) - (var_7)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) ((var_0) ? (var_18) : (var_18)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)0)), (var_4))))) : (var_18)))))));
    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))))))));
}
