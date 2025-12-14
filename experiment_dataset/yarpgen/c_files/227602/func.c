/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227602
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) min((17235901824128842706ULL), (((/* implicit */unsigned long long int) var_17))))) ? (1210842249580708910ULL) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 1048574U)) : (1210842249580708909ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    var_21 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (var_9)))) ? ((-(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) 17235901824128842705ULL)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_16))))))));
    var_22 = ((/* implicit */unsigned int) 17235901824128842683ULL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_23 = (-(max((min((975682672U), (arr_3 [i_0] [i_0] [i_0]))), (arr_3 [3U] [3U] [i_0]))));
                var_24 = ((/* implicit */unsigned long long int) -2485256053046981839LL);
                var_25 ^= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (short)7743)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_2);
}
