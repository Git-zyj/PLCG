/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = (min(var_0, (max(var_7, (var_3 + var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 -= ((+((((arr_0 [i_0] [i_1 - 1]) && (arr_1 [i_0] [i_0]))))));
                arr_5 [i_0] = ((min((arr_1 [i_1 - 1] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 - 1]))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_22 ^= (max(((-var_0 ? var_9 : (1 >> 0))), ((1 ? (arr_6 [i_0]) : (arr_6 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 ^= 1;
                                var_24 = ((((min(((max(1, 0))), (arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4])))) ? (((min(var_11, (arr_4 [i_4 - 1] [i_4 - 1] [i_2]))))) : (((max((arr_4 [i_0] [i_1 - 1] [i_3]), 1))))));
                            }
                        }
                    }
                    arr_16 [i_2] = (min((((arr_1 [i_1 - 1] [i_2]) / (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))), ((max(1, (-32767 - 1))))));
                    arr_17 [i_0] [i_1] [i_2] = (arr_9 [i_0] [i_2] [i_0] [i_0]);
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_20 [i_0] [i_5] = ((((min(0, 2044))) ? ((min((arr_11 [i_1 - 1] [i_1 - 1]), var_17))) : ((min(var_11, (arr_11 [i_1 - 1] [i_1 - 1]))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5] [i_7] = ((var_2 ? (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5 - 1] [i_5] [i_5 - 1]) : (arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_5 - 1] [i_5] [i_5 - 1])));
                            var_25 = (min(var_25, var_13));
                            arr_28 [i_0] [i_1] [i_5] [i_5] = var_6;
                            var_26 += (0 > 1);
                        }
                        var_27 = (max(var_27, 1));
                        var_28 = (((var_14 > 1) ? 1 : (1 > 0)));
                        var_29 += var_2;
                        var_30 -= ((1 ? 1 : (arr_12 [i_1 - 1] [i_1 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_31 = 1;
                        var_32 = (arr_7 [i_0] [i_1 - 1] [i_0]);
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_35 [i_0] [i_1] [i_0] [i_9] |= -7302;

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_33 = (arr_32 [i_5]);
                            var_34 = ((var_15 ? (arr_22 [i_0] [i_1] [i_5] [i_1] [i_1 - 1] [i_5 - 1]) : var_8));
                            var_35 = (max(var_35, (((~((var_14 ? (arr_31 [i_0] [i_1] [i_5] [i_0] [i_1]) : var_13)))))));
                        }
                        var_36 = arr_3 [i_1 - 1] [i_1 - 1] [i_5 - 1];

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_37 ^= (arr_38 [i_0] [i_1] [i_11] [i_9]);
                            var_38 *= ((arr_29 [i_1 - 1] [i_5 - 1]) >= (arr_29 [i_1 - 1] [i_5 - 1]));
                            arr_42 [i_0] [i_1] [i_5] [i_5] [i_11] [i_0] [i_5] = ((-1 ? (arr_24 [i_5] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5 - 1] [i_5]) : var_9));
                            var_39 |= (arr_36 [i_0] [i_9]);
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_40 = (((arr_34 [i_1] [i_1] [i_0] [i_0]) ? (arr_3 [i_1 - 1] [i_1 - 1] [i_5 - 1]) : (arr_33 [i_5] [i_5])));
                            arr_45 [i_5] [i_1 - 1] [i_1] [i_1 - 1] [i_1] = (((((0 ? 32754 : var_18))) ? 1 : (arr_8 [i_1 - 1] [i_1 - 1] [i_5 - 1] [i_12])));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_41 = (-32767 - 1);
                            var_42 = (min(var_42, (((-(arr_43 [i_5 - 1] [i_1 - 1] [i_1 - 1] [i_0] [i_13]))))));
                            var_43 = (!var_10);
                            var_44 = (arr_24 [i_5] [i_1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1]);
                        }
                    }
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        arr_55 [i_0] [i_0] [i_14] [i_15] [i_14] [i_1 - 1] = (min((arr_6 [i_14]), ((min(1, (arr_15 [i_0] [i_1] [i_1 - 1] [i_15] [i_14]))))));
                        arr_56 [i_15] = (((0 ? ((var_13 ? var_6 : -32762) : (arr_19 [i_0])))));
                        var_45 = 0;
                    }
                    var_46 ^= (((max((((arr_3 [i_0] [i_0] [i_14]) ? var_10 : (arr_37 [i_0] [i_1] [i_14] [i_1] [i_0]))), var_7)) * (((!(arr_51 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    arr_57 [i_0] [i_1] [i_14] |= 0;

                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_47 = (arr_25 [i_0] [i_1] [i_0] [i_16] [i_16] [i_16]);
                        var_48 = (~1);
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_49 = -1;
                        arr_62 [i_0] [i_0] [i_0] = (((arr_48 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? -1 : var_11));
                        var_50 ^= (arr_51 [i_1 - 1] [i_1] [i_17] [i_17] [i_17] [i_17]);
                        var_51 |= min(32766, ((min((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), var_2))));
                    }
                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        var_52 = 1;
                        var_53 = (((((~(arr_54 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1])))) ? (arr_54 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 - 1]) : (arr_54 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        arr_65 [i_0] [i_1] [i_14] [i_18] [i_1] = (((min((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_31 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_18]))) ? ((min(1, (arr_7 [i_1 - 1] [i_1] [i_1 - 1])))) : 0));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_70 [i_0] [i_1 - 1] [i_14] [i_14] [i_14] = ((1 | (arr_11 [i_1 - 1] [i_1 - 1])));
                        arr_71 [i_14] [i_1] [i_14] [i_14] = ((0 ? (arr_21 [i_19] [i_14] [i_1 - 1] [i_0]) : var_13));
                        var_54 = var_18;
                        var_55 = (((arr_23 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_40 [i_0] [i_1 - 1] [i_14] [i_19] [i_1 - 1] [i_1 - 1]) : ((-(arr_34 [i_0] [i_1 - 1] [i_14] [i_19])))));
                    }
                }
                for (int i_20 = 1; i_20 < 20;i_20 += 1)
                {
                    var_56 = (min((((arr_61 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_20 - 1]) ? var_12 : var_12)), 32759));
                    var_57 ^= (min(((min((arr_23 [i_1] [i_1 - 1] [i_20 + 1]), 1))), 1));
                }
            }
        }
    }
    var_58 = (-32767 - 1);
    var_59 = max(var_2, var_0);
    #pragma endscop
}
