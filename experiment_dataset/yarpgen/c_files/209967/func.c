/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209967
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
    var_10 |= ((/* implicit */unsigned int) var_6);
    var_11 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) (~(var_9)))))));
    var_12 = ((((/* implicit */_Bool) max((((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_2))))))) ? (min((((/* implicit */long long int) min((var_8), (var_8)))), (((long long int) (unsigned short)48492)))) : (((/* implicit */long long int) min((134248228U), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)24576)))))))));
}
