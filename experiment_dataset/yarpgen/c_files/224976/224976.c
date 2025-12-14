/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_8);

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 += min((max((arr_1 [i_0]), 0)), -2081444817);
        arr_2 [i_0] = ((~(max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [11])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_13 = (((arr_0 [i_1] [i_1]) && ((((min(11394025662620275146, 29360128))) || (((var_6 - (arr_0 [i_1] [i_1]))))))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_14 = ((((min((arr_5 [i_1] [i_1] [11]), (arr_1 [i_1])))) || ((((arr_5 [i_1] [i_1] [7]) ? 16777215 : (-32767 - 1))))));
            arr_8 [i_1] [i_1] = (max((((arr_5 [i_1] [i_1] [i_1]) - (arr_5 [i_1] [5] [i_1]))), (arr_5 [i_2] [9] [2])));
            var_15 = (max(var_15, ((((min(4265607168, (arr_6 [i_2] [i_2])))) ? ((max((arr_3 [i_1]), var_8))) : ((((min((-2147483647 - 1), 202)) / (min((arr_1 [i_1]), (arr_5 [i_1] [i_1] [i_1]))))))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_12 [i_1] = (arr_9 [i_1] [i_2] [i_2]);
                arr_13 [i_1] [i_1] [i_1] = ((!(((var_5 / (arr_3 [i_1]))))));
            }

            /* vectorizable */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_16 = (min(var_16, (((!-22608) || (~var_3)))));
                    arr_18 [i_1] [i_2] [i_2] [i_5] [i_5] = ((16555504363181010146 * ((((!(arr_7 [i_1] [i_1] [i_4])))))));
                }
                arr_19 [i_1] = (((arr_3 [i_1]) - -4074058790005671069));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                arr_23 [i_2] = (arr_6 [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_17 = (max(var_17, (((~(arr_15 [i_1] [i_1] [i_6]))))));
                            arr_28 [i_7] [i_2] [i_2] = (arr_25 [i_7 + 1] [i_8] [10]);
                            arr_29 [i_1] [i_2] [i_7] [i_7 + 1] [i_8] = (arr_26 [3] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_2] [i_2]);
                        }
                    }
                }
                arr_30 [i_1] [i_1] = (arr_9 [i_1] [i_2] [i_6]);
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    arr_36 [i_10] [i_10] [i_10] [i_10] = ((arr_3 [i_9 + 2]) == (arr_3 [i_9 - 1]));
                    arr_37 [i_2] [13] = (arr_1 [i_9 + 2]);
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_18 -= (~var_10);
                    arr_41 [i_1] [i_2] [i_2] [i_9] [i_11] = ((((((arr_7 [3] [3] [i_9]) | 211))) ? (arr_20 [i_9 + 2] [i_2] [5]) : (arr_15 [i_11] [i_2] [i_1])));
                    var_19 = var_5;
                }
                var_20 *= (((~256) ? -17944 : (((arr_15 [i_2] [9] [i_9]) - var_2))));
                arr_42 [i_2] [i_2] = (arr_14 [i_2] [i_9 + 2] [i_9]);
                arr_43 [i_1] [i_2] [i_2] [i_2] = var_3;
            }
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            arr_47 [i_1] = (min(((~(max((arr_45 [i_1] [i_12]), 255)))), (((1 | ((((arr_11 [i_12]) > -468727529))))))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 11;i_15 += 1)
                        {
                            var_21 ^= ((!(arr_34 [i_1] [i_1] [i_15 + 3] [i_1])));
                            var_22 = (min(var_22, (((1518589095778534961 ? ((~(arr_25 [i_1] [i_1] [9]))) : (((((arr_54 [i_1] [i_1] [i_1] [i_1]) && var_6)))))))));
                        }
                        var_23 = ((((max((((!(arr_22 [i_1] [i_12] [i_13] [i_14])))), (((arr_46 [i_1] [i_1]) ? (arr_56 [i_12]) : (arr_3 [i_14])))))) == ((((max((arr_54 [i_1] [1] [i_13] [i_14]), (arr_34 [i_1] [i_1] [i_13] [i_13])))) ? ((((arr_11 [i_1]) / 17944))) : (min(var_2, -284973233))))));
                    }
                }
            }
            arr_58 [i_12] [i_12] [i_1] = -17928;
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 13;i_17 += 1)
                {
                    {
                        var_24 = (((max((arr_6 [i_1] [i_1]), (arr_14 [12] [i_1] [i_16]))) > (max((var_10 / var_2), 3681328010))));
                        arr_64 [i_1] [i_1] [7] |= (max(((~(((arr_11 [i_12]) ^ (arr_60 [i_16]))))), (arr_17 [1] [i_12] [7] [i_17] [i_17 + 1] [i_17 + 1])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
        {
            arr_67 [11] [i_18] [i_1] = -8;
            arr_68 [i_1] [i_1] [i_1] = ((-17945 ? (arr_44 [i_1]) : (arr_44 [i_1])));
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
    {
        var_25 = (~-32758);
        arr_73 [i_19] = var_3;
        arr_74 [i_19] = (((arr_40 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]) & (arr_40 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])));
        arr_75 [i_19] [i_19] = ((!((((arr_7 [i_19] [i_19] [i_19]) * var_1)))));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 14;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 14;i_23 += 1)
                        {
                            {
                                arr_86 [i_23] [i_21] [2] [i_21] [i_19] = (~((~(arr_31 [i_19] [i_19] [i_21] [i_22]))));
                                arr_87 [2] [2] [i_22] [10] [i_21] = (arr_80 [i_19] [i_19] [i_21]);
                                arr_88 [i_19] [i_20] [i_21] [i_21] [i_21] [i_23] = (((arr_77 [i_19] [i_19] [i_19]) - var_0));
                                arr_89 [i_23] [12] [i_21] [i_21] [i_23] [i_19] = (arr_31 [i_19] [i_19] [i_22] [i_23]);
                            }
                        }
                    }
                    arr_90 [i_20] [i_20] [i_21] [8] = (29360128 * var_10);
                }
            }
        }
    }
    #pragma endscop
}
