/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_11 = (max(var_11, (arr_5 [i_3])));
                        var_12 -= (((((arr_6 [i_3] [i_2] [i_1] [i_0]) / var_5)) / (arr_4 [i_1] [i_1] [i_0])));
                    }
                }
            }
            arr_11 [i_0] [i_1] &= (var_1 | (arr_6 [i_0] [i_0] [i_1] [i_0]));
            var_13 = (min(var_13, (arr_9 [i_0] [i_1] [1])));
        }
        arr_12 [i_0] = (((arr_3 [i_0] [i_0] [i_0]) || (arr_7 [i_0] [i_0])));

        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 7;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [i_4] [i_4] = ((var_2 & (arr_9 [i_4 + 1] [i_4 + 1] [i_6 + 2])));

                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_5] [i_5] [i_4] [i_7] [i_5] = var_6;
                            arr_25 [i_0] [i_7] [i_4 + 1] [i_4] [i_7 + 1] [i_0] = ((!(arr_6 [i_4 + 1] [i_7] [i_7 - 1] [i_7 - 1])));
                        }
                    }
                }
            }
            var_14 = ((+(((((arr_16 [i_4] [i_0] [i_0] [i_0]) + 2147483647)) << (((arr_23 [i_4] [i_0] [i_0] [i_0]) - 15210961754200975383))))));
            arr_26 [i_0] [1] [i_4] = ((arr_5 [i_4 + 1]) < (arr_5 [i_4 + 1]));
            arr_27 [i_4] = ((arr_15 [i_0] [i_0] [i_0] [i_0]) / (arr_15 [i_0] [i_4 + 1] [i_4] [i_4]));
            var_15 -= ((var_0 >= (arr_5 [i_0])));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_16 = (arr_19 [i_0] [i_8] [8] [i_8] [i_8]);
            arr_30 [i_0] = ((~(arr_10 [i_0] [i_8] [i_0] [i_8] [i_8])));
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_17 = var_7;
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_18 += (((((arr_7 [i_12] [i_11]) / var_3)) < var_5));
                        var_19 += arr_23 [i_9] [i_10] [i_11] [i_12];
                        arr_42 [i_9] [i_9] [i_9] [i_9] = ((((((arr_33 [i_12]) || (arr_4 [i_10] [i_10] [i_11])))) >> (var_7 - 222062618466320865)));
                    }
                }
            }
        }
        var_20 = (min(var_20, (((arr_10 [i_9] [9] [i_9] [i_9] [i_9]) & (arr_18 [i_9] [i_9] [i_9])))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 8;i_14 += 1)
            {
                {
                    arr_48 [i_9] [i_13] [i_14] = ((-(max(var_8, (arr_34 [i_9])))));
                    arr_49 [i_9] [i_9] [i_14] [i_14 + 1] = (((~var_3) ^ (((max((arr_16 [i_14 + 1] [i_14 - 3] [i_14 - 3] [i_14 - 1]), (arr_16 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 3])))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    {
                        var_21 = (max(var_21, (arr_39 [i_15] [i_15 + 1] [i_15])));
                        var_22 = (min((1 / 1), (arr_22 [i_9] [i_9])));
                        var_23 = min(((((arr_41 [i_9] [i_9] [i_9] [i_9] [i_9]) != (arr_7 [i_15] [i_15])))), (((var_5 >= (arr_35 [i_15] [i_9])))));
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, var_7));
    #pragma endscop
}
