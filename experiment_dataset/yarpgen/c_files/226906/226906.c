/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= -7;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_11 = (((arr_0 [i_1] [i_3]) ? ((((((arr_6 [i_2 + 3]) ? var_4 : 21))) ? (arr_1 [i_4] [i_1]) : (arr_4 [i_0] [i_0] [i_0] [i_0]))) : (((max((arr_8 [i_4 - 1] [i_4] [i_3] [i_2] [1] [i_1] [i_0]), (arr_2 [8] [i_2] [i_2])))))));
                                var_12 = ((~(((arr_3 [i_2 - 2] [i_4 - 1] [i_4 + 2]) ? (arr_3 [i_2 + 1] [i_4 - 1] [i_4 + 3]) : var_1))));
                            }
                        }
                    }
                    var_13 = ((-(arr_9 [i_2] [i_1] [i_1] [i_0] [i_0])));
                }
            }
        }
        arr_10 [i_0] = (~(((!(arr_4 [i_0] [i_0] [i_0] [i_0])))));
        var_14 = ((-(max(var_4, ((var_5 ? -486620570 : (arr_3 [i_0] [i_0] [i_0])))))));
        arr_11 [i_0] = var_9;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_15 = (min(var_0, ((((arr_1 [i_5] [i_5]) ? ((var_4 ? 7 : var_4)) : -486620554)))));
        var_16 = ((((max(((min(var_8, (arr_14 [i_5])))), var_0))) ? ((((28 < (((arr_6 [i_5]) ? (arr_3 [i_5] [i_5] [i_5]) : var_0)))))) : (max((arr_2 [i_5] [i_5] [i_5]), (arr_12 [i_5])))));
        var_17 = ((((((((arr_12 [i_5]) ? var_1 : (arr_7 [i_5] [i_5] [i_5] [i_5])))) ? ((9223372036854775807 & (arr_2 [i_5] [i_5] [i_5]))) : (min((arr_4 [i_5] [i_5] [i_5] [i_5]), (arr_2 [i_5] [i_5] [i_5]))))) / ((((1 == 127) ? ((~(arr_13 [i_5]))) : (((((arr_6 [i_5]) && var_9)))))))));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_18 *= (((((var_5 % var_9) ? (arr_5 [i_6] [i_5] [i_5]) : var_6)) - (((!(arr_2 [i_5] [i_6] [i_5]))))));
            var_19 -= ((+(((arr_6 [i_5]) / (arr_6 [i_5])))));

            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                var_20 += (max(((~(!131613290))), ((((arr_3 [i_7 - 2] [i_7 - 1] [i_7 - 1]) < 1)))));
                var_21 -= ((((((var_8 ? var_5 : (arr_14 [i_5]))) - var_2)) / (((41 ? (arr_21 [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7 - 2]) : (arr_21 [i_7 - 2] [i_7 - 1] [i_7 - 2] [i_7 + 1]))))));
                var_22 = (arr_19 [i_7] [i_7] [i_7] [i_7 + 1]);
            }
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_23 = (arr_3 [i_5] [i_5] [i_5]);
                            arr_35 [i_5] [i_5] [2] [i_9] [i_5] [i_11] = (arr_33 [i_10] [i_9] [i_8] [i_5]);
                            arr_36 [i_5] [i_9] [i_8] [i_11] [i_11] = (((((~422212465065984) ? (-29 & -1) : 454917124)) != 191));
                            var_24 = ((((min((arr_12 [i_9 - 1]), var_1))) ? (((arr_30 [i_9] [i_9 - 1] [i_9] [i_9 - 1]) % (((arr_15 [i_10]) ^ (arr_16 [i_11] [i_9]))))) : 175458819));
                        }
                    }
                }
            }
            var_25 ^= -1;
            var_26 = (((((-(arr_29 [i_5] [i_5] [i_8])))) ? var_5 : (((~((179 | (arr_24 [2] [i_8] [i_8]))))))));
        }
        var_27 = (max((((2224090517246640043 / -1) ? (arr_18 [i_5]) : 22)), (min((arr_4 [i_5] [i_5] [i_5] [i_5]), (((arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? var_4 : var_1))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_28 = 16222653556462911572;
        var_29 = ((-(((arr_38 [6] [6]) ? (arr_38 [i_12] [i_12]) : -1))));
        var_30 = ((-2 ? var_2 : (arr_38 [i_12] [i_12])));
        var_31 = ((16222653556462911573 ? 17501 : (~-17501)));
    }
    var_32 = var_1;
    #pragma endscop
}
