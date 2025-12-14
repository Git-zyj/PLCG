/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224636
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
    var_16 = ((/* implicit */signed char) var_1);
    var_17 &= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_4)))), (max((((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) var_14))))), ((-(var_9)))))));
}
