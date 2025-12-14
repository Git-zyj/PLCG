/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = 21090;
                var_15 += ((var_3 / (((!(!44445))))));
                var_16 = (max(var_16, (arr_2 [1])));
                var_17 = -var_5;
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_18 = (min(var_18, (((-(min((arr_8 [i_2]), (arr_5 [2] [2]))))))));
        var_19 = (max(((7646 ? ((var_13 ? (arr_7 [i_2] [i_2]) : var_1)) : var_10)), (((-var_8 ? (((arr_6 [3] [i_2]) - var_3)) : (((var_9 ? (arr_7 [i_2] [i_2]) : 0))))))));
        var_20 = ((((max((arr_7 [i_2] [i_2]), 1735259563)))) ? (~var_7) : (((var_10 ? 173 : (arr_5 [i_2] [i_2])))));
        var_21 = (~var_1);
    }
    var_22 = var_6;

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_23 = var_3;
        var_24 = (((var_1 ? var_5 : 173)));
        var_25 = (+((min((arr_10 [i_3]), 1))));
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_26 = ((((min(var_10, var_1))) ? (arr_11 [i_5] [i_4] [1]) : (min((arr_11 [0] [i_4] [13]), ((var_3 ? var_7 : var_9))))));
                    var_27 = ((((min((arr_13 [i_3] [i_5] [i_5]), (arr_13 [i_3] [i_5] [i_5])))) ? (var_5 > 1) : ((min((arr_11 [i_4 + 1] [i_4] [i_4 + 1]), 124)))));
                }
            }
        }
    }
    for (int i_6 = 4; i_6 < 14;i_6 += 1)
    {
        var_28 = (((-(arr_17 [i_6] [i_6]))));
        var_29 = (max(var_29, (arr_19 [i_6 - 2])));
    }

    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    var_30 = ((~(max(3000638648, 44445))));

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        var_31 += (arr_24 [i_7] [i_8] [10] [i_7]);

                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_32 = (arr_29 [i_7] [i_7] [i_8] [i_8] [i_10 + 1] [i_11]);
                            var_33 -= (((((arr_29 [19] [19] [i_9] [i_9] [i_10] [1]) ? (arr_29 [i_11] [i_9] [i_9 + 2] [i_9] [i_7] [i_7]) : 1)) > (~var_3)));
                            var_34 = ((var_10 / var_9) ? var_5 : 32767);
                        }
                    }
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        var_35 += (min((var_6 >= var_5), (~var_7)));
                        var_36 = ((~(arr_30 [i_7] [i_7] [i_7] [i_9] [i_9])));
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 22;i_13 += 1)
                    {
                        var_37 &= ((!(((-(arr_32 [6] [10] [6] [i_8] [i_8]))))));
                        var_38 = (~((var_10 ? (arr_29 [i_13] [1] [1] [i_9] [i_8] [i_7]) : (arr_30 [i_9] [i_9] [i_9] [i_9 - 1] [i_9]))));
                        var_39 = 125829120;
                        var_40 = 44446;
                    }

                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_41 = ((((arr_24 [i_9] [7] [i_9 - 1] [i_9]) >= (((102 ? var_5 : var_11))))));
                        var_42 = var_12;

                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            var_43 = (min(var_43, (arr_25 [i_7] [i_9] [i_14] [1])));
                            var_44 = ((((((-8192 == (arr_22 [i_15]))))) | (((2838661425 >= (((((arr_30 [4] [4] [i_9] [i_9] [i_9]) && 21075)))))))));
                            var_45 = (var_9 % ((~(~var_11))));
                            var_46 = -5;
                            var_47 = ((+((-((max((arr_27 [i_9]), 83)))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_48 = ((!(!21090)));
                        var_49 -= (~var_9);
                        var_50 = ((~(~var_3)));
                    }
                    for (int i_17 = 1; i_17 < 22;i_17 += 1)
                    {
                        var_51 = (((!var_3) / var_2));
                        var_52 &= ((((arr_40 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_8] [6] [i_17 - 1] [i_17]) * (arr_36 [i_17 - 1] [i_17] [i_17 + 1] [11] [i_17 + 1]))));
                        var_53 &= (arr_44 [i_8] [i_8]);
                        var_54 = (min(var_7, 1));
                    }
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        var_55 += arr_49 [i_9 + 2] [i_9 + 2] [i_9] [i_9 - 1] [15] [i_9 + 2];
                        var_56 = (arr_46 [i_7] [i_7] [i_7] [i_9] [i_9]);
                        var_57 = (min(var_57, (((var_13 > (arr_22 [i_8]))))));
                        var_58 = ((-(((72 / 1) ? ((min(102, 1))) : 2147483647))));
                    }
                    var_59 += (((82 ? 17 : 0)));
                }
            }
        }
        var_60 = (((var_1 / (((-1739449431 ? 8819059061608845193 : -628183930701271360))))));
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {

        for (int i_20 = 0; i_20 < 13;i_20 += 1)
        {
            var_61 *= (~var_9);
            var_62 = 14;
            var_63 = var_1;
        }
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 13;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 13;i_22 += 1)
            {
                {
                    var_64 = (min(var_64, (((!(((arr_37 [16] [i_21] [i_21] [i_21]) != var_12)))))));
                    var_65 = 1;
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 12;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 12;i_24 += 1)
                        {
                            {
                                var_66 = (min(1627, 44455));
                                var_67 = ((-((~((~(arr_49 [21] [8] [i_19] [8] [i_19] [13])))))));
                                var_68 = (min((arr_64 [4] [i_23 - 2] [i_23 - 2] [i_21]), (min((arr_64 [i_19] [i_24 - 1] [i_23 - 2] [i_19]), 150))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
