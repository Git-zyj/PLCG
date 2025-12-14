/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((-117 ? ((var_5 ? 4039926356398283056 : (var_15 && -1316195234))) : (((-var_15 ? (arr_4 [i_2]) : var_1)))));
                    arr_8 [i_1] = 1;
                }
            }
        }

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_17 = var_7;
                            var_18 = (((!255) ? 1 : 18446744073709551615));
                            var_19 = (max(var_19, (1 - var_2)));
                            var_20 = 7056;
                        }
                    }
                }
                var_21 = var_7;
                arr_19 [i_3] [i_3] = ((7825 && (((228 ? 228 : 7)))));
            }
            var_22 = ((((((192 ? var_7 : var_1))) ? (var_3 - var_2) : -15)));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_32 [i_0] [i_0] [i_7] [1] [i_10] [i_0] = (arr_4 [0]);
                            arr_33 [10] [i_7] [i_8 + 3] [i_7] [6] = var_5;
                        }
                    }
                }
            }
            var_23 = ((((!(arr_10 [i_7] [i_0] [8]))) ? ((((min((arr_10 [i_0] [i_7] [i_7]), 2))) ? ((1 ^ (arr_29 [i_0] [9] [i_0] [i_7] [i_7] [i_0]))) : ((var_14 ? var_9 : var_13)))) : (min(((min(85, 1))), ((-66475177 | (arr_1 [i_0] [i_7])))))));
            arr_34 [i_7] = var_4;
        }
        var_24 = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_25 = var_6;
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 23;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_26 = ((-(((2132968840 + (arr_37 [i_11]))))));
                                var_27 -= (arr_43 [i_14] [i_13 + 1] [i_14]);
                                var_28 = (((var_2 ? var_11 : (arr_46 [i_11] [i_11] [i_11] [i_14] [i_15 + 1]))));
                                var_29 = ((~(((!(arr_49 [i_13 + 2] [i_13] [i_13] [i_15 - 2]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            {
                                var_30 = (((((var_12 ? (((arr_47 [i_11] [i_11]) ? (arr_46 [i_11] [i_12] [i_13 + 2] [i_16] [15]) : 0)) : 21))) ? ((50722 ? 1 : 255)) : ((max(5, 32740)))));
                                arr_57 [i_11] [i_11] [i_13 + 2] [i_16] [i_17] [i_11] [i_17] = 32768;
                                var_31 = (arr_39 [i_12] [i_13 - 1] [i_13]);
                            }
                        }
                    }
                }
            }
        }
        arr_58 [i_11] = ((var_10 * (((arr_45 [i_11] [i_11] [i_11] [22] [i_11] [i_11]) / (arr_50 [i_11] [5] [i_11])))));
    }
    /* LoopNest 3 */
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        for (int i_19 = 2; i_19 < 20;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                {
                    arr_66 [i_18] [i_20] [i_19 - 2] [i_20] = ((((max((arr_41 [i_19 - 1] [i_19] [i_19 - 1] [i_19 - 1]), (arr_61 [i_19 - 2])))) ? (arr_41 [i_19 - 2] [i_19 - 2] [i_19 - 1] [i_19 + 1]) : (458560621 <= 77)));
                    arr_67 [i_20] = (arr_54 [i_20] [i_20] [i_19 - 2] [1] [1]);
                }
            }
        }
    }
    #pragma endscop
}
