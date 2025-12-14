/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (((4 % 12) & (((((var_1 ? var_0 : var_1))) ? (var_9 & 4294967286) : (((6778230023590133966 ? var_2 : var_2)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_11 = ((var_1 ? var_8 : 10));
                            var_12 = ((arr_1 [i_4 + 1]) | (((var_3 ? var_7 : var_2))));
                        }
                    }
                }
                var_13 += ((~(~var_7)));
                var_14 = ((-18446744073709551615 || (((0 ^ (arr_1 [i_0]))))));

                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_15 = ((-(arr_12 [i_0 + 2] [i_2] [i_2 + 2])));
                        var_16 = -var_4;
                        var_17 -= 2;
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_18 = (((arr_12 [i_0 - 2] [i_2] [i_2 + 4]) - var_1));
                        var_19 = (((arr_19 [i_0] [i_2] [i_2 + 4] [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) >> (((arr_1 [i_2]) - 4518020104731766744))));
                    }

                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        var_20 = (arr_20 [i_2 + 2] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                        var_21 = 18446744073709551612;
                        var_22 = -7420114654572334211;
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_23 = (((arr_12 [i_2 + 1] [i_2] [i_9]) && var_7));
                        var_24 = (11 <= var_0);
                    }
                    var_25 = (((((arr_2 [i_5]) ? 4294967285 : var_7))) ? ((10 ? var_2 : var_3)) : 4028649671);
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_26 = ((0 + (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));

                    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                    {
                        var_27 |= ((2094678020 / var_9) / (arr_22 [i_2 + 2] [i_10] [i_0 - 1] [i_0] [i_0 + 1] [i_10] [i_0 - 2]));
                        var_28 = (arr_12 [i_2 + 3] [i_2] [i_1 + 1]);
                        var_29 = (max(var_29, (((var_6 ? (arr_10 [i_0] [i_1 + 1] [i_2 + 2] [i_10] [i_11]) : (arr_10 [i_0] [5] [i_2 + 2] [i_10] [i_11]))))));
                        var_30 = ((!(arr_2 [i_0 - 2])));
                        var_31 = ((!(arr_7 [i_10] [i_2] [i_1 - 1])));
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        var_32 = ((~(arr_24 [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_2] [i_2 + 2])));
                        var_33 += (((arr_9 [i_0] [i_0 + 2] [i_1 - 4] [i_2 - 2] [i_10]) + (arr_7 [i_0] [i_10] [i_1 - 1])));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        var_34 = (arr_20 [i_2] [i_2 + 4] [i_2] [i_2 - 1] [i_1 - 2] [i_0 + 2] [i_0]);
                        var_35 |= ((~(arr_9 [i_1] [i_2] [i_0 + 1] [i_1 - 2] [i_10])));
                        var_36 = (((arr_18 [i_13] [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_1] [i_2 + 4]) < (arr_6 [i_2 - 2] [i_13] [i_0 + 3])));
                    }
                }
                var_37 = (min(var_37, ((((arr_8 [i_0] [i_0 - 1] [i_0] [8]) ? var_3 : (arr_18 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1 - 4]))))));
            }
            var_38 = 6015858617230649892;
            var_39 += (~1);
        }

        for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                var_40 = (max(var_40, (((((var_6 ? 17 : var_1)) == (arr_25 [i_0 + 1] [i_15] [i_0 + 1]))))));
                var_41 = ((-(arr_5 [i_0] [i_0] [i_14])));
                var_42 = var_4;
            }
            var_43 = (max(var_43, (((~((var_8 ? (arr_38 [i_0] [i_0] [i_0]) : var_8)))))));
        }
        for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        {
                            var_44 = (arr_7 [i_19] [i_19] [i_0 - 1]);
                            var_45 = var_6;
                        }
                    }
                }
            }
            var_46 -= var_7;
        }
    }
    #pragma endscop
}
