/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_7);
    var_16 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = var_3;
            arr_6 [i_0] [i_1] = (((((~(arr_2 [i_1])))) ? (arr_3 [i_0] [i_0] [1]) : ((((arr_1 [i_1]) < var_6)))));
        }
        var_18 = (((arr_0 [8]) != (arr_0 [i_0])));

        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_19 = (arr_3 [i_0] [i_2] [i_2]);

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_13 [i_0] [2] [i_3] [i_3] |= (((arr_8 [i_0] [i_2]) * var_8));
                arr_14 [i_2] = (((arr_1 [i_0]) ? ((var_4 ? (arr_4 [7] [i_0]) : var_1)) : (arr_10 [i_0] [i_2])));
                arr_15 [i_2] [i_2] [i_2] = (((arr_10 [i_2] [i_2]) ? (arr_10 [i_0] [i_2]) : (arr_10 [i_2] [i_2])));
                arr_16 [0] [i_3] [i_2] = ((((var_8 ? (arr_8 [i_2] [i_3]) : 3204238171265087138)) + -var_3));
            }
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_20 = ((-3204238171265087139 ? 6113132833011242831 : -3204238171265087142));
            var_21 |= 218;

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                {
                    var_22 = var_4;
                    var_23 = ((~(arr_21 [i_0] [i_6 + 1] [i_5] [i_6])));
                    var_24 *= ((var_9 < (arr_21 [i_6 + 1] [i_6 + 1] [i_0] [i_6 + 1])));
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_4] [i_5] [i_7] = (((arr_23 [i_7] [i_7] [i_7 + 1] [i_4]) & (((-(arr_0 [i_0]))))));
                    arr_26 [1] [i_5] [i_5] [i_7] [i_7 + 1] = (((((((arr_24 [i_7] [i_0] [i_5] [i_7 + 1] [i_4] [i_5]) || 117)))) | (((arr_10 [i_4] [i_5]) + var_6))));
                    var_25 = 127;
                }
                for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_0] [i_0] [i_5] = ((-(arr_28 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1])));

                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        var_26 ^= -var_1;
                        arr_33 [i_5] [i_5] = var_9;
                        var_27 = (((arr_32 [i_9 + 3] [i_9 - 1] [i_5] [i_5] [i_8]) & (arr_32 [i_8 + 1] [i_8 + 1] [i_9 + 2] [i_9 + 1] [i_9])));
                        var_28 = (((arr_7 [i_0] [i_8 + 1] [i_5]) - (arr_2 [i_9 + 1])));
                    }
                    var_29 = (arr_24 [i_0] [i_0] [2] [i_8] [i_8 + 1] [1]);
                }
                arr_34 [i_0] [i_5] [0] [i_0] = (((arr_5 [i_4] [i_4]) >> (((!(arr_19 [4] [i_4] [i_0]))))));
            }
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_30 &= ((!(arr_9 [i_0])));

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_31 = ((~(arr_1 [i_10])));
                    var_32 = (((var_9 + 2147483647) << (((arr_39 [i_0] [i_4] [i_10] [i_4]) - 212))));
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    arr_42 [i_0] [i_0] [i_12] [i_0] = (((arr_8 [i_12] [i_4]) * ((44 ? -2147483643 : -6113132833011242814))));
                    arr_43 [i_12] [i_12] [i_12] [i_0] = (((arr_24 [i_12] [i_10] [i_4] [i_0] [i_0] [i_0]) < var_13));
                }
                var_33 = ((-9223372036854775788 + 186) >= -25922);
                var_34 &= (~var_0);
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                var_35 = ((((-(arr_40 [i_0] [i_0] [i_0] [i_4] [i_0]))) <= var_11));
                arr_48 [i_0] [i_13] [i_0] [i_13] = (((var_14 / var_14) ? var_1 : (65535 / 3204238171265087138)));
                arr_49 [i_0] [i_0] [i_0] = ((var_14 - ((((arr_21 [i_0] [i_4] [i_0] [i_0]) - (arr_19 [i_0] [i_0] [i_13]))))));
            }
            var_36 = arr_30 [i_0] [i_0] [i_0] [i_4] [i_0] [i_4] [i_4];
        }
    }
    #pragma endscop
}
