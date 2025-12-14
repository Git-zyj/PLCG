/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_2] [i_4] = ((-((((min(var_3, var_6))) ? var_2 : -15768126))));
                                arr_13 [i_0] [i_2] [i_3] = min(1, ((658049400 ? -15768142 : 1)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_13 += (arr_11 [i_0] [i_0] [i_0] [i_1] [i_5] [i_5] [i_6]);
                            var_14 = var_6;
                            arr_20 [i_0] [i_1] [i_5] [i_0] [i_0] |= ((min(-0, ((8948956266655856765 ? var_7 : 8948956266655856767)))));
                            var_15 = (max((((-462621734 + 2147483647) << (!var_0))), 66));
                        }
                    }
                }
                arr_21 [i_0] = ((-(1 && 0)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_16 += 1;

                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        var_17 = -1808335649;
                        arr_32 [i_8] [i_8] = var_5;
                        arr_33 [i_7] [i_8] [i_9] [i_8] = (max(1, 1));
                        arr_34 [i_8] [i_9] [i_8] [i_8] = ((8948956266655856767 ? var_7 : (arr_24 [i_7 - 1])));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        arr_37 [i_7] [i_8] [i_9] [i_8] = (~(arr_35 [i_11] [i_8] [i_11 + 1] [i_8] [i_8]));
                        var_18 = ((-1073741824 != (arr_26 [i_8] [i_8])));
                        var_19 = ((~(-406813794 != var_1)));
                    }
                }
                var_20 = ((((((1 == (arr_36 [i_7] [i_8] [i_8] [i_8])))))) ? var_10 : ((((4064 < (max(var_9, (arr_30 [i_8] [i_8] [i_8] [i_7] [i_7]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            {
                var_21 = ((((((8 ? -931143890 : 1)) ? ((var_5 ? var_2 : (arr_28 [i_12] [i_12]))) : (~1)))));
                var_22 += (((((281474976710654 ? var_1 : var_6))) % ((1 ? var_4 : (arr_29 [i_12] [i_13] [i_12] [i_12])))));

                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    arr_44 [i_14] = (min((arr_31 [i_14] [i_14] [i_13] [i_13] [i_13] [i_12]), (max((arr_31 [i_14] [i_13] [i_13] [i_12] [i_12] [i_12]), var_1))));
                    var_23 = (((((-((max(var_8, 1)))))) ? (-1073741813 / -1987139529) : var_1));
                    var_24 = ((((((var_7 != var_12) & (((arr_28 [i_14] [i_13]) ? 17 : -107))))) ? (((((((arr_25 [i_13] [i_12]) - 1))) ? (min(1, 3545972911)) : (!var_2)))) : ((1 ? (min(15904183860846980166, var_5)) : 127))));
                    arr_45 [i_12] [i_13] [i_13] [i_14] = (-739071211 != 1);
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    var_25 = var_4;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            {
                                var_26 = ((var_4 ? (arr_49 [i_12] [i_12] [i_13] [i_15] [i_16] [i_17]) : 1053378919));
                                var_27 = (1053378906 ? var_5 : var_8);
                                var_28 = var_6;
                            }
                        }
                    }
                    var_29 = var_3;
                }
                for (int i_18 = 1; i_18 < 16;i_18 += 1)
                {
                    arr_56 [i_12] [i_13] [i_13] = ((((2674710988 ? var_11 : (arr_41 [i_18 + 3] [i_18] [i_18 + 2]))) - var_1));
                    arr_57 [i_13] = (max(((max(var_12, var_4))), (((arr_51 [i_12] [i_13] [i_18] [i_18] [i_18]) ? var_4 : -1082956996062008960))));
                }
                var_30 = 5987776282012311633;
                var_31 = ((((((min(-629151642, -67))) ? 1 : (min(-629151642, var_8)))) - (-1596851189 & 0)));
            }
        }
    }
    var_32 = var_9;
    #pragma endscop
}
