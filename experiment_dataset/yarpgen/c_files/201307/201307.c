/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = ((153 != (((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (-1 + 9)))))));
            var_14 = ((-((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        }
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_14 [i_0] = (arr_13 [i_0 - 1]);
                        var_15 = (max(var_15, (((var_9 >= (max(((max(var_8, 1))), (max((arr_13 [i_3]), 1619616888)))))))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_0] [2] [i_0] [i_0] [4] [2] = -var_11;
                            var_16 += (max((((arr_10 [i_2 - 1] [i_2] [i_3]) / var_9)), ((-(arr_10 [i_2 + 2] [i_2] [i_3])))));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_20 [i_3] |= (((arr_18 [i_0] [0] [i_3] [i_4] [i_6]) ? (arr_10 [i_3] [i_2] [i_3]) : (min(756779561, (max(1619616876, var_5))))));
                            var_17 = -856290824;
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_18 = (min(var_18, (((((arr_5 [i_3] [4] [i_2 + 2]) == (arr_5 [i_3] [i_0] [i_2 + 2])))))));
                            var_19 = (min(var_19, var_5));
                            var_20 = (max(var_20, ((max(24700, (((~1138334489) ? (0 - var_2) : (arr_19 [i_3] [8] [i_3] [i_4] [i_4]))))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 11;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_21 = (max((arr_23 [i_0]), ((var_12 & (arr_22 [i_9 + 1] [i_9 + 1] [5] [i_10] [i_0 + 1])))));
                                var_22 = (arr_28 [2] [i_8] [i_9] [i_10] [i_11]);
                                var_23 = (max((max(((max(var_10, (arr_32 [i_0] [i_8] [i_8] [i_10] [i_11])))), ((var_10 ? (arr_9 [i_0]) : 18446744073705357312)))), ((max(var_6, (max((arr_16 [4] [i_8] [i_11] [i_8] [i_11]), (arr_19 [11] [11] [i_0] [7] [7]))))))));
                            }
                        }
                    }
                    arr_33 [i_0] [i_8] [i_0] = (max((((-var_2 <= (min(var_3, 3156632806))))), var_10));
                    var_24 = (max(var_24, (((((min(((((arr_22 [i_0] [11] [i_8] [i_9] [i_8]) ? (arr_31 [4] [i_8] [i_8] [i_8] [4] [4]) : (arr_30 [i_9] [9])))), (arr_3 [10])))) ? var_7 : (max((arr_0 [6]), ((max(var_2, var_12))))))))));
                    arr_34 [i_0] [i_0] [i_8] [i_0] = ((~(((var_1 + 2147483647) << (var_2 - 459419299)))));
                }
            }
        }
        arr_35 [i_0] = (arr_15 [7] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0]);
        var_25 = (max(var_10, ((~((90 ? var_9 : 5980313616786175802))))));
    }
    var_26 = 149;
    var_27 = ((~((var_5 | (var_5 << var_7)))));

    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_28 -= ((((var_9 == (arr_37 [i_12]))) ? (((arr_37 [i_12]) ? (arr_37 [i_12]) : var_10)) : (~-1726487365)));
        var_29 = var_0;
        var_30 = (arr_36 [i_12]);
        var_31 = (min(var_31, var_7));
        arr_38 [i_12] = 2675350421;
    }
    for (int i_13 = 0; i_13 < 0;i_13 += 1)
    {

        /* vectorizable */
        for (int i_14 = 0; i_14 < 0;i_14 += 1)
        {
            var_32 = ((964989385 || (arr_40 [i_13 + 1] [i_14 + 1])));
            arr_45 [i_14] [i_14] [7] = ((-var_3 ? (arr_39 [i_14 + 1]) : 756779532));
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
        {
            arr_48 [i_15] [i_13] = ((((-756779562 + ((3979843572482532881 ? var_7 : 1))))) ? (((1 >= (arr_42 [i_15])))) : (((!(var_5 / 31208)))));
            var_33 = ((-((var_4 ? ((min(var_4, (arr_43 [i_13])))) : (((var_12 >= (arr_42 [i_15]))))))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
        {
            var_34 = (min(var_34, ((((var_7 > (arr_44 [5]))) && var_9))));
            var_35 = (max(var_35, -4661));
            arr_51 [i_16] [i_16] [i_13] = (((arr_47 [i_16]) ? 31200 : 60));
        }
        var_36 = 8838271077454981232;
    }
    #pragma endscop
}
