/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191476
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
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (min((var_5), (0U))))))));
    var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) << (((/* implicit */int) var_13))))) ? (var_0) : (var_2)))) ? (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) var_3)), (var_8))))) : ((-(((/* implicit */int) (_Bool)1))))));
    var_16 = var_8;
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((var_11) | (var_5)))) ? (((/* implicit */int) (((_Bool)1) || (var_6)))) : (((/* implicit */int) var_4))))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_1))));
}
