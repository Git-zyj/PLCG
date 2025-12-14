/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 *= (((min((~0), (arr_5 [i_0])))) && ((min((arr_6 [1]), ((0 ? 1 : 0))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_11 [i_2] [1] [i_0] &= (!1);
                    var_13 = (min(var_13, ((0 < (arr_4 [i_2])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 ^= (var_1 | var_10);
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = (!((((arr_0 [i_3]) | 0))));
                        var_15 -= 0;
                    }
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_18 [i_4] [1] [1] [i_0] |= (((max(1, 1))) == (((0 <= (arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] = 1;
                                var_16 |= (((((var_3 == (0 != 1)))) >> 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            {
                                var_17 *= (min(var_0, ((((arr_31 [i_8] [i_7 + 1] [i_4] [1] [1] [1]) > (arr_22 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))));
                                var_18 = (((min(1, (0 <= 1))) ? (max((1 | var_0), 1)) : (((max(var_6, var_3))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_19 |= (1 > (arr_21 [i_0] [1] [1] [i_0] [i_0] [i_0]));
                        arr_35 [i_0] [1] [i_4] [i_9] |= ((var_2 ? 1 : (var_8 > var_1)));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_20 -= (0 < 1);
                        arr_38 [i_0] [i_1] [i_0] [i_10] [i_4] [1] = 1;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_41 [i_1] [i_1] [i_1] [i_1] = ((var_9 ? (((!0) | 1)) : ((min(var_4, (((arr_6 [i_1]) != (arr_21 [i_0] [i_1] [i_0] [i_1] [i_4] [i_1]))))))));
                        arr_42 [i_0] [1] &= ((max((arr_17 [i_11] [i_4] [i_1]), 1)) && ((!(1 * 1))));
                        arr_43 [1] [1] [i_4] [i_1] = (((-(arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) > ((((arr_2 [i_4]) <= (arr_7 [i_1])))));
                    }
                    var_21 *= ((0 ? ((min((arr_22 [i_4] [i_1] [i_0] [i_0] [i_0]), (arr_6 [1])))) : 0));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_22 -= 0;
                        var_23 = arr_6 [i_1];
                        var_24 = (min(var_24, (0 == 1)));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_25 *= (arr_0 [i_1]);
                        var_26 = var_4;
                        arr_52 [i_0] [i_12] [i_1] = ((var_10 | (arr_8 [1] [i_14])));
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            {
                                var_27 ^= ((1 | (arr_53 [1] [1] [i_15] [i_16])));
                                var_28 = 0;
                                arr_58 [i_1] [i_1] [i_16] = 1;
                            }
                        }
                    }
                    var_29 = (((1 == 0) ? 1 : ((var_8 ? (arr_13 [i_1]) : (arr_48 [i_0] [i_0] [i_1])))));
                    var_30 = (arr_44 [i_12] [i_1]);
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {

                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        var_31 = ((((1 ? 1 : 1)) | 1));
                        var_32 -= (arr_13 [1]);

                        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                        {
                            arr_67 [i_1] [i_18] [i_0] [i_1] [1] [i_1] = (1 < 1);
                            arr_68 [1] |= 1;
                        }
                        for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                        {
                            arr_71 [1] [1] [1] [i_17] [1] [1] |= (1 | var_7);
                            var_33 = (min(var_33, (!1)));
                            var_34 |= ((~(((0 && (arr_24 [i_0] [1] [i_17] [1] [i_20]))))));
                            var_35 = (~1);
                        }
                    }
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        var_36 |= (max((((!(((var_6 ? var_10 : (arr_30 [i_0] [i_1] [i_1] [i_17] [i_0]))))))), 1));

                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            var_37 = 1;
                            var_38 = ((1 | var_1) && ((((arr_9 [i_0] [i_1] [i_0]) % ((0 ? 0 : 1))))));
                            arr_76 [i_1] [i_1] = (((((arr_60 [i_1] [i_1] [i_1]) % 1)) | (arr_15 [i_1] [i_17] [i_21] [i_22])));
                            arr_77 [i_0] [i_1] [1] [i_21] [1] |= var_1;
                        }
                        for (int i_23 = 0; i_23 < 1;i_23 += 1)
                        {
                            var_39 &= (~1);
                            var_40 = ((~(min(((min(1, (arr_36 [i_23])))), ((var_4 ? 0 : 1))))));
                            var_41 = (min(var_41, (min((((arr_3 [i_0] [i_17]) > var_10)), (((arr_3 [i_1] [i_17]) == 1))))));
                            arr_82 [i_0] [i_0] [i_0] [0] [i_23] |= 0;
                            var_42 = arr_44 [i_23] [i_0];
                        }
                        arr_83 [i_1] [1] [i_1] [1] [i_21] = (((((var_6 && (max(0, 1))))) | 1));
                        var_43 = (min(var_43, var_9));
                        var_44 *= (max(((min(0, 1))), (((arr_4 [i_0]) >> (arr_4 [i_1])))));
                    }
                    var_45 = (min(var_45, var_8));
                }
                arr_84 [1] |= (max((arr_61 [i_0] [1] [i_1] [i_1]), (((max(0, 0)) ? var_4 : ((1 ? 1 : 0))))));
            }
        }
    }
    var_46 += (((1 & 1) ? (((1 ? 1 : 0))) : (((var_9 && 1) | (!1)))));
    /* LoopNest 2 */
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 0;i_25 += 1)
        {
            {
                var_47 = (min(var_47, 1));
                arr_90 [1] |= (~0);
            }
        }
    }
    #pragma endscop
}
