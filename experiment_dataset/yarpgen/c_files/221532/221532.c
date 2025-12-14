/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-(min(((var_15 ? var_16 : 0)), ((0 ? 0 : var_15)))));
    var_21 = 4066451116;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = 9755508486549301015;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_23 = ((var_19 ? 1 : (arr_3 [i_0])));
            var_24 = (min(var_24, var_19));
            arr_4 [i_0] [i_0] [i_1] = (((((var_7 ? 1 : var_6))) ? -1 : var_2));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_25 += var_4;
                        var_26 |= (var_19 | var_11);
                        var_27 = ((((((arr_10 [i_0] [i_0] [i_0] [i_4]) ? var_8 : 384))) ? (arr_9 [i_0] [i_0] [i_0]) : var_11));
                    }
                }
            }
            var_28 = (arr_0 [i_0]);
        }
        var_29 = (arr_14 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    {
                        var_30 = ((1 ? var_1 : (((-1838253088 ? 184 : 1)))));

                        for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_31 = (((((arr_15 [i_5]) ? ((1948 * (arr_20 [i_5] [i_5]))) : 1))) ? (max((((arr_21 [i_5] [i_5] [i_5] [i_5]) ? (arr_15 [i_5]) : 65024)), 1)) : (!65152));
                            var_32 = (arr_22 [i_6]);
                            var_33 += (((arr_19 [i_5] [i_6]) ? -38 : 22));
                            var_34 = ((228769964 ? (arr_30 [i_5] [i_9 - 2] [i_7] [i_8] [i_9] [i_8]) : (min((arr_16 [4] [i_9 - 1]), (arr_16 [11] [i_9 + 1])))));
                            var_35 *= ((var_2 ? var_17 : var_2));
                        }
                        for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            var_36 = var_2;
                            var_37 = ((384 ? ((237 ? (((var_3 ? var_4 : (arr_30 [i_5] [i_5] [i_5] [i_7] [i_8] [i_10])))) : ((-544687423 ? 1 : 11429714116746545758)))) : (((((max(var_6, (arr_18 [i_6] [i_7] [i_8 + 2])))) ? (arr_27 [i_5] [i_6] [i_7] [i_8] [i_10]) : (((arr_22 [i_8]) ? (arr_26 [i_8] [14]) : (arr_31 [i_5] [2] [i_7] [i_8] [i_10]))))))));
                            var_38 = var_1;
                            var_39 = (min(var_39, 1));
                        }
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            var_40 = 32131;
                            var_41 = ((!(arr_20 [i_5] [i_7])));
                        }
                        var_42 = (((((-((1 ? 0 : var_18))))) ? (((-(arr_15 [i_7])))) : (((var_13 <= (arr_16 [i_6] [i_8]))))));
                        var_43 = ((1 ? (-2147483647 - 1) : ((((max(32131, 47648))) ? (arr_26 [i_5] [i_5]) : (((arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? 0 : (arr_15 [i_5])))))));

                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            var_44 = ((34668 ? ((243 ? 1 : 1)) : (~var_14)));
                            var_45 = (max(var_45, 0));
                            var_46 = (arr_17 [i_7] [i_12]);
                            var_47 = ((56969 ? (((max((arr_22 [i_12 + 2]), (arr_22 [i_12 + 2]))))) : 630817080));
                            var_48 = arr_20 [i_5] [i_6];
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            var_49 = ((((((arr_37 [i_5] [8] [i_8 - 1] [i_8] [i_13 + 2] [i_5]) ? 18446744073709551615 : (arr_21 [i_5] [i_5] [i_7] [i_8])))) ? (arr_27 [i_8 + 2] [i_8] [i_13] [i_13] [i_13 + 1]) : (((arr_19 [i_7] [i_7]) ? 0 : 1))));
                            var_50 = (max(var_50, (((arr_30 [i_8 - 1] [i_8 + 3] [i_8 + 1] [i_8] [19] [i_8 + 2]) ? (arr_30 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8] [i_8 - 1]) : (arr_30 [i_8 + 3] [i_8 - 1] [i_8] [i_8 + 2] [1] [i_8 - 1])))));
                            var_51 &= (((((var_4 ? 1 : (arr_29 [i_5] [i_6] [i_8 + 1])))) ? ((9223372036854775807 ? var_8 : 41154)) : (~0)));
                            var_52 = ((14 ? 0 : 8));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_53 = (max(var_53, 1));
                            var_54 = (min((arr_24 [i_8 + 2] [i_8 + 2] [i_8 + 3] [i_8 - 1]), (max((arr_24 [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8 + 1]), (arr_24 [i_8 - 1] [i_8 + 2] [i_8 + 2] [i_8 - 1])))));
                            arr_43 [i_8] [i_8 + 2] [i_8] [i_8] [i_8] [i_8] [i_8] = var_4;
                        }
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            var_55 = (max((max((arr_25 [i_5]), (max(var_18, (arr_24 [i_5] [i_5] [i_5] [i_5]))))), (((1026484879 ? 0 : 630817080)))));
                            var_56 = arr_39 [i_5] [i_5] [i_7] [i_8] [i_15] [i_6];
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 19;i_17 += 1)
            {
                {
                    var_57 = (max(var_57, var_5));
                    arr_50 [i_5] [i_16] [i_17 + 3] = (-2147483647 - 1);
                }
            }
        }
        var_58 = (arr_46 [i_5] [i_5] [i_5]);
    }
    var_59 = ((var_5 ? var_2 : var_8));
    #pragma endscop
}
