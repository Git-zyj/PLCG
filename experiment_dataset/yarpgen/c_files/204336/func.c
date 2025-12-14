/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204336
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
    var_20 += ((/* implicit */signed char) ((((min((var_14), (((/* implicit */unsigned long long int) var_18)))) + (((/* implicit */unsigned long long int) var_18)))) % (((/* implicit */unsigned long long int) var_15))));
    var_21 ^= ((/* implicit */unsigned long long int) ((((var_15) + (9223372036854775807LL))) >> ((((((~(1102561026U))) & (max((((/* implicit */unsigned int) var_3)), (var_4))))) - (2319450202U)))));
    var_22 = ((/* implicit */signed char) var_11);
    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_4)) | (((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (0U)))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_0))))) : (((/* implicit */int) min((var_6), (var_6)))))))));
}
