/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194409
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
    var_12 = ((/* implicit */_Bool) var_7);
    var_13 = ((/* implicit */_Bool) min((((var_7) - (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((max((var_6), (var_10))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_5)))))))))));
    var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : (var_6)))));
    var_15 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_4)) : (9223372036854775807LL))) : (((/* implicit */long long int) var_3)))), (var_10)));
}
