/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40119
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = arr_7 [i_1] [i_0];
                    var_10 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 3]))) : (4080880353027984035LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 3])) ? (var_5) : (((/* implicit */int) arr_5 [i_1 + 3])))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (min((var_8), (var_7))) : (var_8)));
}
