/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245400
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
    var_14 ^= ((/* implicit */unsigned short) ((_Bool) var_1));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (((_Bool)0) ? (((int) var_4)) : (((/* implicit */int) (signed char)-4)))))));
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) var_10))), (min((((((/* implicit */_Bool) 2999297220U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
    var_17 += ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1))))))), (max((((/* implicit */unsigned int) var_11)), (((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (18U)))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) (_Bool)1))));
}
