/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232455
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
    var_16 = max((((/* implicit */int) (unsigned char)13)), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)13))))) ? (var_5) : (((/* implicit */int) (unsigned char)0)))));
    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) (unsigned char)11)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)19)))))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_9)))))))));
    var_19 |= var_2;
}
