/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((3436293237790929899 ? 235 : (var_0 - 1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 += (-(((arr_1 [i_0] [i_0]) / var_7)));
        var_14 ^= ((((((arr_2 [i_0]) ? var_0 : var_8))) ? var_4 : var_1));
        arr_3 [i_0] [i_0] = -2554328532680284785;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = var_7;

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_11 [i_1] [13] [i_2] = ((129 ? (arr_9 [i_1] [i_1 - 1] [i_1 - 1]) : 0));
            var_15 = (arr_9 [i_1 - 1] [i_2] [7]);

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_16 = ((!(arr_9 [i_1] [i_2] [i_3])));
                    var_17 = (arr_5 [i_1 - 1]);
                }
                arr_16 [i_1] [i_1] [i_2] [i_1] = var_0;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_18 = (arr_4 [i_1]);
                            var_19 = ((-8 && (((13 ? var_2 : (arr_21 [i_5] [i_3] [i_1]))))));
                        }
                    }
                }
                var_20 = (((1105038975 ? var_10 : var_5)));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_21 = (((arr_18 [i_1 - 1] [i_1 - 1]) * (arr_4 [i_1 - 1])));
                var_22 += 3753248869;
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_23 = ((((((arr_10 [i_8] [i_1 - 1]) / (arr_12 [i_8] [i_2] [i_1])))) != (((((var_2 ? 36 : var_7))) / (((arr_1 [i_1] [i_2]) ? (arr_5 [i_1 - 1]) : var_3))))));
                var_24 *= ((((((((arr_10 [i_8] [i_8]) ? 25 : var_6))) ? ((var_6 ? var_2 : (arr_12 [i_1] [i_1] [i_1]))) : (arr_18 [i_1 - 1] [i_1 - 1]))) - var_6));
                var_25 |= (((!18446744073709551603) == (((var_2 ^ var_2) | (((max(8, var_7))))))));
                var_26 = (((((arr_14 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]) / var_5)) == ((((arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? 24 : var_4)))));
            }
            var_27 = var_2;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_28 *= (((arr_22 [15] [15]) / var_0));
            arr_29 [i_1] = (((var_11 - var_2) ? (~var_1) : (arr_20 [i_1 - 1])));

            for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
            {
                var_29 = (((arr_12 [i_1] [i_1] [i_1]) <= (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                var_30 = var_3;
                var_31 = var_3;
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
            {
                var_32 = (((((arr_30 [i_1] [i_1] [i_11] [i_9]) != (arr_21 [i_1] [i_9] [1]))) ? 1 : (9223372036854775807 / var_3)));
                var_33 = ((var_6 ? var_2 : (((arr_31 [i_1 - 1]) & var_11))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                {
                    var_34 *= (arr_34 [i_12] [i_13] [i_14] [i_14]);
                    var_35 = (min(var_35, 0));
                    var_36 = (arr_25 [i_14]);
                }
            }
        }
    }
    #pragma endscop
}
