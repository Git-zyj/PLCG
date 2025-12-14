/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_3 ? ((2047 ? 0 : var_4)) : ((2147483647 ? var_5 : var_5))))) ? (var_10 & -49) : (max((((var_8 >> (var_1 - 1241464029)))), -var_6))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] [i_1] &= (13734 || (var_8 % 30));
            var_12 = (1012395640233144725 != -20254);
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_13 = (((((((max(2147483638, -2))) > (arr_3 [i_0] [i_0])))) != ((((var_7 ? var_7 : (arr_1 [1] [i_0])))))));
            arr_11 [i_0] [i_0] [i_0] = ((1 % 65526) || (((861537524 << (5 > -34)))));
            var_14 |= (max(((((((-2843689316459123914 ? 24 : var_4))) && (((var_4 ? (arr_9 [i_0] [i_0] [i_2]) : (arr_4 [i_0] [i_2]))))))), 15634));
        }
        for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_0] = ((-(((arr_1 [4] [i_0]) | (arr_2 [i_3] [i_0] [i_0])))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_15 = (min(var_15, 0));
                            arr_23 [i_4] [i_5] [4] |= 1;
                            arr_24 [i_3] [i_0] = (arr_12 [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
            var_16 = (!-9818);
            arr_25 [i_0] [i_0] [i_0] = ((~(((~9378688935373816718) ^ (((var_8 & (arr_4 [i_0] [i_0]))))))));
            var_17 ^= -25471;
        }
        var_18 = (max(var_18, ((((((arr_13 [i_0] [i_0] [i_0]) - (min(var_6, -17))))) != (var_5 | -var_9)))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {
                    {
                        var_19 = var_5;
                        arr_33 [i_8] [i_9] &= ((((!17552) || ((max((arr_29 [i_0] [i_0] [i_8]), -3736100294613577768))))));
                        arr_34 [i_0] [i_0] = var_7;
                        arr_35 [i_0] [i_7] [0] [i_9] = ((!(var_4 > 213)));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_20 = ((2147483645 & (196 == 15)));
                            arr_38 [i_0] [i_7] [i_0] [9] [i_0] = (var_4 ^ 64);
                            arr_39 [i_0] [i_7] [11] [i_9] [i_0] [i_0] [i_8] = (arr_16 [i_9 + 1] [i_7 - 1]);
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            arr_42 [i_0] [i_0] [i_8] [i_9] |= 6;
                            arr_43 [i_0] [i_7] [i_0] [i_9 - 2] [i_11 - 1] = 1;
                            arr_44 [i_0] [i_0] [i_0] [i_0] [13] [i_11] = -861537529;
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_21 ^= (((((var_10 + var_5) ? (0 - var_9) : (((5651732500564054281 ? 20 : -20264))))) / (arr_17 [i_9] [i_9] [i_9])));
                            var_22 = ((((arr_46 [i_7] [i_7 + 1] [i_7] [i_0] [i_7]) * (arr_29 [1] [i_7 - 1] [i_7]))));
                            arr_47 [i_0] [i_8] [i_7] [i_0] = (((min(((var_0 ? var_8 : (arr_32 [i_0] [2] [i_8] [i_9]))), ((117 ? 249 : var_1)))) < (arr_29 [i_0] [i_7] [i_8])));
                            var_23 = (((((((arr_2 [i_12] [i_0] [1]) >= var_4)))) ? ((((arr_22 [i_0] [i_7] [i_7] [i_9 - 1]) ? ((0 ? (arr_15 [i_0] [i_8] [i_8]) : (arr_5 [1]))) : (108 >> 1)))) : (min(((((arr_5 [i_9]) - -1148122011))), ((-17447 ? -30284 : var_9))))));
                            var_24 = (min(var_24, ((((((max(1, var_0)))) ? (min(((-(arr_7 [i_0] [i_7]))), (((-1868343540 + 2147483647) >> (((arr_30 [i_9] [i_7] [i_8]) - 202)))))) : ((((((arr_30 [i_9] [i_7 + 2] [i_7]) != 70))) & var_8)))))));
                        }
                    }
                }
            }
        }
        arr_48 [i_0] = ((((((155 ? 48 : 0))) ? ((var_4 << (var_8 - 2817))) : -7)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            var_25 = (var_10 ^ var_2);
            arr_54 [i_14] [i_14] [i_14] &= (((arr_1 [i_13] [i_14]) > -78917160717095370));
        }

        for (int i_15 = 1; i_15 < 13;i_15 += 1)
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_26 &= (1 - 156);
                            arr_65 [i_13] [i_13] [i_13] [i_16] [i_13] [13] = ((1 ? var_7 : ((var_5 ? (arr_4 [i_13] [i_15 + 1]) : -8757432875478605551))));
                        }
                    }
                }
            }
            var_27 = -5651732500564054267;
        }
        arr_66 [i_13] = (arr_59 [i_13] [i_13]);
        var_28 &= (~var_6);
    }
    #pragma endscop
}
