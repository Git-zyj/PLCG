/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (((!2110419409) << var_10));
                arr_5 [i_0] &= ((((-(arr_4 [i_0] [i_1] [i_1]))) | ((((arr_4 [i_1] [i_0] [i_0]) >= (arr_0 [i_0]))))));
                var_18 = (min(17058327256382900970, (arr_1 [3])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_19 = ((arr_7 [i_4]) ? (arr_7 [i_2]) : (((arr_7 [i_2]) / (arr_7 [i_4]))));
                    arr_12 [i_4] [i_3] [i_4] [i_4] = (arr_11 [i_3] [i_3] [i_3]);
                    var_20 += var_1;
                }
            }
        }
        arr_13 [0] [i_2] = arr_11 [i_2] [i_2] [i_2];
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_21 += (arr_15 [i_5]);

        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_21 [i_6] = (~81);
            arr_22 [i_5] [0] = (arr_11 [i_5] [i_5] [6]);
            var_22 = ((-var_16 ? ((((958550154 ? var_11 : var_12)) / (arr_9 [i_5] [i_5] [0]))) : (((((arr_20 [i_5] [i_5]) == (arr_8 [i_5] [i_5])))))));
        }
        var_23 = (arr_17 [i_5]);
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_24 = ((((((arr_23 [i_7] [i_7]) + (arr_23 [7] [i_7])))) - (arr_24 [1] [i_7])));
        var_25 = ((!(arr_26 [i_7])));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_30 [i_7] = ((~(arr_24 [i_7] [i_7])));
            arr_31 [16] [i_8] [i_8] = (arr_29 [1] [i_8] [i_7]);
            var_26 = (-(arr_29 [i_7] [i_7] [i_8]));

            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                var_27 = (((arr_27 [0] [i_8] [i_9]) > (((arr_26 [i_7]) ? var_7 : (arr_26 [i_7])))));
                var_28 = (((var_13 || var_2) % (arr_28 [i_7])));
                arr_34 [i_7] = (((((arr_29 [i_7] [i_8] [16]) ? (arr_29 [i_7] [1] [i_9 + 2]) : (arr_29 [i_7] [8] [i_9]))) != -1237760869));
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_29 = ((~(((arr_27 [i_7] [i_10] [i_11]) ? (arr_37 [i_12 + 2] [i_11] [9] [i_7]) : var_8))));
                            arr_46 [i_7] [i_7] [i_7] [i_7] [i_7] = (!-var_4);
                            arr_47 [i_7] [i_7] [i_7] [i_7] [i_7] = (((arr_44 [i_7] [i_10] [i_10] [i_12 - 2] [i_13]) >= (arr_40 [i_12] [i_10] [i_11] [i_12 - 1] [i_13])));
                            arr_48 [5] [i_12 - 2] [i_13] = (arr_40 [1] [i_12 + 1] [i_12 + 1] [i_12 + 2] [6]);
                        }
                    }
                }
            }
            var_30 *= (arr_42 [i_7] [i_7]);
            arr_49 [i_7] [i_7] [i_7] = (arr_40 [i_7] [i_7] [i_7] [i_7] [i_7]);
            var_31 = (arr_27 [i_7] [i_10] [13]);
            arr_50 [i_7] [i_10] = ((((((arr_35 [i_10]) ? (arr_29 [i_7] [i_7] [i_7]) : var_4))) ? (arr_41 [i_7] [i_7] [i_10] [i_10]) : (arr_29 [i_10] [i_7] [0])));
        }
    }
    #pragma endscop
}
