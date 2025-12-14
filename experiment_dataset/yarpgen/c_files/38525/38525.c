/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = (((83961663 < 1) ? (~65535) : var_13));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] = -var_13;
            arr_5 [14] = var_8;
        }
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_18 = (arr_3 [i_4] [i_5]);
                        arr_15 [8] [i_3] [8] [14] [i_3] &= (-((~(~-234611368))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_20 [i_2] [i_3] [i_4] [i_2] = (arr_12 [10] [i_3] [i_4]);
                        var_19 = (max(var_19, -var_3));
                        var_20 = (max(((((((arr_13 [i_2] [i_2] [i_2] [i_2]) ? (arr_8 [10]) : (arr_6 [i_3]))) > (arr_7 [i_2])))), ((((max((arr_1 [i_6]), var_15))) ? (max(var_5, (arr_7 [i_2]))) : (max((arr_10 [i_2]), (arr_14 [i_2] [i_3] [i_3] [i_4] [i_6])))))));
                        arr_21 [16] [i_3] [i_2] = var_13;
                    }
                    var_21 = ((-((((((arr_9 [16] [i_3] [i_3]) ? (arr_2 [13] [i_3] [13]) : var_15)) >= var_7)))));

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_22 = (max((arr_8 [i_7]), (arr_9 [i_2] [6] [i_2])));
                        arr_24 [i_7] [i_3] [i_4] [i_4] = (min((arr_11 [i_2]), (arr_6 [11])));
                        var_23 -= (arr_18 [i_2] [9] [i_2]);
                        var_24 = (~var_8);
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_25 = ((~(((~var_13) ? ((~(arr_23 [i_2] [14] [i_2] [i_2] [12] [i_2]))) : (arr_10 [i_4])))));
                        arr_28 [i_2] [i_8] = var_11;
                        var_26 = ((-(((arr_22 [2] [i_4] [i_2] [i_2] [i_2]) ? (arr_0 [i_4] [i_2]) : ((-(arr_1 [i_8])))))));
                        var_27 = ((-(arr_3 [i_2] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_9] [i_4] [13] [2] = ((((~(arr_18 [i_2] [i_2] [1]))) - var_14));
                        arr_33 [i_2] [9] [i_2] [9] [i_2] [i_2] = ((-((-(arr_12 [i_2] [i_2] [i_2])))));

                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, (((var_7 / ((var_3 ? (arr_7 [i_2]) : var_7)))))));
                            arr_37 [i_2] [i_2] [i_4] [i_4] = var_13;
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_2] [i_2] [i_2] [13] [i_11] = ((var_12 >> (((arr_39 [1] [i_2] [i_4] [i_2] [i_3] [7] [i_2]) + 1481384038))));
                            arr_41 [i_2] [i_2] = (arr_16 [4] [i_2] [i_2] [i_3] [i_2]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                arr_47 [i_2] [i_2] [13] [i_13] [1] [i_2] [i_13] = ((((((-(arr_39 [i_4] [13] [i_2] [i_4] [i_4] [i_3] [i_2]))))) ? ((((!var_10) <= (((arr_6 [i_13]) ? (arr_43 [i_4] [i_4]) : var_3))))) : ((-707007735 ? (!var_9) : ((min(var_12, (arr_14 [i_13] [i_12] [i_4] [i_3] [1]))))))));
                                arr_48 [i_2] [i_3] [i_13] = ((!((((arr_29 [i_2] [i_13] [10] [9]) / (var_7 * var_14))))));
                            }
                        }
                    }
                    var_29 = (((((((!var_6) ^ ((var_3 + (arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) + 2147483647)) << (var_6 - 62)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            {
                                var_30 = -var_8;
                                var_31 = var_0;
                                arr_60 [i_2] [i_14] [i_15] [i_16] [i_17] = ((-(~1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            {
                                arr_66 [i_15] [i_18] = ((-(min(((var_3 >> (var_6 - 54))), (!var_2)))));
                                arr_67 [i_2] [i_2] [i_14] [i_15] [i_15] [i_18] = ((var_13 * (1 << 1)));
                                var_32 *= (arr_11 [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_20 = 0; i_20 < 19;i_20 += 1)
    {

        for (int i_21 = 0; i_21 < 19;i_21 += 1)
        {
            var_33 = ((var_8 ? -var_10 : var_8));
            arr_72 [i_20] = (46952 | 0);
        }

        for (int i_22 = 0; i_22 < 19;i_22 += 1)
        {
            arr_76 [i_20] = var_1;
            arr_77 [i_20] [i_20] [i_22] = var_14;
        }
        for (int i_23 = 0; i_23 < 19;i_23 += 1)
        {
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 19;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 19;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        {
                            arr_90 [i_20] = var_15;
                            arr_91 [i_24] [0] [i_20] [i_20] [8] [i_20] [i_24] |= ((~((~(arr_78 [i_20] [i_25])))));
                            var_34 ^= var_9;
                        }
                    }
                }
            }
            var_35 = (arr_88 [i_20] [i_20] [i_20] [i_23] [i_23]);
        }
        for (int i_27 = 0; i_27 < 1;i_27 += 1)
        {
            var_36 = (arr_82 [i_20] [i_20] [i_20] [i_20]);
            arr_94 [i_20] [i_20] [i_27] = (((arr_89 [1] [i_27] [i_20] [2] [i_20]) == ((var_8 ? var_13 : (arr_83 [i_20] [i_20])))));
        }
        for (int i_28 = 0; i_28 < 1;i_28 += 1)
        {
            arr_97 [i_20] [13] = ((arr_69 [i_20]) > -var_0);
            var_37 = (max(var_37, var_1));
            arr_98 [10] [16] &= (~var_6);
            /* LoopNest 3 */
            for (int i_29 = 0; i_29 < 19;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 1;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 19;i_31 += 1)
                    {
                        {
                            var_38 = (min(var_38, (arr_102 [4] [i_28] [i_29] [i_30] [i_30])));
                            var_39 = ((-(arr_106 [i_31] [i_31] [i_30] [i_29] [i_28] [i_20] [i_20])));
                        }
                    }
                }
            }
        }
        var_40 = (arr_102 [1] [1] [i_20] [i_20] [i_20]);
        /* LoopNest 3 */
        for (int i_32 = 0; i_32 < 19;i_32 += 1)
        {
            for (int i_33 = 0; i_33 < 19;i_33 += 1)
            {
                for (int i_34 = 0; i_34 < 19;i_34 += 1)
                {
                    {

                        for (int i_35 = 0; i_35 < 1;i_35 += 1)
                        {
                            var_41 = (arr_104 [i_20] [i_32] [i_33] [i_33]);
                            var_42 = (~-1627666007);
                        }
                        var_43 = (arr_95 [i_20]);
                        var_44 = (var_8 & var_7);
                        var_45 *= var_12;
                    }
                }
            }
        }
    }
    #pragma endscop
}
