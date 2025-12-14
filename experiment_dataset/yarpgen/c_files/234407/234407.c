/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (((max(var_1, 59600951)) == (((arr_5 [i_0 + 1] [i_1 - 1]) ? var_5 : ((3926372817484566789 >> (var_7 - 19251)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_3] = 14520371256224984826;
                        var_15 = ((1 - (arr_2 [i_0])));
                        var_16 = ((((var_14 ? var_6 : 3926372817484566788)) * -var_10));
                    }
                }
            }
        }
    }
    var_17 = var_1;

    for (int i_4 = 1; i_4 < 10;i_4 += 1)
    {
        arr_12 [i_4] = ((((((~(var_11 == 1006117569))) + 2147483647)) << (var_11 - 1)));
        var_18 = (arr_1 [i_4]);

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_16 [i_4] [i_5] = (((min((arr_14 [i_4 - 1] [i_5]), (arr_11 [i_4 + 1] [i_5]))) == ((max(var_11, (0 - 38))))));
            var_19 = (min(-var_0, (((((min((arr_1 [i_5]), (arr_7 [18] [i_4] [i_4] [i_4 + 1] [i_5] [i_5])))) ? var_9 : (arr_15 [i_4 + 1] [i_5] [4]))))));
            var_20 = var_1;
            arr_17 [i_4] [10] = (min(32, 606379844976153024));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_21 = (((arr_10 [i_4 - 1]) % ((((14520371256224984828 ? 594288404972061403 : -114)) - (arr_2 [i_6])))));
            arr_20 [i_4] [10] [i_6] = 3443019250;
            var_22 = ((-(((3626230736 - 255) | var_6))));
            var_23 = (max(var_23, ((max(-5, (((((((arr_1 [i_4]) ^ 1))) == (min(var_4, 14520371256224984819))))))))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        {
                            var_24 = (((6808525055101798974 != 288230238712758272) | var_7));
                            var_25 = ((-(arr_14 [i_10 + 2] [i_4 - 1])));
                        }
                    }
                }
            }
            arr_31 [i_4 + 1] [i_7] = (max((((arr_24 [i_4 - 1] [i_4] [10]) >> (((arr_24 [i_4 - 1] [i_7] [i_4 - 1]) - 2296146984)))), (!18446744073709551615)));
        }
        /* vectorizable */
        for (int i_11 = 2; i_11 < 10;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 8;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 8;i_14 += 1)
                    {
                        {
                            arr_42 [i_13] [i_11] [i_11] [i_12 + 3] [i_13] [i_13] [i_14] |= (var_8 ^ var_10);
                            var_26 = (851948045 >> (var_6 + 1719));
                        }
                    }
                }
            }
            arr_43 [i_4 + 1] [4] = (((arr_2 [i_11]) / var_4));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 7;i_16 += 1)
                {
                    {
                        var_27 -= var_12;
                        var_28 ^= ((!(var_14 >> 32)));
                    }
                }
            }
        }
    }
    for (int i_17 = 1; i_17 < 17;i_17 += 1)
    {
        var_29 = (((var_11 >= -var_9) >> ((((((-(arr_8 [i_17 + 1] [1]))))) - 25662))));
        arr_54 [i_17] = (min((191 != var_12), (668736572 % 3845047257)));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 14;i_19 += 1)
            {
                for (int i_20 = 3; i_20 < 17;i_20 += 1)
                {
                    {
                        var_30 = (((((arr_60 [i_20 - 2] [i_19 + 3] [1] [i_17 + 1] [i_19]) ? (((var_9 + 2147483647) >> (176 - 153))) : (max(var_3, var_12)))) == ((((3 >> 0) != var_14)))));
                        arr_61 [i_17 + 1] [i_20] = (max((((arr_53 [i_17 + 1]) == (arr_53 [i_17 - 1]))), ((var_4 && (arr_53 [i_17 + 1])))));
                    }
                }
            }
        }
        var_31 = (((3926372817484566773 * (var_10 == var_11))) >= ((((!((max(var_9, (arr_8 [2] [2])))))))));
        var_32 = (((arr_59 [2]) | var_12));
    }
    #pragma endscop
}
