/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242419
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
    var_16 = ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_13)) : (var_1))) % (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))));
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? ((-(max((((/* implicit */long long int) var_13)), (var_8))))) : (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_15)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) var_15)))))))));
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (var_14)))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_11))))));
}
