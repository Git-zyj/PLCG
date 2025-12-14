/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= 3;
    var_19 = 34359738367;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_20 = (arr_1 [i_0]);
                        var_21 *= arr_2 [i_2];
                        var_22 += (~var_15);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] = ((var_12 ? (arr_8 [i_0] [i_0] [i_4 + 2] [i_4 + 2]) : 0));
                                var_23 *= var_11;
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_20 [5] [i_0] [i_6] = -var_9;
                        var_24 = (~(arr_9 [i_0] [i_0] [i_0] [i_6]));
                        var_25 &= ((var_14 || var_10) ? (arr_1 [i_2]) : (arr_11 [i_0] [i_2] [i_0] [6]));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_26 *= (~var_11);
                        var_27 = (!var_10);
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {

                        for (int i_9 = 2; i_9 < 6;i_9 += 1)
                        {
                            var_28 += (arr_11 [i_2] [i_2] [i_2] [i_2]);
                            var_29 &= (var_15 * -4);
                            var_30 = (min(var_30, -3));
                        }
                        arr_29 [i_0] [i_1] [i_1] [i_1] = arr_0 [i_0];
                        var_31 *= (((arr_10 [i_8] [i_8]) ? 18446744073709551614 : var_16));
                    }
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        var_32 = (max(var_32, 0));
                        var_33 = (arr_24 [i_0] [i_0] [i_10 + 1] [i_0]);
                        arr_32 [i_0] [9] [i_2] [i_10] = var_13;
                    }
                    arr_33 [i_0] = var_2;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_34 = (min(var_34, var_0));
                                arr_40 [i_0] [i_1] [i_0] [i_11] [i_12] [6] = ((!(arr_25 [i_0])));
                                var_35 = var_15;
                            }
                        }
                    }
                }
                for (int i_13 = 2; i_13 < 9;i_13 += 1) /* same iter space */
                {
                    arr_43 [i_0] [i_1] [i_13] = (-(!var_0));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_36 = (max((((~(arr_34 [i_0] [i_1] [i_13 - 1] [i_14] [i_15])))), ((var_13 ? (arr_23 [i_0] [i_1] [i_0] [i_14]) : var_2))));
                                arr_51 [6] [i_1] [i_0] [i_0] [2] [i_15] [i_14] = var_4;
                                var_37 = 2282555592;
                                var_38 = ((((~(arr_0 [i_0]))) > 9223372036854775805));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 2; i_16 < 9;i_16 += 1) /* same iter space */
                {
                    var_39 = (((arr_44 [i_16 - 2] [i_16 - 1] [i_16 + 1]) ? var_16 : 13));
                    var_40 = (var_13 ? (~var_7) : ((var_9 ? var_12 : var_8)));
                }
                for (int i_17 = 4; i_17 < 6;i_17 += 1)
                {
                    var_41 = (max(var_41, ((max((~var_14), ((~(~19))))))));
                    var_42 = (max(var_42, var_3));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            {
                                var_43 = var_13;
                                var_44 = (arr_34 [3] [i_18] [i_17 + 4] [i_1] [5]);
                            }
                        }
                    }
                    arr_64 [i_0] [i_0] = (max(var_6, (!var_8)));
                }
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 10;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 10;i_22 += 1)
                        {
                            {
                                var_45 = (min(var_45, ((max((((3 ? 71 : 0))), -8930091374384543968)))));
                                var_46 = (max(var_46, (arr_21 [i_22] [i_21] [i_20] [i_1] [i_0] [i_0])));
                                var_47 = (((-(arr_31 [i_0] [i_1] [i_1] [i_1] [i_22] [0]))));
                            }
                        }
                    }
                }
                var_48 *= (-(!1206));
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 10;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 10;i_24 += 1)
                    {
                        {
                            var_49 = (~-var_4);

                            /* vectorizable */
                            for (int i_25 = 0; i_25 < 10;i_25 += 1)
                            {
                                var_50 += 0;
                                var_51 = 20911;
                                var_52 *= (((arr_65 [i_1] [i_1] [i_23]) > (arr_47 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                            for (int i_26 = 1; i_26 < 7;i_26 += 1)
                            {
                                var_53 *= (max(-255, (((max(var_2, var_7))))));
                                arr_84 [i_0] [4] [i_23] [i_0] [i_26 + 2] [i_26] = (max(var_2, (-1 & var_12)));
                                var_54 += ((-((14 ? (arr_72 [i_0] [i_1] [2] [i_24] [i_26] [7]) : var_4))));
                            }
                            for (int i_27 = 0; i_27 < 10;i_27 += 1)
                            {
                                arr_87 [i_0] [i_1] [i_0] [i_23] [i_27] [i_27] = ((20886 ? (max(1339201807, 24)) : 0));
                                var_55 = (max(var_8, (max((7037080243162784971 || 1), (arr_52 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_56 &= (max((~var_10), (max((max(var_12, var_10)), var_5))));
    #pragma endscop
}
