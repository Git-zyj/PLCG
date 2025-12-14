/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27550
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
    var_13 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((max((var_8), (((/* implicit */int) var_3)))) & (((int) var_4))))), (max((((/* implicit */unsigned int) max((var_9), (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_9)) : (var_11)))))));
    var_14 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_2)))) ? (((var_9) ^ (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_5)) ? (var_9) : (var_8))))));
    var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_9) & (((/* implicit */int) var_0)))), (((int) var_2))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_8)) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (var_2))))))) : ((-(((var_6) ? (var_12) : (var_12)))))));
    var_16 |= ((/* implicit */int) max((((max((((/* implicit */unsigned int) var_9)), (var_7))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (var_1))))))), (max((var_11), (max((var_7), (((/* implicit */unsigned int) var_1))))))));
}
