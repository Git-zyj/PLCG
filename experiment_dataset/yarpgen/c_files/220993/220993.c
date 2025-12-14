/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (arr_1 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [21] [i_4] [i_4] [i_3] = (max((arr_3 [i_3] [10] [i_0]), ((((var_17 && (arr_10 [i_3])))))));
                                var_20 = (((!var_8) && ((min(var_4, var_6)))));
                                arr_15 [i_3] [i_3] [i_2] = (~4294967295);
                                arr_16 [i_0] [i_3] [1] = (min(var_6, (!34)));
                                var_21 = ((((arr_6 [i_1] [i_4]) == (~var_15))));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, (!-1)));
            }
        }
    }
    var_23 = (min(var_23, var_16));

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_24 = (max(var_24, (~15)));
        arr_19 [i_5] = (((((~35944) & (arr_8 [i_5] [i_5] [i_5] [i_5]))) > (arr_12 [5] [i_5])));
        arr_20 [i_5] = (((((~0) + 2147483647)) << (((((arr_13 [i_5] [6] [i_5] [19] [6] [i_5]) | (arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [19]))) - 94))));
        var_25 = (arr_12 [i_5] [i_5]);
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_26 = ((var_6 * (arr_0 [i_6 - 1])));
                    var_27 -= (((max(var_14, (arr_0 [i_6 - 1]))) ^ (arr_0 [i_8])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                {
                    var_28 = var_17;
                    var_29 = (arr_2 [6]);
                }
            }
        }
        arr_35 [i_6] = (var_7 ? var_16 : (!var_15));
        var_30 = (((((~(arr_32 [i_6] [13])))) ? ((0 << (-7336 + 7351))) : var_8));
    }
    for (int i_11 = 1; i_11 < 14;i_11 += 1)
    {
        arr_39 [8] [i_11] = (~1750260825);
        var_31 = (!((max(var_3, var_13))));
    }
    var_32 = (var_1 / var_6);
    #pragma endscop
}
