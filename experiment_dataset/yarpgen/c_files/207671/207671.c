/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((((32 ? ((4294967295 ? 65503 : var_0)) : (~1886906493)))) ? -18998 : 16367));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (((max((arr_2 [i_1 + 3] [i_1 - 1]), (arr_2 [i_1 - 2] [i_1])))) ? ((var_3 ^ (arr_2 [i_1 - 2] [i_1 - 2]))) : ((-((1 ? 2147483647 : 16364)))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_9 [i_1] = ((((((arr_3 [i_1 + 2] [i_1 + 2]) == var_4))) <= (((arr_3 [i_1 + 2] [i_1 + 3]) ? 2111 : var_10))));
                var_14 += (((((~var_8) ? 29141 : 28)) <= 1));
                arr_10 [19] [i_1] [i_0] = (((-(17300411 * 0))));
                var_15 = max(((max((arr_5 [i_1]), var_7))), var_7);
            }
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                arr_14 [i_0] [i_0] [i_1] [i_0] = 52052;

                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    var_16 = 32;
                    var_17 += var_11;

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_19 [12] [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1] = var_4;
                        var_18 = ((13502 ? ((4 + (arr_16 [i_5] [i_5] [i_5] [i_5 + 1] [i_5]))) : var_11));
                    }
                    var_19 = ((-(max((arr_0 [i_1]), var_1))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_24 [i_1] = 1;
                    arr_25 [i_0] [i_1 + 2] [i_3] [i_1] = (((((~((0 ? var_6 : var_5))))) ? 18446744073709551605 : var_0));
                    var_20 += (((arr_2 [7] [i_0]) ? (((~(arr_18 [0] [i_1 + 1] [i_1] [i_1] [i_1] [i_0] [0])))) : (((arr_18 [12] [i_1 + 3] [i_1] [12] [i_1] [12] [12]) ? 4294967284 : -1388715044))));
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 22;i_7 += 1)
                {
                    var_21 = ((16367 ? (arr_26 [i_3 - 1] [i_0] [i_3] [i_7]) : (212 * 6506927630791445591)));
                    var_22 = (!1388715042);
                }
                var_23 = ((((((~var_1) ? (3 % 1) : (var_11 & var_4)))) ? (((~(~var_9)))) : (~2188717957)));
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 14;i_8 += 1) /* same iter space */
    {
        arr_32 [14] &= (~-var_11);
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_40 [i_8] = (((-var_1 + 2147483647) << (182 - 182)));
                    var_24 = (max(var_24, -8174));
                }
            }
        }
    }
    for (int i_11 = 4; i_11 < 14;i_11 += 1) /* same iter space */
    {
        var_25 = ((((((arr_11 [20] [i_11] [0] [i_11 - 1]) ? (arr_0 [i_11]) : 36))) ? ((var_8 ? ((var_3 ? 4294967290 : -29142)) : ((((1 >= (arr_41 [i_11]))))))) : (((var_2 ? var_0 : 1)))));

        /* vectorizable */
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {
                        var_26 = ((var_6 && (((var_2 << (var_5 - 2825608414))))));
                        var_27 = (min(var_27, (arr_35 [1] [1])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_15 = 1; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 15;i_17 += 1)
                    {
                        {
                            var_28 = 1;
                            var_29 = 2106249327;
                            var_30 = (min(var_30, ((((0 + 31) | (arr_44 [i_15] [i_12]))))));
                            var_31 |= var_4;
                            var_32 = (min(var_32, ((((var_0 && (arr_47 [i_11] [i_12] [i_15 + 1])))))));
                        }
                    }
                }
            }
            arr_59 [1] [i_12] = (2106249330 ? 113 : (arr_50 [i_12 + 1] [i_12] [i_11] [i_12 + 1]));
        }
    }
    for (int i_18 = 0; i_18 < 18;i_18 += 1)
    {
        var_33 = (min(var_33, (((16367 << (3471173191 - 3471173175))))));
        arr_62 [i_18] = (((((((max(1, var_3))) ^ var_3))) ? ((((!(52065 && var_10))))) : ((~(~4)))));
        arr_63 [i_18] [i_18] = (!3772706940519471070);
    }
    #pragma endscop
}
