/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 |= (min((arr_1 [i_0] [i_0]), (arr_0 [i_0])));
        var_15 += (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) | (((max(var_0, (var_4 >= 3852233644063794810)))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 = (((arr_2 [i_1 - 1]) ? (arr_2 [i_1 + 2]) : 10));
        var_17 = (((arr_4 [i_1 + 1]) > (arr_3 [i_1 - 1])));
        var_18 = (max(var_18, ((((arr_4 [i_1 + 1]) - (arr_4 [i_1 - 2]))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_1] [i_1] |= ((-(arr_7 [i_1 - 2])));
            arr_9 [i_2] = ((951152862 ? (arr_7 [i_1 + 1]) : (arr_6 [i_2] [i_1 - 1])));
            var_19 -= ((~(arr_5 [i_1])));
            var_20 = (min(var_20, (((-(((arr_6 [i_1 - 1] [i_1 - 1]) | (arr_4 [i_2]))))))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_21 = ((((((arr_6 [i_1] [i_3]) - 0))) ? var_11 : (((arr_6 [i_1] [i_1]) / (arr_3 [i_3])))));
            arr_12 [i_1] [i_1 + 1] = (((arr_7 [i_1 + 2]) ? (arr_10 [i_1] [i_1 + 1] [i_1 - 2]) : (arr_7 [i_1 + 2])));

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_22 -= (arr_11 [i_5 - 1]);
                            var_23 = (max(var_23, ((((arr_17 [i_6] [i_6] [i_6 - 2] [i_6 - 1] [i_6]) ? var_12 : (arr_17 [i_6] [i_6] [i_6 - 2] [i_6 - 1] [i_6]))))));
                        }
                    }
                }
                arr_20 [i_3] [i_3] = (arr_17 [i_1] [i_1] [4] [i_1] [i_1]);
            }
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            var_24 = ((((-(arr_24 [i_1]))) - (arr_13 [i_7] [i_1 + 2] [i_1 + 1] [i_1])));

            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                var_25 = var_7;
                var_26 = (-18452 / -65);
                var_27 += (((arr_13 [1] [i_8 + 1] [i_8 + 1] [1]) << (((arr_21 [i_1 - 2] [i_1 - 2] [i_8 + 1]) - 195))));
                var_28 = ((arr_10 [i_1] [i_1 + 2] [3]) && (!13437096568023791538));
            }
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            var_29 = (arr_17 [i_1] [i_9] [i_9] [i_9] [i_1 - 1]);
            arr_32 [7] [7] = ((-65 ? (arr_4 [i_1 - 1]) : (((arr_13 [i_1 - 2] [i_1 - 2] [i_9] [i_9]) ? 26251 : 7))));
        }
    }
    for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_30 *= (max((951152862 * 6994073201891933302), (arr_13 [i_10] [i_10 + 2] [i_10 + 1] [i_10 + 1])));
        arr_35 [i_10] = (arr_14 [i_10 + 2] [i_10 - 1] [i_10 + 2] [i_10]);
    }
    var_31 = var_5;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            {
                var_32 = ((((((-2147483647 - 1) ? (951152856 * var_6) : (((-1946920415 ? (arr_14 [i_11] [1] [i_12] [i_12]) : var_0)))))) ? -3343814433 : (min((arr_6 [i_11] [18]), ((7 ? var_12 : 7630322704920159220))))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_33 = (((max(var_8, (-1 != 57))) ? (((arr_1 [i_14 + 1] [i_14 + 1]) ? 724 : ((min(-12, (arr_33 [i_12])))))) : ((var_12 | (((arr_31 [13] [13]) | (arr_47 [i_13] [i_13] [i_13] [i_13] [i_13])))))));
                            arr_48 [i_11] [7] [i_11] [i_11] [i_11] = (((max((max(28, 4294967284)), (-127 - 1))) != (((126 ? 155412606 : (var_4 && -3980241352526382674))))));
                            var_34 |= (((min((arr_15 [i_14 + 2] [1] [i_14 + 2] [i_14]), (arr_23 [i_14 + 2] [i_14 + 2]))) && (arr_26 [i_11] [i_11] [i_14 + 2])));
                        }
                    }
                }
                var_35 -= (min((arr_15 [i_12] [1] [i_11] [i_11]), (min((arr_3 [i_11]), (arr_3 [i_11])))));
                var_36 = ((var_10 ^ (arr_24 [i_12])));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        {
                            var_37 = (max(var_37, (6 / -12)));
                            var_38 = 4294967258;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
