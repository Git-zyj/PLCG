/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = ((~(!var_3)));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            var_19 -= (((((22116 ? 288230376151711744 : 137438953440))) ? (arr_2 [i_0]) : (arr_1 [i_0 - 1] [i_1 - 1])));
            arr_4 [i_0] = -22116;
            arr_5 [i_0 + 2] [i_0] = (((-((-(arr_2 [i_0]))))));
            var_20 = (min(var_20, (arr_3 [4])));
        }
        var_21 = (min(var_7, var_0));
        arr_6 [i_0] = -16487;
        var_22 *= var_11;
        var_23 = (arr_2 [i_0]);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_17 [i_4] = 131;
                    arr_18 [i_2] [i_4] [i_2] = var_14;
                }
            }
        }
        arr_19 [i_2] [21] = (((arr_11 [i_2] [16] [16]) | var_16));
        var_24 = ((((arr_9 [i_2]) && var_11)));
    }
    var_25 = ((4092 ? -var_6 : (max(var_4, (max(24, var_1))))));
    #pragma endscop
}
