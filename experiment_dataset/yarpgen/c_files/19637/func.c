/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19637
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
    var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : (min((var_7), (((/* implicit */unsigned int) var_13))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)80)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0))))), (((unsigned long long int) var_8))))));
    var_20 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned long long int) var_8))));
}
