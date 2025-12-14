/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216419
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
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
    var_15 = ((/* implicit */signed char) var_4);
    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((var_9), (min((var_9), (((/* implicit */long long int) var_2))))))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((/* implicit */long long int) var_1)), (var_10))))));
    var_18 |= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_5)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (var_12))))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) / (var_4)))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) var_2)))))));
}
