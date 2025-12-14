/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((~18446744073709551615) >> (-3994372694 - 300594559))) + (((var_3 ? (var_9 == var_0) : var_8)))));
    var_14 = ((var_9 ^ ((3932199793 >> (var_6 - 220990418)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (arr_2 [i_0] [i_1] [i_0])));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_8 [0] [i_1] [i_3] = (((~var_0) != (arr_5 [i_0 + 1])));
                        arr_9 [i_0] [i_0] [i_0] &= (((((var_2 | (arr_3 [i_1] [i_1])))) ? var_11 : (var_7 | 1)));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_16 = (max(var_16, (arr_13 [i_0 + 1])));
                        arr_14 [i_2] = 717897998;
                        var_17 = ((!(arr_1 [1] [i_1])));
                        arr_15 [i_0] [i_1] [i_2] [i_4] &= (~var_5);
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_18 -= ((!(arr_11 [i_1] [9] [i_1] [i_1 + 1] [i_5] [i_5 + 1])));
                        var_19 = (arr_2 [i_5] [i_5 + 3] [i_1 - 3]);
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                arr_23 [i_6] = var_8;

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_20 = (min(var_20, var_7));
                    var_21 = ((8887124209737656819 | ((var_0 ? 0 : 0))));
                    var_22 = (min(var_22, (arr_20 [i_0] [i_7] [10] [i_8])));
                }
            }
            for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
            {
                var_23 ^= ((var_3 ? ((((arr_4 [i_0] [i_6]) > var_10))) : (arr_20 [i_0] [10] [i_0] [i_0])));

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_32 [i_6] [i_6] [1] [i_6] [10] &= (((arr_12 [i_6] [i_9 + 2] [i_0 - 1] [10]) * (arr_21 [i_0] [i_9 + 2] [i_0 - 1])));
                    var_24 += ((var_11 ? (arr_13 [i_0]) : (arr_1 [i_9 + 2] [i_9 + 1])));
                }
                arr_33 [i_0] [i_6] [i_6] = ((~(arr_27 [i_6] [i_9 - 3] [i_9] [i_9])));
                arr_34 [i_6] [i_6] [4] = (arr_10 [i_0]);
                arr_35 [i_0] [i_6] [i_6] = ((var_9 ? var_7 : (arr_29 [i_6] [i_6] [i_6] [i_9 - 2])));
            }
            for (int i_11 = 3; i_11 < 11;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 3; i_12 < 10;i_12 += 1)
                {
                    var_25 |= (~var_6);
                    var_26 = (max(var_26, ((((arr_30 [i_12]) ? (-1 / 1) : (arr_24 [i_12 - 3] [i_12 + 3] [12] [i_12] [i_12]))))));
                }
                var_27 = -var_6;
            }
            var_28 += ((arr_19 [1] [i_0 - 1] [i_0 - 1]) ? 1 : (arr_19 [10] [i_0 - 1] [i_0 + 1]));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_45 [i_13] [i_13] [1] = (((arr_17 [i_0 - 1] [i_0 + 1]) / (arr_17 [i_0 - 1] [i_0 + 1])));
            var_29 = (max(var_29, (arr_30 [i_0 - 1])));
            arr_46 [1] [i_13] [i_0] = var_10;
            arr_47 [12] [i_13] = ((-39 / (arr_19 [i_13] [i_13] [1])));
            arr_48 [i_13] [i_13] = (((arr_2 [i_0] [10] [i_0 - 1]) ? (arr_2 [i_0] [i_0] [i_0 - 1]) : (arr_2 [i_0] [i_0] [i_0 - 1])));
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {
            var_30 = (min(var_30, -var_3));
            arr_53 [i_0] = var_12;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 10;i_17 += 1)
                    {
                        {
                            arr_63 [i_16] [7] [i_15] = (((arr_4 [1] [9]) + (arr_58 [i_16] [5] [7] [i_16 + 2] [i_15] [i_16 + 2])));
                            arr_64 [i_16] [i_16] [i_15] [4] [i_16] [i_17] [i_17] = (!var_10);
                        }
                    }
                }
            }
        }
        var_31 *= arr_36 [i_0] [i_0 - 1] [i_0];
    }

    for (int i_18 = 1; i_18 < 16;i_18 += 1)
    {
        arr_68 [i_18] [i_18] &= (max(((-((var_7 ? var_1 : (arr_65 [i_18]))))), 31));
        var_32 = arr_67 [i_18];
    }
    /* LoopNest 2 */
    for (int i_19 = 2; i_19 < 11;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 13;i_20 += 1)
        {
            {
                var_33 -= var_12;

                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    arr_76 [i_20] [i_20] = ((max(((min((arr_22 [i_20] [i_20] [i_19]), var_8))), ((300594591 ? var_11 : (arr_40 [i_21] [i_21] [i_21] [i_21] [0] [i_20]))))) & ((((arr_69 [i_19 + 1] [i_19]) ? var_0 : (arr_69 [i_19 - 1] [2])))));
                    arr_77 [i_20] [i_20] [i_20] [i_20] = ((arr_62 [i_19 + 2] [i_20] [i_19 - 2] [i_21]) ? (((-(arr_36 [i_19 - 1] [i_19 + 1] [i_19 - 2])))) : (min((arr_65 [i_19 - 1]), var_3)));
                    arr_78 [i_20] [i_20] [i_21] [i_19 + 2] |= (((((min(var_2, var_4)) | (arr_56 [i_19] [0] [i_19 + 1]))) & (((~(min((arr_6 [i_21]), (arr_61 [i_21] [8] [i_20] [i_21]))))))));
                    var_34 = (max(var_34, (((~(((arr_17 [i_19 - 1] [i_19 + 1]) ? (arr_17 [i_19 + 2] [i_21]) : var_0)))))));
                }
                arr_79 [i_19] &= (((arr_50 [i_19] [i_19] [i_19 - 1]) ? (((arr_50 [i_19] [i_19] [i_19 + 1]) & (arr_50 [1] [6] [i_19 + 2]))) : ((var_7 ^ (arr_50 [i_19] [i_19] [i_19 - 1])))));
                arr_80 [i_20] [1] = min((arr_28 [i_19 - 2] [i_20] [i_20] [i_19 - 1] [i_20]), (max(var_6, (arr_28 [i_19] [i_20] [i_20] [i_19 - 2] [i_20]))));
            }
        }
    }
    #pragma endscop
}
