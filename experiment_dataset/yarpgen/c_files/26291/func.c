/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26291
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) var_1))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_9))));
    var_21 += ((/* implicit */unsigned long long int) var_1);
    var_22 = ((/* implicit */int) var_13);
    var_23 = ((/* implicit */short) ((var_12) >= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)47636)) : (((/* implicit */int) var_5))))), (((var_18) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
}
