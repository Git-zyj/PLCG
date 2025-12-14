/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!(((var_10 ? var_13 : var_15))))) ? (((min(var_14, var_16)) + 12022454172011135743)) : var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : 64840));
        arr_3 [i_0] = (~55273);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_12 [i_1] = (((arr_0 [i_1]) + (arr_0 [i_1])));
            var_19 *= (((arr_6 [i_2]) ? 0 : (arr_6 [i_2])));

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    var_20 = ((var_3 ? var_1 : (((arr_8 [i_1] [i_1]) ? 4 : -11937))));
                    arr_20 [i_1] [i_2] [i_3] [i_1] [i_3] = (((((arr_15 [i_2] [i_3 + 1] [i_4]) | (arr_19 [i_1] [i_2] [i_3] [i_4])))) + (((arr_5 [i_4]) ? 8192 : (arr_1 [i_4]))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_21 = (min(var_21, -11937));
                    arr_23 [i_1] [8] [8] [i_1] = (((arr_1 [i_3 + 1]) << (((arr_1 [i_3 - 1]) - 6796788416757312102))));
                    arr_24 [i_1] [i_2] [i_1] [i_1] = (!var_0);
                }
                arr_25 [i_1] [i_1] [i_1] = (arr_0 [i_3]);
                var_22 = 18446744073709551615;
                var_23 = (arr_5 [i_1]);
                arr_26 [i_1] = var_9;
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_36 [i_1] [i_1] [i_6] [i_7] [0] = ((var_15 || (var_14 - var_15)));
                            arr_37 [i_6] |= ((-((~(arr_32 [i_1] [i_2] [i_2] [i_2] [3])))));
                            arr_38 [i_1] [i_1] [i_1] [10] [i_8 + 1] = ((177 ? (~var_15) : (((arr_11 [i_8]) ^ (arr_13 [i_1] [i_2] [i_6] [i_7])))));
                            var_24 = ((0 ^ ((var_15 ? var_12 : 28503))));
                        }
                    }
                }
                var_25 = (arr_21 [i_2] [i_2] [i_6] [i_1]);
            }
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_46 [i_1] [i_2] [i_1] [i_10 + 1] [3] [i_1] [i_10 + 1] = ((!((65535 >= (arr_29 [i_1] [i_1] [i_1])))));
                            arr_47 [i_1] [i_1] [i_2] [i_1] [i_10] [i_1] [i_11 + 1] = (!var_2);
                        }
                    }
                }
                arr_48 [i_1] = (((~var_9) > 0));
            }
            var_26 = var_11;
        }
        var_27 = (((((arr_19 [i_1] [i_1] [i_1] [i_1]) << (var_4 + 5566))) < var_12));
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    {
                        var_28 ^= ((arr_10 [i_1] [i_1]) ? (200 * var_1) : ((var_8 ? -5 : (arr_10 [i_1] [i_1]))));
                        arr_55 [i_1] [i_12 + 1] [i_14] = (((arr_10 [2] [i_12 - 1]) ? (((var_5 ? var_8 : 22962))) : 16293027447261342119));

                        for (int i_15 = 3; i_15 < 9;i_15 += 1)
                        {
                            var_29 -= (((var_9 >= 37915) - 17471));
                            var_30 = (arr_14 [i_12] [4] [11]);
                            var_31 = (min(var_31, ((((((arr_21 [i_12 + 1] [i_12] [i_12 + 1] [i_12]) < (arr_19 [i_1] [i_12 + 1] [i_14] [6]))) ? (((var_17 ? (arr_39 [i_1] [i_12 + 1] [i_13] [i_14]) : 0))) : (arr_40 [i_1] [i_1] [i_14]))))));
                            var_32 = ((var_13 + ((2 ? var_14 : 10544980238885282841))));
                            var_33 += ((~(arr_30 [0] [i_12 + 1] [i_12 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
