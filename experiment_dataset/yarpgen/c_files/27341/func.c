/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27341
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
    var_15 = ((/* implicit */unsigned short) ((int) max((var_2), (min((((/* implicit */unsigned long long int) var_8)), (var_11))))));
    var_16 = ((/* implicit */unsigned char) max((min((var_5), (((/* implicit */unsigned int) ((signed char) var_9))))), (((/* implicit */unsigned int) ((_Bool) ((var_0) == (((/* implicit */unsigned long long int) var_12))))))));
    var_17 ^= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((int) 4294967295U))), (max((((/* implicit */unsigned long long int) 3268378255441595344LL)), (var_13))))) / (max((var_14), (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_1)) : (var_8))))))));
}
