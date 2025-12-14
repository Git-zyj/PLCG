/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2730
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
    var_11 = max((var_10), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))))));
    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_0)))))))), (((unsigned long long int) ((unsigned short) var_6)))));
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_2))));
    var_14 |= min((((((/* implicit */unsigned long long int) ((int) var_10))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))))), (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1))))) : (((var_2) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
}
