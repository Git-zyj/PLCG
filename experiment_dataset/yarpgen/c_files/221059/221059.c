/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 |= (var_4 % var_0);
    var_14 = (max(var_14, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (arr_4 [i_0] [i_2]);
                    var_15 -= (~1);
                    var_16 &= (~(arr_4 [i_2 - 2] [i_2 + 1]));
                    var_17 = ((-11376 ? -19387 : -5884868728244188669));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_18 = (!-19409);
                    var_19 = (max(var_6, 1));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_20 = (min(var_20, (((~(arr_9 [i_0] [i_0] [i_0]))))));
                        var_21 = (max((min(94, 11395)), (min(9429, 224))));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_22 = (1 && 11390);
                        arr_19 [i_6] [i_0] [i_0] [i_0] &= ((~((min(-8759, 1)))));
                        var_23 = ((-15 ? var_2 : 127));
                        arr_20 [i_1] [3] [i_4] = (arr_16 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_24 = (17 / (-127 - 1));
                        var_25 = -102002446;
                        var_26 |= (~var_0);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_31 [9] [i_1] [i_1] [i_1] [i_9] = (min(54141, 44859));
                                var_27 = var_0;
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    var_28 = ((var_1 ? var_11 : (((max((arr_21 [i_1] [i_10] [i_10 - 1] [i_10] [i_10 + 1]), 27392))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_29 *= (max(((var_7 ? -27413 : (arr_33 [i_0] [i_1] [i_12]))), 1));
                                var_30 = 4224822565;
                            }
                        }
                    }
                }

                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 0;i_15 += 1)
                        {
                            var_31 = (min((((!((min((arr_8 [i_14] [i_1] [i_1]), 1)))))), (min(var_2, (((!(arr_8 [i_0] [i_1] [i_1]))))))));
                            var_32 = (min(1279888432, ((~(arr_44 [i_0] [i_0] [2] [0])))));
                            var_33 = (((arr_10 [i_0] [i_1] [i_1]) ? (arr_25 [i_0] [i_1] [i_13] [i_13] [i_14] [i_15]) : (max(var_8, (arr_6 [i_15 + 1] [i_1])))));
                        }
                        for (int i_16 = 0; i_16 < 14;i_16 += 1)
                        {
                            var_34 = (~(0 & -6691438576334027849));
                            var_35 = ((!((max(504108779342732250, 114)))));
                            var_36 = (var_4 ? ((-(arr_21 [i_1] [i_1] [i_1] [i_14] [i_16]))) : ((min(1712367925, (arr_43 [i_0] [i_1] [1] [i_14] [i_16] [i_13])))));
                        }
                        for (int i_17 = 1; i_17 < 11;i_17 += 1)
                        {
                            var_37 = ((27392 > ((((max(18221566363332804470, 44859))) ? 54130 : 1300415612))));
                            arr_53 [i_0] [i_14] [i_1] [i_1] [i_14] [i_17] [i_17 + 3] &= (arr_37 [i_0] [i_1] [i_14] [i_14] [i_17] [i_14] [i_17]);
                        }
                        var_38 = (min(var_38, (arr_1 [i_0])));
                        var_39 |= ((((max((arr_47 [12] [i_0] [i_0] [i_1] [i_13] [i_14] [i_14]), -13683))) ? ((min((arr_49 [i_14] [i_0] [i_1] [i_0] [i_0]), 1211364577))) : (((((8816 ? 9205789606995111571 : var_2))) ? (arr_3 [i_0]) : (max((arr_25 [i_0] [1] [i_13] [i_13] [i_14] [i_14]), var_9))))));
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        for (int i_19 = 4; i_19 < 12;i_19 += 1)
                        {
                            {
                                var_40 = (((max((arr_45 [i_0] [9] [9] [i_0] [i_1]), (43 + 662549854))) - (((var_7 ? 1 : ((-359221384 ? var_7 : (arr_6 [i_0] [i_1]))))))));
                                var_41 = ((((min((min((arr_16 [i_0] [i_0] [6] [i_0] [i_18] [i_18]), var_9)), (((63949 ? -4 : 254)))))) ? var_10 : ((((min(var_7, (arr_45 [i_1] [i_18] [i_0] [i_0] [i_1])))) ? (min((arr_44 [i_0] [i_13] [i_18] [i_19]), (arr_54 [10] [i_1] [i_13] [i_18]))) : (arr_32 [i_18] [i_0] [i_1] [i_0])))));
                            }
                        }
                    }
                    var_42 = (max(var_42, (((!(((61182675 ? (min((arr_27 [i_0] [i_1] [i_0] [i_13]), (arr_52 [i_13] [i_1] [i_1] [i_0] [i_0]))) : (arr_21 [i_0] [i_13] [i_0] [i_1] [i_0])))))))));
                }
                for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
                {
                    var_43 = var_9;
                    var_44 |= ((~((1 ? (134 * 1) : (~var_6)))));
                }
                for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 14;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 14;i_23 += 1)
                        {
                            {
                                var_45 = (arr_18 [i_0] [i_1] [i_22] [i_0]);
                                var_46 -= (((arr_62 [i_22] [i_0]) ? ((var_6 ? (arr_48 [i_0] [i_0] [i_0] [2] [i_0]) : (arr_62 [i_0] [i_1]))) : (max((arr_62 [i_21] [i_0]), 1))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 14;i_24 += 1)
                    {
                        arr_71 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (arr_63 [i_21] [i_0]);
                        arr_72 [i_1] = var_9;
                        var_47 = (((arr_48 [9] [i_1] [9] [i_24] [i_24]) ? ((var_7 ? (arr_39 [i_21]) : 1)) : (arr_23 [i_0])));
                    }
                }
                var_48 += (arr_6 [9] [i_0]);
                arr_73 [i_1] = -10;
            }
        }
    }
    var_49 = (max(var_49, (((-var_8 ? 7405855814716540794 : var_10)))));
    #pragma endscop
}
