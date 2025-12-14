/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212483
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
    var_10 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */unsigned long long int) var_2)) != (var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) == (var_2))))) : (max((var_8), (((/* implicit */unsigned int) var_9))))))));
    var_11 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */long long int) ((var_4) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) / (var_5)))));
    var_12 &= ((/* implicit */signed char) min((((max((var_6), (var_4))) >> (((var_4) - (1739779829U))))), (((/* implicit */unsigned int) var_1))));
}
