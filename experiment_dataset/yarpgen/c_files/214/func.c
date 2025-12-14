/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_9))));
    var_17 = ((/* implicit */_Bool) min((var_17), ((_Bool)1)));
    var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (((var_15) ^ (var_2))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1)))))))));
    var_19 &= min((((unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6))))), (((/* implicit */unsigned int) ((var_2) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
}
