/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4377
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1901207299U)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (18446744073709551615ULL)))))) ? (((arr_5 [i_0] [i_0 - 1] [i_0 - 2]) ^ (((arr_3 [14ULL] [i_1]) ? (arr_5 [i_0] [i_0] [i_0]) : (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(arr_5 [i_1] [i_0 + 1] [15LL])));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(((((/* implicit */_Bool) var_4)) ? (-7282107745325360832LL) : (((/* implicit */long long int) var_10)))))) : ((~(-2021543610080138504LL)))));
}
