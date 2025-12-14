/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212047
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
    var_10 = ((/* implicit */unsigned int) (-(281466386776064LL)));
    var_11 &= 2492499039U;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_1 [i_0]))))));
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) max((var_13), ((((~(arr_6 [i_1]))) & (arr_6 [i_1 - 2])))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_9 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_5 [18U] [i_3]);
                arr_10 [19U] [i_2] [i_2] &= ((/* implicit */long long int) ((unsigned int) arr_0 [i_1 + 3] [i_3]));
            }
            arr_11 [i_2] [15LL] = arr_3 [i_1] [i_2];
        }
        arr_12 [i_1 + 2] = ((/* implicit */long long int) arr_0 [i_1] [i_1]);
        arr_13 [i_1 + 1] [i_1] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_1 + 2] [15LL])) ? (arr_8 [i_1 + 2] [i_1 + 3]) : (arr_8 [i_1 + 2] [14U])))));
        var_14 ^= ((((long long int) 365579520U)) / (((((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1 + 2])) ? (((long long int) arr_5 [i_1] [i_1])) : (var_4))));
    }
    for (long long int i_4 = 3; i_4 < 18; i_4 += 1) 
    {
        arr_17 [16LL] = ((/* implicit */unsigned int) arr_8 [i_4 + 1] [i_4]);
        arr_18 [i_4] [i_4] = 2492499039U;
    }
    var_15 = max((((/* implicit */long long int) ((unsigned int) 3839696972U))), (min((((var_6) ^ (-6513772568531018934LL))), (((/* implicit */long long int) var_3)))));
}
