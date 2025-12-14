/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_8, (max(var_6, var_7))))) ? ((var_8 ? ((var_8 ? var_4 : var_6)) : ((max(var_11, 2147483647))))) : ((var_7 / ((var_2 ? var_5 : -2147483647))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_17 ^= var_1;
                        var_18 = (min(var_18, (((((max((max(var_15, 95529490579045345)), (!var_2)))) ? (((max((arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]), 20)))) : (((arr_7 [i_0]) ? (arr_6 [i_2]) : (121 & var_10))))))));
                        arr_13 [i_0] [i_2] [i_0] [i_0] |= (max((((!var_9) ? ((var_0 ? 0 : 15638724082585931641)) : (var_13 / var_9))), (((-2147483647 - 1) ? (max(var_2, var_14)) : (((arr_0 [i_2]) ? var_2 : 2147483635))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_18 [i_2] [i_5] [i_2] [i_5] [i_0] = (~3530286427138540596);
                                var_19 = ((((((var_7 ? 3702771112006637398 : var_3)) & (((var_10 ? (arr_8 [i_0] [i_1] [i_0]) : 2147483647))))) / (~2147483638)));
                                arr_19 [i_0] [i_0] [i_5] [i_0] [i_0] = ((((!(((var_11 ? var_1 : var_1))))) ? ((((max(var_7, var_4))) ? (((arr_8 [i_0] [i_0] [i_2]) & (arr_2 [i_5] [i_0]))) : 1)) : var_4));
                            }
                        }
                    }
                }
            }
        }
        var_20 = ((max((((var_4 ? var_10 : (arr_3 [i_0] [i_0])))), ((-11 ? var_2 : (arr_8 [i_0] [i_0] [i_0]))))) & (((var_2 ? (!var_10) : var_9))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_31 [i_6] [i_6] [i_6] [5] [i_6] = ((((!((max(0, 2147483647))))) ? var_9 : ((((var_8 && var_1) || (var_0 && var_8))))));

                        for (int i_10 = 3; i_10 < 13;i_10 += 1)
                        {
                            var_21 = ((((((((var_1 ? (arr_5 [i_6] [i_6]) : var_3))) ? 2147483647 : (~var_13)))) ? var_0 : (!var_7)));
                            arr_34 [i_6] [i_6] [i_10 + 1] = ((~(!var_12)));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_22 = ((-var_6 & ((2147483636 ? var_15 : (~var_11)))));
                            var_23 = ((((max(var_6, (arr_11 [i_7 + 2] [i_7 + 2] [i_7] [i_7 + 2])))) ? (((~(arr_23 [i_8])))) : (arr_35 [i_6])));
                        }
                    }
                }
            }

            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_39 [i_6] [i_6] = ((((max(var_1, (arr_21 [i_7 + 2])))) ? (((max((arr_21 [i_12]), (arr_38 [13] [i_7 + 1] [i_7 + 1] [i_6]))) / (arr_33 [i_6] [i_6] [i_6] [6] [i_6]))) : (((26 / (-2147483647 - 1))))));
                arr_40 [i_6] [i_7] [i_12] = var_15;
                var_24 ^= (max((!17384177892795475073), (~15839)));
            }
            arr_41 [i_7 + 2] = (((((var_9 / (arr_12 [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 + 2])))) ? var_5 : (max(16, var_3))));
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_25 = (arr_3 [i_6] [i_6]);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    {
                        arr_50 [i_15] [i_14] [i_13] [i_6] = var_15;
                        arr_51 [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_35 [i_14]);
                    }
                }
            }
            var_26 = (max(var_26, (((((max(var_7, (var_2 / var_2)))) ? (arr_45 [7] [i_13] [2]) : (((arr_42 [i_6]) ? (arr_47 [i_13] [i_6] [i_6] [i_6]) : (arr_20 [i_6]))))))));
        }
        var_27 = ((max(var_3, var_2)));
    }

    for (int i_16 = 2; i_16 < 13;i_16 += 1) /* same iter space */
    {
        var_28 -= (!-16);
        var_29 *= ((((((arr_25 [i_16]) ? (arr_25 [i_16]) : var_4))) ? ((~(arr_29 [i_16 - 2] [i_16 + 1] [i_16 - 2] [i_16 - 2]))) : 249));
        var_30 = (max(((((max(249, var_12))) ? var_4 : (max(-39, 1382400624463996192)))), 9223372036854775805));
    }
    for (int i_17 = 2; i_17 < 13;i_17 += 1) /* same iter space */
    {

        for (int i_18 = 3; i_18 < 11;i_18 += 1)
        {
            var_31 = ((~(~var_1)));
            arr_61 [i_17] [i_18] [i_18 - 3] = -1382400624463996195;
        }
        arr_62 [i_17] [i_17] = var_1;
        var_32 = ((var_15 | ((var_11 ? var_12 : var_15))));
    }
    var_33 = (max(var_33, ((((((44 ? (0 - 2147483647) : (max(-9223372036854775806, 17413828621604605231))))) ? 182 : var_10)))));
    #pragma endscop
}
