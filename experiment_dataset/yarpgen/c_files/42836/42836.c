/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42836
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
                var_18 = (((((arr_3 [i_1] [15] [i_1]) ? -23752 : (arr_0 [i_0])))) ? ((max(var_16, ((var_7 ? var_0 : var_0))))) : (((arr_4 [i_1]) - -30254)));
                arr_5 [i_0] [i_1] [i_1] = (arr_3 [i_0] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = (((arr_11 [i_3] [i_4] [i_4] [i_6]) ? var_13 : (((((arr_4 [i_3 - 2]) >= var_11))))));
                                var_20 = (~var_2);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_21 = ((((((arr_10 [i_4] [i_4]) ? (arr_10 [i_4] [i_4]) : var_11))) ? ((((!((((arr_14 [i_3 - 2] [i_8]) ? var_3 : var_15))))))) : var_13));
                                var_22 = (arr_7 [i_7]);
                            }
                        }
                    }
                    var_23 &= ((var_15 % (((((var_6 ? (arr_15 [3] [i_4 + 2] [8] [4] [i_2]) : var_7))) | (min(var_12, var_8))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_24 = ((!((((arr_13 [i_9] [i_9] [i_9]) ? (arr_13 [i_9] [i_10] [i_11]) : var_13)))));
                    var_25 = (((-(arr_15 [i_9] [i_9] [i_9] [i_10] [i_9]))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_26 = ((!((((arr_3 [i_9] [i_10] [i_13 + 1]) ? ((var_2 ? (arr_0 [i_9]) : -4)) : ((var_11 ? (arr_12 [i_11] [i_10]) : var_10)))))));
                                arr_40 [i_9] [i_10] [i_11] [i_9] [i_13 - 1] = (((((var_5 ? var_15 : 0))) - ((115 ? (~-8884251257080242317) : (var_8 != 45)))));
                            }
                        }
                    }

                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        arr_43 [i_9] [i_11] [i_11] &= (max(62057, (-32767 - 1)));
                        var_27 = ((10337431836303634197 ? -6935 : 30253));
                        var_28 = (max(var_28, (((((max((arr_41 [i_10] [i_10] [i_10] [i_10] [1]), (arr_41 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? ((((arr_41 [i_9] [i_10] [4] [i_11] [i_14]) == (arr_41 [i_9] [i_10] [i_10] [i_10] [i_14])))) : ((min((arr_41 [6] [i_10] [i_11] [i_14] [i_11]), (arr_41 [i_9] [i_9] [i_10] [i_11] [i_14])))))))));
                    }
                    for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                    {
                        var_29 = (arr_41 [i_9] [7] [i_10] [i_11] [i_15]);
                        arr_46 [i_9] [i_9] [i_9] = (var_9 ? ((~((-(arr_26 [i_15]))))) : (max(var_10, (-44 ^ 20))));
                    }
                    for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 10;i_17 += 1)
                        {
                            arr_52 [i_9] [i_9] [8] [i_16] [i_16] [i_9] = 26039;
                            arr_53 [i_9] [i_10] [i_10] = -255;
                        }
                        for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                        {
                            var_30 -= (max((((!(((3 * (arr_14 [i_9] [i_9]))))))), ((((min(var_2, var_2))) ? (((1 ? (arr_39 [i_16] [i_16]) : var_16))) : -2065643889))));
                            arr_57 [i_9] [i_9] [i_10] [i_10] [i_11] [i_9] [i_9] = (((!1) ? ((((!(arr_33 [i_9]))) ? var_12 : (arr_7 [i_10]))) : (0 <= 2249726856)));
                            var_31 = (((0 ? ((min(var_9, (arr_48 [i_9] [i_9])))) : 2249726856)));
                        }
                        for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
                        {
                            var_32 = (((var_10 == (arr_48 [i_9] [i_19]))) ? (arr_0 [i_9]) : (arr_44 [i_9] [i_10] [i_11] [i_16] [i_19]));
                            arr_60 [i_9] [i_9] = (var_12 ? (arr_39 [i_9] [i_9]) : ((min((arr_0 [i_9]), (arr_0 [i_10])))));
                            var_33 = (arr_20 [6] [i_10] [i_11] [i_9]);
                            var_34 = ((((((arr_26 [i_16]) ? (arr_39 [i_9] [i_9]) : (arr_26 [i_9])))) ? (((65512 ? ((21827 ? 37 : 30253)) : 65535))) : (((arr_38 [i_19] [i_16]) ? (arr_9 [i_19] [i_11] [i_10]) : (arr_59 [i_9] [2] [i_11] [i_16] [i_9] [i_19] [i_19])))));
                        }
                        var_35 = (max(((min(-1, (arr_37 [i_9] [i_10])))), (arr_47 [i_9] [4] [i_10] [i_10] [i_11] [i_16])));
                        arr_61 [i_9] [10] [i_9] [i_16] = (arr_39 [i_9] [i_9]);
                        var_36 = ((((var_13 ? ((31495 ? (arr_50 [3] [i_9] [9] [i_11] [i_9] [i_16] [i_16]) : var_5)) : (-31495 - var_15))) | (((arr_19 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? 32 : ((max((arr_24 [i_16]), var_4)))))));
                    }
                }
                var_37 = (max(var_37, ((max(-1194820874, (~-219142585))))));
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 11;i_22 += 1)
                        {
                            {
                                var_38 = (((((474075839 ? ((min((arr_50 [i_9] [i_10] [i_10] [i_20] [i_9] [i_22] [i_22]), -1865527584))) : 0))) ? (((var_10 == (arr_35 [i_9] [i_9] [i_20] [i_21] [i_20] [i_20])))) : (arr_2 [8] [8] [8])));
                                var_39 = ((~((~((var_6 ? var_9 : (arr_36 [i_9])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_40 = 20535;
    #pragma endscop
}
