/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= 213;
    var_15 = (((((13691384302351500770 | var_5) ? -0 : (var_7 && var_4))) * var_4));
    var_16 = (var_3 * var_8);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] = (arr_9 [i_0] [i_1 + 3]);
                        var_17 = (((~var_0) * (!var_9)));

                        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = (((-3065441550 / var_9) ? (min(var_8, ((var_8 ? var_1 : var_3)))) : ((max(((~(arr_7 [i_0] [i_0]))), (arr_2 [i_2]))))));
                            arr_18 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = ((((arr_4 [i_4 + 1] [i_2 - 4]) && (arr_4 [i_3 - 3] [i_0 - 1]))));
                            arr_19 [i_0] [i_0] [i_0] [9] = ((-(var_9 - var_9)));
                        }
                        for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_3] [i_0] [i_1] [i_3 - 3] [i_5] [i_5] [i_5] = (arr_3 [i_0] [i_1] [i_0]);
                            arr_23 [i_0 + 1] [i_0] [19] [17] [i_0] = var_0;
                            var_18 = var_13;
                            var_19 = (min(var_19, ((max((((~var_4) ? ((~(arr_21 [18] [i_0] [14] [i_0] [i_0 + 1] [i_0] [i_0]))) : (arr_5 [i_3 + 2] [i_2 - 1] [i_0 - 1]))), (((~(arr_3 [i_5 + 1] [0] [i_2])))))))));
                            var_20 ^= 3065441550;
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_21 = var_8;
                        var_22 = (min(var_22, (var_1 >= var_9)));
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_0 - 1] = 65535;
                        arr_32 [i_0] [i_0] [i_0] [i_2] = -5;
                    }
                    arr_33 [i_0] [i_1] [i_2] [i_0] = min(var_10, ((max(18446744073709551615, 5))));

                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        var_23 = ((-var_4 | ((((arr_25 [i_0 - 1] [i_0] [i_0]) || var_4)))));
                        var_24 ^= (96 - 1);
                        var_25 = (min(var_25, (((-(((arr_30 [i_0] [i_0] [i_2] [i_0 - 1] [i_0 + 1]) ? (arr_30 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_8]) : (arr_11 [i_0 + 1] [i_8 - 1] [i_8] [i_8 + 1]))))))));

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_26 = (min((((arr_2 [i_1 + 2]) - (arr_36 [13] [i_2] [i_9] [i_8] [i_0] [i_9]))), (((!(arr_13 [i_8] [i_0] [i_2 - 2] [i_1] [4] [i_0] [i_1 + 2]))))));
                            var_27 = var_4;
                        }
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        arr_42 [i_0] [i_0] [i_2 - 3] [i_0 - 1] = (17854622846312058311 % 65535);
                        var_28 *= ((~(((!((((((arr_10 [i_0] [0] [i_2] [i_2] [i_10]) + 2147483647)) >> (((arr_36 [i_10] [i_2] [i_2] [i_2] [i_2] [i_0 - 1]) + 1150402880))))))))));
                    }
                    var_29 = ((((((arr_16 [i_0] [i_0] [9] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]) ? (var_5 >= var_7) : ((~(arr_5 [i_0] [i_0] [9])))))) ? -65535 : var_7));
                }
            }
        }
    }
    #pragma endscop
}
