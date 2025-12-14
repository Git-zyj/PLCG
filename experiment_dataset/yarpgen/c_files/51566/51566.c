/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((65520 ? 22 : 2366869182));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = min((arr_1 [i_0]), ((750995185 ? 3234263198 : 1)));
        arr_4 [i_0] = (((arr_0 [i_0]) ? (arr_1 [6]) : (((((var_2 ? var_7 : (arr_1 [2])))) ? (((arr_0 [i_0]) ? var_7 : var_0)) : var_0))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_9 [i_0] = var_9;
            var_11 = (var_2 ? (arr_1 [i_0]) : (arr_8 [i_1]));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_22 [i_0] [i_4] = (min(var_6, (arr_2 [i_0])));
                            arr_23 [i_0] [i_2] [i_3] [i_0] [i_5] [i_2] = var_8;
                            arr_24 [i_0] [i_0] [11] [i_5] = var_1;
                            var_12 = ((((min(var_0, var_5))) ? (min(((var_4 ? var_6 : var_3)), var_6)) : (((arr_6 [i_0] [i_0]) ? (arr_14 [i_5 - 1] [i_5 + 1] [i_0]) : (arr_12 [i_3] [11])))));
                            arr_25 [i_5] [i_5] [i_5] [10] [i_5 + 3] |= (min((arr_8 [i_5 + 1]), ((((arr_17 [i_5 + 1] [i_5] [i_5 + 3] [i_5 + 1]) ? (arr_6 [6] [i_5 + 2]) : var_6)))));
                        }
                    }
                }
            }
            var_13 = var_6;
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_14 = (((var_0 ? var_7 : var_2)));

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_35 [i_0] = (((arr_13 [i_0] [i_6 + 1]) ? var_4 : ((((min(var_8, (arr_7 [i_0] [i_7])))) ? var_6 : (((arr_21 [i_0] [i_0] [i_0] [i_8]) ? var_6 : var_5))))));
                            var_15 = var_8;
                            var_16 *= (min(var_5, (((((var_0 ? (arr_2 [i_9]) : var_6))) ? var_8 : (arr_31 [i_0] [i_9] [i_0] [i_9])))));
                            arr_36 [i_9] [i_8] [i_7] [1] [i_6] [i_0] [i_9] &= (((arr_33 [i_6 - 1] [i_6] [i_8 + 3]) ? (((arr_33 [i_6 + 1] [4] [i_8 - 2]) ? (arr_31 [i_6] [i_9] [i_6 + 1] [i_8 - 1]) : (arr_33 [i_6 - 1] [i_6 - 1] [i_8 + 2]))) : (min((arr_33 [i_6 - 1] [5] [i_8 + 2]), var_3))));
                            var_17 = var_7;
                        }
                    }
                }
                arr_37 [i_0] [i_0] = (min((arr_16 [i_0] [i_6 - 1] [i_0]), var_3));
            }
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        {
                            var_18 += var_9;
                            var_19 = (min(var_2, var_3));
                            var_20 ^= var_8;
                            arr_46 [2] [2] [i_10] [i_11] [i_0] = (((min((arr_13 [i_10 - 1] [i_6 + 1]), (arr_5 [i_0] [i_0])))) ? ((var_4 ? (arr_13 [i_0] [i_0]) : 49)) : ((((arr_15 [i_11] [i_11 - 1] [i_11] [i_11]) ? (arr_45 [i_11] [i_11 + 2] [i_11] [i_11 + 1] [i_11]) : (arr_45 [8] [i_11 + 2] [11] [11] [i_11])))));
                        }
                    }
                }
            }
        }
        for (int i_13 = 1; i_13 < 10;i_13 += 1)
        {
            arr_50 [i_0] = (arr_31 [i_0] [i_0] [i_13] [5]);

            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                arr_53 [i_0] [i_0] [i_0] = (arr_48 [i_0] [9] [i_0]);
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        {
                            var_21 = (min(var_7, ((((((var_5 ? var_8 : var_8))) ? (arr_43 [i_0] [i_13] [i_0] [8] [i_15] [i_16]) : (arr_38 [i_0] [3] [3] [i_15]))))));
                            arr_58 [i_0] = min(var_9, (min((min(var_0, var_1)), (arr_7 [i_0] [i_15 + 1]))));
                        }
                    }
                }
                arr_59 [i_0] [i_13 + 1] [i_0] = (arr_56 [i_0] [i_13] [1] [i_13] [i_13] [i_13]);

                for (int i_17 = 3; i_17 < 9;i_17 += 1)
                {
                    var_22 = var_5;
                    arr_62 [i_0] [i_13 + 1] [i_13] [i_13] = min(var_7, ((min(var_2, (arr_5 [i_0] [i_0])))));
                    var_23 = (((((min(var_5, var_9)))) ? (((var_0 ? var_9 : (arr_11 [i_0] [i_13] [i_14])))) : var_4));
                    var_24 = (arr_43 [i_0] [i_14] [i_0] [i_17] [i_17] [i_0]);
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 12;i_18 += 1)
                {
                    arr_65 [i_0] [1] [i_14] [0] [7] [i_0] = (((arr_61 [0] [i_13 + 2] [i_13] [i_0]) ? (arr_45 [i_13 - 1] [i_13 + 1] [i_13 + 2] [i_13 - 1] [i_13]) : (arr_54 [i_0] [i_0])));
                    arr_66 [i_0] = var_3;
                    var_25 = (max(var_25, (((arr_11 [i_0] [i_13 + 1] [i_14]) ? (arr_38 [i_0] [4] [4] [i_18]) : var_3))));
                    var_26 = (min(var_26, (((var_3 ? (arr_52 [i_0] [i_0] [9] [1]) : var_3)))));
                }
                for (int i_19 = 3; i_19 < 10;i_19 += 1)
                {
                    var_27 ^= (min((((((16 ? -3691218026655906982 : 576456354256912384))) ? (min(var_9, (arr_27 [i_0] [i_19]))) : (((arr_2 [10]) ? (arr_56 [i_19 - 3] [i_14] [i_0] [i_14] [1] [i_0]) : (arr_57 [i_13] [i_13 + 2] [1] [i_19] [i_19]))))), (arr_61 [i_0] [i_0] [i_0] [1])));
                    arr_69 [i_0] = arr_61 [i_0] [i_0] [i_14] [i_0];
                    arr_70 [i_0] [i_14] [i_14] [i_13] [i_0] = (var_1 ? ((((min(41, -1709852290080329777))) ? 2648110812 : 1032409392)) : (((var_7 ? (arr_45 [11] [i_13] [i_13 + 1] [i_13] [i_19 - 3]) : (arr_45 [0] [i_14] [i_13 - 1] [i_14] [i_19 + 1])))));
                    var_28 = (((((arr_31 [i_0] [i_0] [i_0] [i_19]) ? (min(-3017728722955604302, 2381083247)) : var_6))) ? (arr_63 [i_13 - 1] [i_19 - 2] [i_0]) : (((65535 ? 3587568788 : (arr_34 [i_19 - 3] [i_19] [i_14] [i_13] [i_0])))));
                }
            }
            arr_71 [i_0] = (min((arr_54 [i_13 + 2] [i_13 + 1]), ((var_0 ? var_0 : var_8))));
            arr_72 [i_0] [i_13] = (min((min((arr_40 [i_13 - 1] [i_13 - 1] [i_0] [1]), var_7)), ((var_2 ? var_8 : (arr_40 [i_13 + 2] [i_13 + 1] [i_0] [i_13])))));
            var_29 = (max(var_29, (min((arr_54 [i_13] [i_0]), (((((var_4 ? (arr_29 [i_0] [1]) : (arr_31 [i_0] [2] [i_0] [i_13])))) ? (((arr_26 [i_13] [6]) ? var_4 : var_3)) : (((arr_10 [i_13] [i_13] [i_13]) ? var_6 : var_6))))))));
        }
        arr_73 [i_0] [i_0] = ((((min((((arr_54 [i_0] [i_0]) ? var_2 : (arr_51 [i_0] [i_0] [i_0]))), ((((arr_8 [i_0]) ? var_4 : var_1)))))) ? var_2 : (arr_15 [i_0] [i_0] [i_0] [i_0])));
        arr_74 [i_0] = ((((min(var_2, (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_6 : (arr_20 [i_0] [i_0] [0] [i_0] [i_0]))) : (min(4294967289, 4294967289))));
    }
    #pragma endscop
}
