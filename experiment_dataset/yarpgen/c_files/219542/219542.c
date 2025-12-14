/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? var_1 : var_13));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 = (arr_0 [1] [i_0]);
        arr_4 [i_0] [4] = var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] = arr_1 [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (arr_0 [i_2] [i_1])));
                                var_19 = (max(var_19, ((((((var_2 ? var_7 : ((((arr_7 [i_2] [i_2]) ? var_11 : (arr_1 [i_3]))))))) ? ((var_8 ? var_7 : (arr_7 [i_0] [i_0 - 1]))) : (arr_15 [i_0] [i_0] [i_0] [12] [i_2]))))));
                                var_20 = var_13;
                                var_21 = (arr_9 [i_0] [i_0] [i_2]);
                                var_22 = (max(var_22, var_4));
                            }
                        }
                    }
                    var_23 |= ((((((((var_3 ? var_15 : var_15))) ? var_15 : ((var_5 ? (arr_12 [i_0] [i_0] [i_2] [i_1] [i_2] [i_2]) : (arr_7 [i_0 - 1] [i_1])))))) ? var_0 : ((var_15 ? var_0 : var_2))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_24 = arr_7 [i_1] [i_0 + 1];
                        arr_19 [i_0] [i_0] = (arr_3 [1]);
                        var_25 = (arr_2 [i_0 + 2]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_26 = (min(var_26, ((((((var_4 ? ((((arr_13 [i_0] [i_2] [i_0] [i_0] [i_0]) ? var_10 : (arr_3 [i_0])))) : var_8))) ? ((var_1 ? (arr_0 [i_2] [i_7]) : (((arr_12 [i_6] [i_6] [i_2] [i_6] [i_6] [i_6]) ? (arr_8 [i_7] [i_0 + 1]) : (arr_12 [8] [i_1] [i_2] [i_6] [i_7] [i_7]))))) : (arr_8 [i_0] [12]))))));
                            var_27 *= (((((124 ? 8 : 65531))) ? (arr_10 [i_0] [i_0] [i_0]) : (((((var_9 ? (arr_2 [i_1]) : var_11))) ? ((((arr_22 [i_0] [i_1] [i_2] [i_6]) ? var_14 : (arr_8 [i_0] [2])))) : (arr_23 [i_1] [i_2] [i_6])))));
                            var_28 = (arr_9 [i_0] [i_6] [i_7]);
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_29 &= var_4;
                            arr_29 [i_0] [i_2] [i_1] [i_0] = (((((var_7 ? (((var_2 ? var_13 : (arr_22 [i_0 + 1] [i_1] [i_2] [12])))) : ((var_13 ? var_3 : (arr_16 [i_2] [i_6])))))) ? var_1 : (arr_16 [i_0] [i_1])));
                            var_30 = var_6;
                        }
                        arr_30 [i_0] [i_0] [i_2] [i_6] [i_0] [i_1] = (((arr_3 [i_0 - 1]) ? (((arr_22 [i_1] [i_1] [i_2] [i_2]) ? var_15 : var_12)) : var_6));
                        var_31 += var_12;
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_38 [i_0] [i_1] [i_2] [i_9] [i_10] = ((var_2 ? ((27 ? 16948497 : 7846064016126753026)) : 102));
                            var_32 = var_15;
                            arr_39 [i_0] [i_0 - 1] [i_0] [5] [i_0 - 1] = (((((var_4 ? ((10600680057582798611 ? var_7 : 8)) : (arr_25 [i_0] [i_1] [i_1] [i_1] [i_1])))) ? ((var_4 ? ((var_14 ? (arr_8 [i_0] [i_9]) : (arr_34 [i_2] [i_2]))) : var_3)) : (((var_9 ? var_10 : (arr_33 [i_2]))))));
                            var_33 = (arr_18 [i_1]);
                            var_34 = var_4;
                        }

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_42 [9] [i_0] [i_0 - 1] = (arr_27 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]);
                            var_35 ^= arr_25 [i_2] [i_1] [i_2] [i_2] [i_11];
                            var_36 = (min(var_36, var_0));
                            var_37 = var_12;
                        }
                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_38 = (((arr_20 [i_0] [i_1] [i_2] [4]) ? ((var_8 ? var_7 : var_2)) : (arr_7 [i_0] [i_0])));
                            var_39 = (max(var_39, ((((((16948497 ? -104 : 0))) ? (arr_18 [i_1]) : (arr_35 [i_0] [i_1] [i_2] [i_2] [i_9] [i_12]))))));
                        }
                        for (int i_13 = 1; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            var_40 *= (((((16294 ? 46721 : -47))) ? ((((((arr_3 [i_0 - 1]) ? (arr_44 [i_2]) : (arr_36 [i_0] [i_1] [i_2] [7] [12])))) ? var_4 : var_8)) : (((arr_12 [12] [i_1] [i_2] [i_9] [i_13] [i_0]) ? var_0 : var_13))));
                            var_41 *= (arr_15 [i_0 + 2] [10] [i_2] [i_0 + 2] [i_2]);
                        }
                        for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            var_42 = var_15;
                            var_43 = (((((arr_35 [i_0 + 2] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [0]) ? var_6 : (((arr_5 [1] [i_1] [i_1]) ? (arr_14 [i_0] [i_1] [i_2] [i_9] [i_1]) : var_1))))) ? var_1 : var_7);
                            var_44 = (arr_48 [i_0] [i_0] [1] [i_0] [i_14 - 1]);
                        }
                        var_45 = var_8;
                    }
                }
            }
        }

        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 3; i_17 < 12;i_17 += 1)
                {
                    {
                        arr_56 [i_0] [i_0] = var_15;
                        var_46 -= var_1;
                    }
                }
            }
            var_47 = var_8;
            var_48 = ((((((((var_5 ? (arr_37 [i_15] [i_15] [i_15] [i_0 + 2] [i_0]) : var_11))) ? var_6 : var_10))) ? var_1 : (((arr_41 [i_0 + 1] [i_0 + 1] [i_0]) ? (arr_24 [3] [i_15] [4] [8] [i_15] [i_15]) : (((arr_21 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0] [i_0]) ? (arr_8 [i_0] [i_15]) : var_9))))));
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 12;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
            {
                arr_62 [i_0] [i_18 - 3] = (arr_13 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]);
                var_49 += var_14;
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        {
                            arr_69 [i_0] = ((var_11 ? (((arr_55 [i_18 - 2] [i_20]) ? (arr_61 [i_20] [i_19] [i_18]) : var_9)) : var_4));
                            arr_70 [i_0] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = (var_13 ? (arr_28 [i_0]) : var_14);
                            var_50 = (arr_8 [i_0] [i_21]);
                        }
                    }
                }
            }
            for (int i_22 = 0; i_22 < 13;i_22 += 1) /* same iter space */
            {

                for (int i_23 = 1; i_23 < 10;i_23 += 1)
                {
                    var_51 ^= ((var_10 ? ((((arr_24 [i_0 - 1] [i_18 - 1] [i_22] [i_23] [i_18] [i_22]) ? var_6 : (arr_46 [i_23] [i_23] [i_23 - 1] [i_23 + 1] [i_23] [i_23] [i_23])))) : (arr_32 [i_0] [i_18] [i_22] [i_23 + 1] [i_23 + 3])));
                    var_52 = ((arr_73 [2] [i_18] [10] [6]) ? (arr_1 [i_0 + 1]) : (arr_58 [i_0] [i_22] [i_23 + 3]));
                    arr_75 [1] |= var_5;
                }
                for (int i_24 = 0; i_24 < 13;i_24 += 1)
                {
                    var_53 = (min(var_53, var_10));
                    var_54 |= var_10;
                }
                var_55 = (arr_47 [7] [7] [i_0] [7] [7] [i_22]);
                arr_78 [4] |= ((30741 ? -8570995076685255141 : 20016));
            }
            arr_79 [i_18] [i_0] [i_18] = ((var_11 ? (arr_72 [i_0] [4] [i_0 + 1]) : (arr_23 [i_0] [i_0] [i_0 + 1])));
        }
    }
    #pragma endscop
}
