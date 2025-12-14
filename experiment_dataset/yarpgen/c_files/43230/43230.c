/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_0;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 |= 162;
                            var_18 = ((var_5 != (~3803)));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_19 ^= (!var_16);
                                var_20 = var_4;
                                arr_13 [i_0] [i_1] = (arr_3 [i_2 + 1] [i_0]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_21 = (arr_12 [i_0] [i_1] [i_0] [i_1] [i_0 - 1]);

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_22 = 2118240468;

                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_23 = (max(var_23, ((((~var_5) ? (((arr_0 [8] [4]) + (arr_20 [i_0] [21] [i_1 + 1] [i_5] [i_5] [i_6] [i_7 + 1]))) : var_11)))));
                            arr_22 [i_0] [i_0] = (((((arr_7 [i_7 + 1] [i_0 - 1]) + 9223372036854775807)) >> (var_4 + 118)));
                        }
                    }
                    var_24 = 2324282947;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_27 [i_0] = var_16;

                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_25 = (((((((min(var_13, var_3))) ? ((min((arr_25 [i_0] [i_0] [i_0] [i_0 + 2]), var_5))) : var_11))) ? var_4 : (arr_28 [i_0] [i_1] [i_1 - 1] [i_8] [i_9] [i_9])));
                        var_26 = (!var_15);
                        var_27 = (min((min(var_9, var_6)), ((((arr_4 [i_1 - 1] [i_0]) ? (arr_4 [i_1 - 1] [i_0]) : (arr_4 [i_1 + 1] [i_0]))))));
                        arr_32 [i_0] [i_1 + 1] [i_0] = var_1;
                    }
                    var_28 = -6180651429942422313;

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_29 = (arr_15 [i_0] [i_0]);
                        var_30 = min(((min(var_13, (arr_31 [i_0 + 2] [i_0] [i_8] [i_8])))), (min((arr_28 [i_0] [i_0] [i_1 + 1] [i_1 - 1] [i_8] [i_1 - 1]), (arr_28 [i_0] [21] [i_1 + 1] [i_8] [i_10] [i_10]))));
                        var_31 -= (((((((!(arr_29 [0] [8]))) ? (arr_29 [18] [18]) : (((!(arr_4 [i_0 - 1] [8]))))))) ? (((min(var_4, var_13)))) : ((var_6 ? (((arr_18 [i_0 + 1] [i_8]) ? var_1 : (arr_17 [20] [i_10]))) : -3799))));
                    }
                    for (int i_11 = 3; i_11 < 21;i_11 += 1)
                    {
                        arr_37 [i_0] [i_1] = (!var_9);
                        var_32 = ((~(((arr_7 [i_11 - 1] [i_1 + 1]) ? var_10 : (arr_7 [i_11 - 3] [i_1 - 1])))));
                        var_33 |= ((var_15 ? 0 : ((-2658919015109743770 ? -572718552 : 2658919015109743769))));
                    }

                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 20;i_12 += 1) /* same iter space */
                    {
                        var_34 *= var_15;

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_35 = (max(var_35, (((((((arr_3 [12] [12]) ? var_12 : var_12))) ? (((((arr_16 [i_1]) >= var_7)))) : ((160 ? -1543875776 : 11581026895079934653)))))));
                            var_36 = (max(var_36, (((var_8 ? var_1 : (arr_40 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2]))))));
                            var_37 = (max(var_37, -2734660635079980486));
                            var_38 = (max(var_38, (((51 ? -37 : 6865717178629616963)))));
                        }
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            var_39 = ((3 ? var_8 : var_8));
                            arr_45 [i_0 + 2] [i_0] [i_0] [1] [13] [i_0] = (~-var_13);
                        }
                    }
                    for (int i_15 = 3; i_15 < 20;i_15 += 1) /* same iter space */
                    {
                        var_40 = (min(((var_14 ? var_12 : var_13)), ((min((arr_12 [14] [i_0] [i_15 - 1] [1] [i_8]), var_3)))));
                        arr_49 [13] [i_0] [4] [i_15 - 3] = var_6;
                        arr_50 [i_0 - 1] [i_0] [1] [1] [1] = (min(var_0, (min(var_9, (((var_10 ? (arr_10 [i_0] [i_0] [i_0]) : (arr_36 [i_0] [i_1 + 1] [9] [i_15 - 3]))))))));
                        arr_51 [14] [i_0] [i_0] [4] = var_4;

                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            arr_56 [i_0] [i_1 - 1] [i_8] [i_15] [i_0] = ((((var_9 ? (arr_44 [i_0 - 1] [i_15 - 1]) : var_6)) - var_7));
                            var_41 = ((!((min(var_8, 1)))));
                            var_42 = (arr_7 [i_15] [i_16]);
                        }
                    }
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                {
                    var_43 = -var_16;

                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        arr_62 [1] [i_0] [i_0] [21] [i_0] [i_0] = (((!-1911007470236216905) ? (((arr_14 [i_0] [1]) ? -var_14 : var_6)) : var_12));
                        var_44 = ((~(((min(var_11, var_11)) ? 1 : ((min(var_0, var_15)))))));
                        var_45 = (max(var_45, (((11138 ? 1 : 15453784829255039142)))));
                    }
                }
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    arr_65 [i_0] [17] [i_0] [i_0] = ((~(arr_52 [i_0] [i_1 + 1])));
                    var_46 = (min(861480722, (min((((var_9 ? (arr_10 [5] [5] [i_0]) : 12))), var_2))));
                }
            }
        }
    }
    var_47 *= ((var_12 ? var_6 : (((1 ? var_15 : var_0)))));
    var_48 = var_2;
    var_49 = var_9;
    #pragma endscop
}
