/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_1] = (((arr_4 [i_0] [i_0 + 1] [i_1]) ? var_7 : (arr_4 [i_0 + 1] [i_0 + 1] [i_1])));
            arr_8 [i_0] [7] = ((var_4 ? ((var_9 ? var_6 : var_1)) : var_16));
            var_18 = ((var_5 ? var_4 : var_2));
            arr_9 [i_0 - 1] [i_0 - 1] = (var_17 != -1340148319);
        }
        arr_10 [i_0] = (arr_6 [i_0] [i_0] [i_0]);
        arr_11 [i_0] [i_0] = (((arr_2 [2] [i_0 - 1]) >> (var_1 + 118)));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        var_19 = var_1;
        var_20 = ((var_14 ? (arr_5 [i_2 - 3]) : var_14));
        var_21 = (4294967294 || var_10);
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_16 [15] = var_4;
        var_22 -= ((var_8 <= var_6) != (var_0 & var_9));
        var_23 = -var_14;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_29 [i_5] [6] = (arr_15 [i_5 - 1] [i_5 - 1]);
                                var_24 = (((min(((2 ? var_6 : var_9)), ((var_15 ? 18 : var_0)))) & (~15)));
                                var_25 -= (min(((((~(arr_24 [12] [i_6] [12]))) | (((arr_26 [i_4] [i_4] [i_4] [i_4]) ? var_12 : var_13)))), ((~(226 & var_17)))));
                                arr_30 [i_5] [i_5] = var_16;
                            }
                        }
                    }
                }
                var_26 = (((((var_10 / (arr_21 [i_4] [i_5 - 1])))) ? (min(var_5, (min(-5748606550856691068, var_7)))) : ((((((var_10 <= (arr_18 [i_5])))) - (((arr_25 [i_5 + 1]) ? var_8 : var_9)))))));
                var_27 = (max(var_27, ((((((238 ? 18 : 107))) ? var_7 : (var_0 <= var_0))))));
                var_28 = 218;
            }
        }
    }
    #pragma endscop
}
