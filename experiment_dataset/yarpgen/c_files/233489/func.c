/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233489
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
    var_10 = ((/* implicit */unsigned int) (~(var_5)));
    var_11 -= ((/* implicit */signed char) max((((/* implicit */int) var_3)), (var_5)));
    var_12 = min((var_9), (((/* implicit */unsigned int) var_1)));
    var_13 |= ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned long long int) (unsigned char)245))));
}
