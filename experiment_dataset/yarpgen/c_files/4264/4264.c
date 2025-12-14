/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((((((((9223372036854775807 ? var_10 : var_11))) ? (var_1 || 31) : (arr_0 [i_1] [i_1])))) ? (((arr_5 [1] [1]) ? (1504224697 / -32757) : var_5)) : ((((var_0 + var_6) + (((min(var_0, 32767)))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_1] [i_0] = ((-(arr_7 [i_0])));
                    arr_11 [i_2] [i_1] = (((arr_6 [i_0]) * (arr_6 [i_1])));
                    var_13 = 255;
                    var_14 = ((arr_3 [i_1]) || 3);
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_3] = (max(32767, (var_8 + var_8)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_15 = var_3;
                                arr_22 [i_4] [i_4] = (!var_4);
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_16 = (min(var_16, var_1));
                                var_17 = ((-(var_7 >= var_6)));
                            }
                        }
                    }
                    var_18 = 1663416354;
                    arr_29 [i_0] [i_0] = (max((arr_5 [i_6] [i_6]), ((var_5 ? (arr_24 [i_0] [i_0] [i_0]) : (-9223372036854775807 - 1)))));
                    var_19 = 28470;
                }
                arr_30 [i_0] = 1;

                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    var_20 |= (((((!var_11) ? -var_4 : (((arr_7 [i_9]) ? (arr_12 [i_0] [11] [i_9]) : (arr_15 [i_0]))))) - (((var_1 && ((((arr_8 [i_0] [i_1] [0] [i_1]) ? var_2 : var_5))))))));
                    var_21 = (max((min((((-(arr_23 [i_0] [23] [i_9])))), 4294967287)), (((!(arr_18 [i_0] [i_1] [i_1] [i_9]))))));
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    arr_36 [i_10] [4] = (((var_8 ? (arr_13 [i_1] [i_10]) : (arr_18 [i_0] [i_0] [i_0] [i_0]))));
                    var_22 = (arr_27 [i_0] [i_1] [i_10] [i_1] [i_1] [i_10] [i_10]);
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_40 [8] [i_1] [i_0] = arr_5 [i_0] [i_0];

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_23 = var_9;
                            arr_46 [i_0] [i_1] [i_0] [i_12] [i_13] = (var_7 == 0);
                            var_24 = (arr_6 [i_13]);
                            var_25 = (min(var_25, var_1));
                        }
                        arr_47 [i_0] = 6;

                        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                        {
                            arr_50 [i_0] [i_1] [i_11] = (((~1) ? (~var_2) : (var_4 % var_9)));
                            arr_51 [i_14] [i_12] [i_11] [i_0] [i_0] = 853531341;
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                        {
                            arr_56 [i_0] [7] [7] [7] [i_15] [7] [i_15] = 2147483647;
                            arr_57 [i_0] [i_1] [i_12] [i_12] [1] [i_12] [i_12] = (~0);
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                        {
                            var_26 = ((((!(arr_52 [i_0] [i_0] [i_11] [i_12] [0] [i_16])))));
                            var_27 = ((~(arr_53 [17] [12] [i_11] [i_12] [i_12] [i_11] [i_11])));
                            arr_60 [i_16] [i_16] [i_12] [i_11] [1] [i_16] [i_0] = ((-32767 ? ((var_0 ? var_1 : (arr_31 [i_0] [i_0]))) : var_8));
                        }
                        arr_61 [i_1] [i_0] = (0 && 8191);
                        arr_62 [i_1] [i_1] [i_1] [i_1] = (arr_25 [i_1] [i_12]);
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        var_28 = -31993;
                        arr_66 [i_17] [i_17] [i_17] [i_0] = ((-(((var_8 || (arr_25 [1] [i_0]))))));

                        for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                        {
                            arr_70 [i_0] [i_0] [i_0] [i_17] [i_0] = (arr_1 [i_1] [i_17]);
                            arr_71 [23] [i_11] [i_17] = (arr_24 [i_18] [15] [i_11]);
                            var_29 = (!-18446744073709551615);
                        }
                        for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
                        {
                            var_30 = 0;
                            var_31 = (arr_37 [i_19]);
                            var_32 = (((~-1) & (((arr_43 [i_0] [i_11]) ^ var_9))));
                            arr_76 [1] [i_1] [i_11] [i_17] [1] = ((2533993267235694288 ? 172 : 21));
                        }

                        for (int i_20 = 0; i_20 < 24;i_20 += 1)
                        {
                            var_33 = (!255);
                            arr_79 [i_0] [i_20] [i_17] [i_17] [i_11] [i_1] [i_20] = 0;
                            var_34 = (18446744073709551615 ^ var_0);
                            var_35 = (((arr_34 [i_20] [0] [i_0]) ? (arr_43 [i_0] [i_17]) : ((1 ? var_7 : (arr_34 [i_0] [i_1] [i_11])))));
                        }
                    }
                    for (int i_21 = 0; i_21 < 24;i_21 += 1) /* same iter space */
                    {
                        arr_84 [i_0] = (max((min(-9223372036854775802, 7294933774683921084)), (((-(arr_34 [6] [17] [17]))))));
                        var_36 = (((arr_35 [i_0] [i_0] [i_0] [i_0]) ? (((((min(var_5, var_7))) ? (((!(arr_42 [i_0] [i_0])))) : ((min(var_7, 29)))))) : (((3441435955 < 22850) & ((var_6 ? 251 : 18446744073709551596))))));
                        var_37 = (arr_49 [i_0] [i_21] [i_11] [i_21] [1]);
                    }
                    for (int i_22 = 0; i_22 < 24;i_22 += 1) /* same iter space */
                    {
                        var_38 = (min(((+((var_10 ? (arr_35 [i_0] [i_1] [i_11] [22]) : (arr_64 [i_22] [i_1] [i_1]))))), ((((min(-1, 0)))))));
                        arr_88 [i_0] [i_0] [i_11] [i_11] = (arr_2 [i_0]);
                        var_39 = (((~32767) % (((arr_68 [i_0] [i_0] [i_11]) ? var_1 : var_3))));
                        arr_89 [i_0] [i_1] [i_11] [i_0] = (((var_1 ? (((max(var_8, (arr_64 [i_22] [i_1] [i_22]))))) : (~var_5))));
                    }
                    var_40 |= ((((((arr_77 [i_0] [i_1] [20] [i_0] [i_1] [i_1] [12]) ? ((((!(arr_42 [i_0] [i_11]))))) : (-9223372036854775807 - 1)))) ? var_6 : (!20)));
                }
            }
        }
    }
    var_41 = (max(9223372036854775807, 0));
    var_42 = (min((min((((var_8 ? var_5 : 29))), 2305843009213693952)), (((!(((var_6 ? var_5 : 0))))))));
    var_43 = var_2;
    var_44 = (max(var_44, var_10));
    #pragma endscop
}
