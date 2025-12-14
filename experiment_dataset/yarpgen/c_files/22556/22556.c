/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [11] [i_2] [11] = 9223372036837998592;
                        var_15 = (arr_6 [i_3] [i_2] [2] [7]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_4] [i_2] [i_2] [i_0] [i_0] |= ((-((-9223372036837998595 ? 2147483647 : 25260))));
                        var_16 = var_10;

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_16 [13] [8] [i_0] [i_0] [i_0] [i_4] [i_2] = ((-1 ? -91 : -9223372036837998593));
                            arr_17 [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_0]);
                        }
                    }
                    var_17 = (max(var_17, (!var_5)));
                    arr_18 [i_0] = (((((((arr_6 [i_0] [9] [4] [i_0]) == 170)))) - var_10));
                }
            }
        }
    }
    var_18 -= var_4;

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_21 [i_6] = 246;
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_19 = ((var_8 ? 7977 : var_9));
                        arr_29 [i_9] [i_9] [i_9] [i_9] &= (((arr_27 [i_6] [18] [i_8] [i_9] [i_8] [20]) | 9223372036837998594));
                        arr_30 [i_6] [i_7] = var_7;
                        var_20 = (!57559);

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_21 = (arr_22 [i_10]);
                            arr_35 [i_6] [i_7 - 1] [i_7] [11] [i_10] = -9223372036837998593;
                            var_22 = ((((((arr_24 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1]) / 14))) && ((min((((-(arr_32 [1] [i_7] [i_8] [15] [i_10] [i_8])))), ((-(arr_33 [i_6] [0] [i_6] [20] [0]))))))));
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_23 = (((arr_34 [i_7] [i_7] [i_8] [i_8] [i_7 - 1]) ? 201 : (arr_34 [i_7] [i_7] [i_8] [i_7 - 1] [i_7 - 1])));
                            var_24 = (max(var_24, (((((min(var_6, (arr_22 [i_7 - 1])))) ? ((((var_10 ? (arr_19 [i_11]) : var_0)))) : ((-(~var_8))))))));
                        }
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            var_25 -= (arr_37 [i_6] [i_6] [i_7 - 1] [i_7] [i_6] [i_6] [i_6]);
                            var_26 += ((-(min(var_0, ((1 ? -1 : 23))))));
                            var_27 = (arr_20 [i_12 + 1]);
                            var_28 = ((~((0 ? 16717461330421465244 : -9223372036837998595))));
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 12;i_13 += 1)
    {
        var_29 = (((-5821 ^ var_11) ^ (((((7977 ? 0 : 1695943092356054853))) ? (arr_8 [i_13]) : 222))));
        var_30 = ((min(23, ((((arr_15 [i_13] [i_13] [i_13 + 2] [i_13] [i_13] [i_13 - 1]) ? (arr_32 [5] [1] [5] [i_13 - 1] [17] [i_13 + 2]) : 40603))))));

        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            var_31 *= (!65531);

            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                arr_50 [i_13] = var_3;
                var_32 = (max(var_32, (arr_7 [1] [1] [i_15] [i_15])));
            }
            var_33 *= (((((var_3 ? (arr_5 [i_14] [i_14] [i_14]) : 9223372036837998599))) ? (min(var_10, 1)) : ((((0 & 1386465990) ? (min(3932817687, 57559)) : var_3)))));
            arr_51 [i_13] [i_13] [i_13] = (min(((((var_4 * (arr_2 [3]))) * (arr_23 [i_13] [i_13]))), (61 - var_12)));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            arr_56 [i_13] [i_13] = ((!(arr_25 [i_13 + 2])));
            arr_57 [i_13] [i_16] = (!120);
            arr_58 [i_13] = (arr_42 [i_13]);
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 0;i_17 += 1)
        {
            var_34 = (min(var_34, (arr_12 [i_13 - 1] [i_17 + 1])));
            arr_61 [i_13] = (((((0 > (arr_20 [i_17])))) % 52));
            var_35 = var_11;
        }
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            var_36 = (((((((((arr_63 [i_13] [i_13] [i_13]) ? var_13 : var_12))) ? var_8 : 2085736009))) ? var_11 : (((((-(arr_14 [i_18] [14] [i_13 + 2] [i_13] [i_13 + 2] [0] [i_13 + 2])))) ? (!var_10) : (arr_7 [i_13 - 1] [i_13 - 1] [i_13 - 1] [0])))));
            var_37 -= 762160639;
            var_38 = arr_28 [i_13];
        }
    }
    #pragma endscop
}
