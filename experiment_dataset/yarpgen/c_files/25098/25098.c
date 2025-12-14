/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_10;
    var_12 &= (!(~45231));
    var_13 = var_1;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = (min((((var_7 > (arr_12 [i_0] [8] [8] [i_0 + 1] [i_0] [i_0] [i_4 + 1])))), (min(-5565863503950404398, 0))));
                            var_14 = (arr_11 [i_0] [4] [i_2] [i_3] [i_4]);
                            var_15 = (min(65535, 353287606));
                        }
                    }
                }
            }
            var_16 *= (((((((arr_0 [i_0] [i_0 + 2]) >= (arr_0 [i_0] [i_0 + 2]))))) | (((arr_0 [i_0] [i_0 + 2]) ? (arr_0 [i_0 + 2] [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0 + 2])))));
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            var_17 = (((arr_6 [i_0] [i_5 + 1] [i_5 + 1] [i_5 + 1]) * (((1 < 3430445180) ? ((((!(arr_0 [i_0] [i_0]))))) : (arr_13 [1] [i_0] [i_0 + 1] [i_0 - 1] [i_5 + 1])))));
            var_18 = (arr_12 [i_5] [i_5] [i_5] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
            arr_18 [i_0] [i_0] [i_5] = 353287606;
        }
        var_19 = (min(4294967282, 6985394594994064023));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_20 = (min(var_20, (((-(((arr_10 [i_0 + 1] [i_0 + 1] [3] [i_6] [3] [i_7]) ^ (arr_10 [i_0] [i_0] [i_0] [8] [i_7] [10]))))))));
                    var_21 = ((~((~(arr_15 [i_6 - 1] [i_6] [i_6 - 1])))));
                }
            }
        }
        var_22 &= (min(var_9, (((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) >> (var_3 - 55860)))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_23 &= (arr_26 [i_10]);
                        var_24 = (min(var_24, (arr_26 [0])));
                        var_25 = 35689;
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_26 = (arr_36 [12] [4] [3] [6]);
                        arr_37 [i_8] [i_8] = ((var_8 > (arr_31 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_8 - 1])));

                        for (int i_13 = 3; i_13 < 14;i_13 += 1)
                        {
                            var_27 *= ((!((((arr_28 [i_12]) - var_6)))));
                            var_28 = (min(var_28, ((((arr_39 [i_8 + 1] [i_13 - 3] [i_10] [i_12] [i_9] [i_9] [i_10]) != (arr_39 [i_8] [i_13 - 2] [i_8] [i_12] [i_12] [i_8] [i_13]))))));
                            var_29 += ((((~(arr_33 [4] [i_12] [10] [i_13]))) + (((~(arr_32 [i_12] [i_12]))))));
                            arr_40 [i_8] = (-1 | 1);
                            var_30 = (max(var_30, (arr_26 [i_8])));
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_31 = (min(var_31, ((((arr_27 [i_9]) & (arr_27 [i_12]))))));
                            var_32 |= (arr_24 [i_8 - 1]);
                        }
                    }
                    var_33 = ((arr_23 [i_8 + 1]) ? var_2 : (((arr_33 [i_8] [i_8] [i_9] [i_8]) | (arr_38 [i_8]))));
                }
            }
        }
        var_34 = (((1473876678 / var_4) <= (arr_28 [i_8])));
        var_35 = 1;
        arr_43 [i_8] = (~var_2);
        arr_44 [i_8] [i_8] = (arr_36 [i_8] [i_8] [i_8 - 1] [i_8]);
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 21;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 4; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 21;i_17 += 1)
            {
                {
                    var_36 = (max(var_36, (arr_50 [i_16 - 3] [i_16 + 2])));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_37 = (((arr_45 [i_19]) ? (arr_46 [i_15 + 1] [i_15 - 1]) : (arr_45 [i_19])));
                                var_38 = (arr_45 [i_15]);
                                var_39 = (max(var_39, (!var_8)));
                            }
                        }
                    }
                }
            }
        }
        var_40 = (var_1 * var_10);
    }
    #pragma endscop
}
