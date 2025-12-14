/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((!((max(((var_0 ? (arr_7 [i_1]) : var_1)), var_7)))));
                    var_10 = (min(var_10, (((-(36 / 1913945757775753120))))));
                }
            }
        }
    }
    var_11 = (5405 || 23);

    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_12 = (arr_11 [i_3 - 1]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_13 = (max(var_13, (-1913945757775753120 < 3680163603591095259)));
                        var_14 = ((!(arr_17 [i_3])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_15 ^= (((((var_7 ? 3468 : 5273375967859000318))) ? (arr_15 [i_7] [i_7]) : (arr_21 [i_7])));
        arr_25 [20] &= (!1913945757775753120);
        arr_26 [i_7] = ((1 ? 1913945757775753120 : -1913945757775753120));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_16 = 1;
                        arr_35 [i_8] = (((arr_20 [i_8 - 1] [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]) ? var_1 : var_2));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 6;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 8;i_14 += 1)
                {
                    {
                        var_17 = var_4;
                        var_18 = ((((arr_3 [i_8]) | var_1)));
                        arr_46 [i_8] [i_12] = (((arr_9 [i_8] [i_13 - 1]) >= (((arr_43 [i_8] [i_12] [2] [i_14]) & var_3))));
                    }
                }
            }
        }
        var_19 = -17682;
    }
    for (int i_15 = 4; i_15 < 15;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                {

                    for (int i_18 = 1; i_18 < 12;i_18 += 1)
                    {

                        for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
                        {
                            arr_59 [i_15 - 4] [i_18] [i_15 - 3] [i_15] [i_15] [i_15] = ((0 ? 1653 : (1592 ^ var_9)));
                            arr_60 [i_17] [i_18 + 1] |= 1557534256;
                            arr_61 [i_15] [i_16 - 2] [i_19] [i_18] [i_18] [i_18] = ((!(var_5 / var_3)));
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
                        {
                            var_20 = 57;
                            arr_65 [i_15 - 3] [i_16] [i_17] [i_17] [10] [4] [i_20] |= (((arr_21 [i_18 + 4]) ? (arr_21 [i_18 + 2]) : (arr_49 [i_18 - 1] [i_15 - 3])));
                            var_21 &= (((var_0 && var_7) ? var_3 : (var_1 <= var_0)));
                        }
                        var_22 = ((((((max(65535, var_6))) ? -15532 : -31869)) & var_0));
                    }
                    for (int i_21 = 0; i_21 < 16;i_21 += 1)
                    {
                        arr_69 [i_21] [i_15] [i_16] [i_16] [i_15] = ((!((-548464018 && (((0 ? var_1 : var_0)))))));
                        var_23 = (max((arr_54 [i_15 - 3] [i_15 - 3] [i_15 - 1]), var_9));
                        var_24 = 3201911403;
                        var_25 = (max((arr_17 [i_15 + 1]), 53740));
                        arr_70 [i_15] [i_16] [i_17] [i_21] [i_21] = (min(((max((arr_56 [i_15] [i_16] [i_17] [i_17]), (-9223372036854775807 - 1)))), (max((arr_48 [i_16 - 2]), var_0))));
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 16;i_22 += 1)
                    {
                        for (int i_23 = 1; i_23 < 12;i_23 += 1)
                        {
                            {
                                arr_76 [i_15] [i_23] [1] = (!28982);
                                var_26 = -1913945757775753121;
                            }
                        }
                    }
                }
            }
        }
        var_27 |= (30121 ? ((max(41209, -2))) : 169370828);
        arr_77 [i_15] [i_15 + 1] = ((((max(var_9, 1))) ? (arr_67 [i_15 + 1] [i_15 + 1]) : (((arr_67 [i_15 - 4] [i_15 + 1]) / (arr_67 [i_15 - 4] [i_15 - 2])))));
    }
    /* LoopNest 3 */
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        for (int i_25 = 3; i_25 < 12;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 13;i_26 += 1)
            {
                {
                    arr_87 [i_26] [i_25] [i_25] = (((((max(533769425, 89)) ? 1 : -16))));

                    /* vectorizable */
                    for (int i_27 = 3; i_27 < 11;i_27 += 1) /* same iter space */
                    {
                        arr_90 [i_24] [i_25] [i_26] [i_25] = (24333 ^ 89);
                        arr_91 [i_24] [i_24] [i_25] [i_24] [i_26] [i_27] = ((-(arr_16 [i_25 - 2] [i_27 - 2] [i_27 + 1] [i_27 - 2])));
                        var_28 ^= (((arr_8 [i_25 - 2] [i_25 - 2] [i_27 + 2]) && (arr_15 [12] [i_27 - 3])));
                    }
                    /* vectorizable */
                    for (int i_28 = 3; i_28 < 11;i_28 += 1) /* same iter space */
                    {
                        arr_94 [i_25] [i_26] [i_25] = -24327;
                        arr_95 [i_25] [i_25] [i_26] [i_28] [i_28] = ((-548464018 ? (arr_66 [i_25 - 3] [i_25 + 1] [i_28 - 3] [i_28 - 2]) : ((1 ? var_9 : var_0))));
                    }
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 13;i_29 += 1)
                    {
                        for (int i_30 = 0; i_30 < 13;i_30 += 1)
                        {
                            {
                                var_29 = (((((var_5 >> 1) * var_7))) && var_0);
                                arr_101 [i_24] [i_25 - 1] [i_26] [i_25] [i_30] = (((~var_9) ? ((min(1, -2147218632))) : var_9));
                                arr_102 [i_25] [i_30] [i_29] [i_29] [9] [i_30] [i_25 + 1] = (arr_80 [i_25] [i_25 - 3] [i_25 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
