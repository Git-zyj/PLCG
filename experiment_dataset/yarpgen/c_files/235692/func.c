/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235692
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
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) var_3)), (((unsigned int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)1023))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_6))), ((+(((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_9)) : (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_10)), (var_12))))) : (min((var_5), (((/* implicit */unsigned int) var_13))))))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))))) : (((/* implicit */int) var_9))));
}
