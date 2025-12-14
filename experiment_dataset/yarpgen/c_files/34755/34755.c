/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((((~(arr_2 [i_0] [i_0])))) >= (max(var_0, var_14))));
        var_21 = 14;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [8] [i_2] = (((((~(arr_12 [i_0] [i_0] [i_2] [i_3] [i_3])))) ? ((((arr_0 [i_1] [i_1]) ? (arr_6 [i_0] [i_0]) : (((var_13 >= (arr_4 [i_4]))))))) : var_5));
                                var_22 = (min(var_22, ((-(max(((241 - (arr_10 [i_0] [i_1] [i_2] [i_1] [i_4]))), (arr_1 [i_0])))))));
                                var_23 -= (+(((arr_13 [i_0] [i_1] [i_2] [i_3]) / var_12)));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_1] [i_1] &= ((((max(((((arr_8 [i_2] [i_0] [i_0] [i_0]) % 12595))), ((var_14 - (arr_4 [i_0])))))) >= ((var_10 ? (arr_9 [2] [i_1] [0] [i_1] [i_1]) : var_14))));
                    var_24 = ((~((((250 >> (((arr_4 [6]) - 6749333300173235838))))))));
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_26 [i_0] [i_0] [i_6] [i_0] [i_0] = var_12;

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_25 = (((var_16 / var_8) & var_14));
                            var_26 = -72;
                            var_27 *= (arr_17 [i_5] [7] [i_7]);
                            arr_29 [1] [i_5] [i_6] [i_6] [i_8] = (~var_1);
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_28 = (min(var_28, ((((arr_18 [i_0]) ? (arr_18 [i_9]) : (arr_18 [i_9]))))));
                            var_29 = ((var_12 ? (((arr_12 [i_0] [i_0] [i_6] [i_7] [i_9]) ? 215 : 30)) : (((arr_22 [i_6] [i_5] [i_6] [i_7] [i_9]) * 219))));
                            var_30 = (((12603 ? 3844720158 : (arr_3 [i_6] [i_7] [i_6]))));
                            var_31 ^= (((((-2848217311595537570 / 252) + 9223372036854775807)) << ((((((arr_23 [8] [8]) || var_3))) - 1))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_32 = 1402631315;
                        var_33 = (((arr_10 [i_0] [5] [i_0] [i_0] [i_0]) ? -1402631333 : (((arr_10 [9] [9] [i_10] [i_10] [i_10]) / 16090571479402061443))));
                        var_34 += ((arr_30 [i_0] [i_11] [i_0] [i_0] [i_0]) / var_2);
                    }
                }
            }
            var_35 = ((~(arr_33 [4] [4] [i_0] [i_5])));
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            arr_41 [i_12] [i_0] = ((~(max(((var_19 ? (arr_4 [i_0]) : var_11)), (((arr_37 [i_0] [8] [i_0]) ? var_15 : 4))))));
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 9;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 9;i_14 += 1)
                {
                    {
                        arr_48 [i_0] = (arr_19 [i_0] [i_12] [i_12] [i_12]);
                        var_36 -= 10;
                    }
                }
            }
        }

        for (int i_15 = 3; i_15 < 9;i_15 += 1) /* same iter space */
        {
            var_37 |= (((arr_47 [i_0]) < (arr_47 [i_15 - 3])));
            var_38 = (((max(var_10, (((arr_38 [i_0] [i_0]) - (arr_2 [2] [4])))))) ? ((~(arr_31 [9] [9] [i_15] [9] [i_15]))) : (max((~207), 177)));

            /* vectorizable */
            for (int i_16 = 3; i_16 < 8;i_16 += 1)
            {
                var_39 = (arr_35 [i_15 - 1]);
                var_40 = var_4;
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    {
                        arr_58 [i_0] = ((((18446744073709551615 | (arr_55 [i_0] [i_0] [i_17] [i_17]))) == ((((!9223372036854775808) ? (arr_30 [i_0] [i_17] [i_17] [i_18] [i_15 + 1]) : ((((arr_37 [i_18] [i_15] [i_15]) >= (arr_25 [i_0] [i_15] [i_15] [i_17] [i_18] [i_18])))))))));

                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            var_41 += var_9;
                            var_42 *= (((2848217311595537583 == (arr_52 [i_15 - 1] [i_15 - 1]))));
                            var_43 = (((144 ? (arr_32 [i_15 - 3] [i_15 - 1] [i_15 - 1] [i_15 - 3]) : (arr_32 [i_15 - 3] [i_15 - 1] [i_15 - 1] [i_15 - 3]))));
                        }
                        var_44 = var_6;
                        arr_62 [i_0] [i_0] [i_17] [5] = var_15;
                    }
                }
            }
        }
        for (int i_20 = 3; i_20 < 9;i_20 += 1) /* same iter space */
        {
            var_45 += ((((+(max((arr_18 [9]), (arr_4 [i_0]))))) >= ((min(((var_2 ? var_6 : (arr_42 [i_20] [i_0] [i_0]))), (arr_16 [i_0] [i_0] [i_20 + 1]))))));
            var_46 = (~2848217311595537595);
            var_47 -= -110;
        }
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 11;i_21 += 1)
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 11;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                {
                    var_48 ^= var_19;
                    arr_73 [i_22] = (((var_17 + var_2) * (var_4 / 7)));
                }
            }
        }
        var_49 = ((arr_67 [i_21]) ? var_14 : (arr_69 [i_21]));
        arr_74 [i_21] &= (((arr_67 [i_21]) < 218));
        var_50 ^= ((!(arr_68 [i_21])));
        var_51 = (arr_67 [0]);
    }
    var_52 ^= ((!var_12) ? (var_6 != var_2) : var_3);
    var_53 += ((var_2 == ((((var_3 ? var_19 : 42801)) << (((~var_2) - 4935494852861916623))))));
    var_54 = (min(var_54, (((var_12 ? var_0 : var_10)))));
    #pragma endscop
}
