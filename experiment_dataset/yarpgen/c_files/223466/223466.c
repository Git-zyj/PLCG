/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = ((-(arr_5 [i_1] [i_1] [i_1 + 1])));
                    var_18 = (var_14 ? ((var_5 ? (arr_1 [i_1 + 1] [i_1 + 2]) : var_6)) : 2711266403);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_19 *= (((3236408172 ? (~var_4) : (max(var_15, var_0)))) % ((var_0 ? (~3236408172) : (arr_11 [5] [i_4]))));
                arr_13 [i_3] [i_3] [i_3] &= ((~257155793) ? (min((arr_12 [i_4] [i_4] [i_3]), (arr_8 [i_4] [i_3]))) : ((var_16 ? var_4 : (var_14 && 257155794))));
                arr_14 [i_3] [19] = var_5;
            }
        }
    }
    #pragma endscop
}
