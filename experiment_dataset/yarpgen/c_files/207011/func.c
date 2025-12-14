/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207011
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
    var_11 = ((/* implicit */long long int) var_7);
    var_12 -= ((/* implicit */long long int) min((var_3), (((/* implicit */int) var_7))));
    var_13 = ((/* implicit */signed char) ((((_Bool) ((var_4) - (((/* implicit */unsigned long long int) var_5))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6))))), (((unsigned int) var_1)))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_8)))))));
}
