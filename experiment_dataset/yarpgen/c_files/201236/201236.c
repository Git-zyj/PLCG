/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 = (max(var_14, (!0)));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_4 [15] [15] [i_1 + 2] = 1461623003843940391;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((+(((~0) | 1))));
                        var_15 *= (((122880 & 1) ? ((((arr_3 [i_1 - 1]) && (arr_3 [i_1 + 2])))) : (((0 == (arr_7 [i_0] [i_0 - 1] [i_1 + 1]))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_16 = (30 / 798);
                            var_17 += (((var_7 | (arr_8 [i_7] [i_6] [i_5] [i_0 + 1]))));
                            var_18 = ((-(arr_8 [i_0] [i_4] [i_0 + 1] [i_7 - 3])));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_30 [1] [i_9] &= ((4294967295 ? 65532 : -1));
                            var_19 = ((1 ? 4294967295 : 122880));
                        }
                    }
                }
            }
            var_20 &= (((var_9 ? (arr_29 [i_4]) : (arr_16 [i_0] [i_4] [14]))));
            arr_31 [i_0] [i_4] [i_4] = (arr_5 [i_0 - 1]);
            arr_32 [i_0 + 1] [i_4] [12] |= ((~(arr_16 [i_0] [i_0] [4])));
        }
        var_21 = (((((min((arr_12 [i_0 + 1] [8]), 143)))) <= var_3));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {

                    for (int i_14 = 3; i_14 < 8;i_14 += 1)
                    {
                        var_22 = (var_12 != (arr_5 [i_13]));
                        var_23 = arr_2 [i_11] [i_11];
                    }
                    for (int i_15 = 1; i_15 < 8;i_15 += 1)
                    {
                        arr_44 [i_13] [3] [i_12] [i_12] = (arr_17 [i_12]);
                        arr_45 [i_12] [i_15] = (((arr_14 [i_12] [1] [i_15 + 1]) == -798));
                    }
                    for (int i_16 = 2; i_16 < 10;i_16 += 1)
                    {
                        var_24 = (((arr_27 [i_16] [i_16 + 2] [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 2]) ? (arr_27 [i_16] [i_16] [i_16 + 2] [i_16 - 1] [i_16] [i_16]) : (arr_27 [i_16] [15] [i_16 - 1] [i_16 - 1] [i_16] [2])));
                        var_25 = (arr_21 [i_11] [i_12] [i_12] [i_13] [4] [i_16]);
                        var_26 = (((arr_26 [i_12] [i_16 - 1] [i_16 - 1] [i_16]) == (arr_26 [i_11] [i_16 - 1] [i_16 - 1] [i_16])));
                        var_27 = ((-(arr_27 [i_11] [9] [i_13] [i_16 - 1] [i_11] [i_16])));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 11;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            {
                                var_28 = var_6;
                                var_29 = ((((var_6 < (arr_38 [i_11] [i_12] [i_12]))) ? (arr_19 [0] [0]) : (-32765 / 4294967286)));
                            }
                        }
                    }
                }
            }
        }
        var_30 = ((~(arr_26 [8] [i_11] [i_11] [i_11])));
    }
    var_31 = var_5;
    var_32 = min(var_10, ((((((var_1 >> (var_12 - 33362)))) > var_7))));
    #pragma endscop
}
