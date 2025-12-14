/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 = (((arr_1 [i_0]) ? ((var_0 ? var_0 : (arr_1 [i_0]))) : (arr_0 [i_0])));
        var_19 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = (arr_6 [1]);
            var_21 ^= ((1 / (arr_7 [i_1])));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_22 &= (arr_9 [10] [1] [i_2] [i_1 - 1]);
                arr_12 [i_1 - 1] [i_1] [i_1] [i_1] |= (((arr_4 [i_2] [i_3]) ? (((arr_4 [13] [3]) / 27074)) : (arr_11 [i_3] [i_3])));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_4] [i_5] = (arr_14 [i_1 - 1] [i_4 + 2] [i_4 + 2] [i_4]);
                            var_23 = ((((arr_16 [i_5] [5] [i_3] [i_2] [i_1 - 1]) == (arr_17 [i_1] [i_1 - 1]))));
                        }
                    }
                }
                arr_19 [i_3] [i_3] [i_3] [i_3] = (-127 - 1);
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_24 |= (arr_22 [i_1] [i_6] [i_7] [i_7]);
                    var_25 ^= (((arr_22 [i_1] [i_6] [i_6] [i_7]) ? (1 | -278118598) : (16384 == 395260265)));
                    var_26 = (arr_13 [i_6 - 1] [i_6] [i_1 - 1] [i_6 - 1] [i_1 - 1] [i_1]);

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_27 = (arr_17 [i_8] [i_6]);
                        var_28 = (((arr_3 [i_1 - 1]) ? (arr_3 [i_1 - 1]) : (arr_22 [i_8] [i_8] [i_1 - 1] [0])));
                    }
                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_29 = (arr_8 [i_1] [i_1]);
                            var_30 -= (arr_20 [i_9 - 3]);
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_32 [i_11] [i_11] [i_6] [i_7] [i_6] [i_1] = var_10;
                            var_31 = (arr_6 [i_7]);
                            arr_33 [i_1] [i_1] [4] [i_1] [i_1] [i_1] = (((arr_26 [0] [i_7] [0] [0]) * (arr_26 [i_1 - 1] [i_7] [i_1 - 1] [i_11])));
                            var_32 = (((arr_10 [i_1] [11] [i_11]) >= (arr_9 [8] [7] [i_7] [7])));
                            arr_34 [i_7] [3] [i_7] = (((arr_21 [i_1 - 1]) ? (arr_24 [i_1 - 1] [1] [i_7] [i_9 - 1]) : ((((arr_11 [i_1 - 1] [i_1]) >= var_14)))));
                        }
                        var_33 *= (((arr_10 [i_6] [i_6] [i_6 + 1]) != (arr_10 [i_1] [i_6] [i_6 + 1])));
                        var_34 = ((((((arr_16 [1] [i_6] [1] [i_7] [i_9]) ? (arr_13 [i_1] [i_7] [12] [i_9] [1] [i_7]) : (arr_23 [i_1 - 1] [i_7] [i_9])))) ? (arr_22 [i_6 - 1] [i_1 - 1] [i_1 - 1] [i_1]) : ((((arr_30 [i_1] [i_1] [i_1]) ? (arr_9 [i_1] [0] [i_7] [i_1]) : (arr_5 [i_1 - 1] [1]))))));
                    }
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        var_35 = (((33 ? (arr_21 [10]) : var_14)) << (arr_17 [i_1] [11]));
                        var_36 = (((((arr_27 [i_1 - 1] [1] [1] [9] [1]) || (arr_14 [i_1 - 1] [i_6] [7] [i_12]))) ? (arr_13 [i_7] [i_7] [i_7] [i_12] [i_7] [i_7]) : (arr_16 [i_1] [i_1 - 1] [i_1] [i_6 + 1] [2])));
                        var_37 = (((((arr_16 [i_12] [i_7] [i_7] [i_6] [i_1]) || (arr_15 [i_1 - 1] [i_6 + 1] [i_6] [1] [i_12]))) ? (arr_31 [i_1 - 1] [i_6 + 2] [i_1 - 1] [i_12] [i_12 - 1]) : ((((arr_6 [i_1]) == (arr_6 [i_1]))))));
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        arr_40 [i_13] [i_13] = (((((arr_16 [11] [11] [i_7] [11] [i_7]) ? (arr_31 [i_6] [i_7] [i_6] [i_6] [8]) : (arr_16 [7] [7] [1] [i_13] [1]))) ^ (arr_26 [i_1 - 1] [i_1 - 1] [i_6] [i_6 - 1])));
                        var_38 *= ((~(arr_9 [i_1] [i_1] [5] [i_1])));
                    }
                    arr_41 [i_1 - 1] [4] [i_1] [3] = (((arr_22 [i_1] [i_1] [i_6 + 1] [i_7]) > (arr_26 [1] [i_6 - 1] [i_6 + 2] [i_7])));
                }
            }
        }
    }
    for (int i_14 = 3; i_14 < 12;i_14 += 1)
    {
        var_39 *= (((32750 | 50) || var_13));
        arr_44 [i_14 - 1] [i_14] = (((max((min(var_1, var_6)), ((((arr_42 [i_14] [1]) ? var_5 : (arr_42 [i_14 + 1] [1])))))) / (((arr_43 [i_14] [i_14]) - ((((arr_42 [i_14 + 1] [i_14 + 1]) ? var_8 : (arr_42 [i_14] [i_14]))))))));
    }
    var_40 = var_10;
    #pragma endscop
}
