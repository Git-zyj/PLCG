/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_10 *= (((~18446744073709551590) != (arr_2 [i_0])));
                var_11 = (arr_7 [i_0 + 1] [i_1]);

                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    var_12 = (var_6 && var_9);

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_13 *= (((((26 ? -45297163 : 43228))) ? 24236 : (1 && 2274205238)));
                        var_14 *= 22;
                        var_15 *= (~2020762074);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_16 *= (arr_9 [i_0 + 1] [i_1] [i_2] [2] [i_5]);
                        arr_17 [i_1] = 18446744073709551593;
                        var_17 = ((arr_5 [i_2] [i_1] [i_2] [i_3 + 2]) ? (arr_13 [i_0 + 1] [i_1] [9] [0] [i_1] [i_3 - 1] [i_5]) : (arr_5 [i_0 + 1] [i_1] [i_1] [i_2]));
                    }
                    var_18 = (min(var_18, (!2020762062)));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_19 *= ((var_5 + (((arr_12 [i_2] [0] [i_2] [i_2] [i_2] [i_2] [i_2]) - (arr_10 [i_2] [i_2] [i_1])))));
                    var_20 *= (((var_7 > 1) && 0));
                    var_21 = (arr_18 [i_1] [i_0 + 1] [i_1]);
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_22 [i_0] [i_1] [i_1] [i_2] [i_7] [i_1] = (108 < 25);

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_22 *= -8875556;
                        var_23 = (max(var_23, (((-(arr_24 [i_0] [i_0 + 1] [i_0 + 1] [10]))))));
                        var_24 *= var_2;
                        var_25 = 1;
                        var_26 *= 4014943152;
                    }
                    var_27 = (min(var_27, (((((var_9 ? (arr_14 [5] [i_1] [i_1] [i_0 + 1] [i_0 + 1]) : 5032))) ? 2147483647 : ((((arr_10 [i_2] [i_1] [10]) >= var_0)))))));
                    var_28 *= ((4220032970 ? 615755624 : 0));

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_29 = ((var_1 && (13 || var_5)));
                        var_30 = ((!(((var_0 ? var_6 : (arr_13 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_7] [i_9]))))));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_31 = (max(var_31, var_4));
                        var_32 = (min(var_32, 3));
                        arr_31 [i_1] = (((arr_2 [i_0 + 1]) ? var_8 : var_1));
                    }
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        var_33 = (((var_1 * var_3) ? (((var_9 > (arr_7 [i_2] [i_7])))) : (((1 >= (arr_0 [2]))))));
                        arr_34 [i_1] [i_1] = var_3;
                        arr_35 [i_0] [i_1] [i_1] [i_7] [i_7] [i_11 + 1] [5] = ((arr_25 [i_0 + 1] [i_1] [i_0] [i_0 + 1] [i_0 + 1]) >= -10);
                        var_34 = (max(var_34, (var_7 && 28964828)));
                        var_35 = ((-(arr_25 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                    }
                }
                for (int i_12 = 1; i_12 < 10;i_12 += 1)
                {
                    var_36 = ((!(((1 ? 10861 : 1)))));
                    var_37 *= ((-9223372036854775802 ? (arr_0 [i_2]) : (arr_19 [i_0] [i_1] [i_2] [i_12 - 1])));
                }
            }
            for (int i_13 = 2; i_13 < 8;i_13 += 1) /* same iter space */
            {
                var_38 *= (arr_42 [i_0] [i_0] [0] [i_0 + 1]);
                var_39 = (((arr_3 [i_1]) - (arr_10 [i_1] [i_0 + 1] [i_13 - 1])));
            }
            for (int i_14 = 2; i_14 < 8;i_14 += 1) /* same iter space */
            {
                arr_45 [i_0] [i_1] [i_0] = (!2147483647);
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 9;i_16 += 1)
                    {
                        {
                            var_40 = -var_2;
                            var_41 *= ((1 ? (arr_21 [i_0] [i_1] [i_14 + 2] [i_0 + 1]) : (arr_21 [i_0] [i_15] [i_14 - 2] [i_0 + 1])));
                        }
                    }
                }
                arr_50 [i_1] [i_1] [i_1] [i_1] = ((42 / (185 / -59)));
            }
            arr_51 [i_1] [i_1] = (~12794279367593861518);
        }
        var_42 *= ((-(arr_1 [i_0] [i_0])));
        var_43 *= (2484732049014488212 / 3927834673);
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 8;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 10;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    {
                        var_44 = (((var_7 ? 2626139679111269474 : var_4)));
                        var_45 *= var_7;
                        var_46 *= (((arr_8 [i_0 + 1] [6] [i_0 + 1]) * ((var_8 ? 71 : var_4))));
                        var_47 *= 2147483647;

                        for (int i_20 = 0; i_20 < 11;i_20 += 1)
                        {
                            var_48 = (var_4 * 108);
                            var_49 = ((16902248772699187768 >= ((((arr_20 [i_20] [7] [i_0] [i_0]) ? -5019 : 283726776524341248)))));
                        }
                        for (int i_21 = 1; i_21 < 1;i_21 += 1)
                        {
                            var_50 = ((var_1 ? var_1 : -1443868854));
                            var_51 *= ((1 ? (arr_13 [i_0 + 1] [i_17 + 3] [i_17] [i_17 + 2] [4] [i_19] [i_17 + 3]) : (arr_59 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1])));
                            var_52 = (((arr_18 [i_0 + 1] [i_17 + 2] [i_19]) ? (arr_18 [i_17] [i_17 + 3] [i_19]) : var_4));
                        }
                    }
                }
            }
        }
    }
    for (int i_22 = 0; i_22 < 0;i_22 += 1) /* same iter space */
    {
        var_53 = (arr_41 [i_22 + 1]);
        var_54 *= (((~1) ? (arr_1 [1] [i_22]) : ((((arr_26 [i_22] [4] [i_22] [4] [i_22]) ? ((min(var_0, (arr_26 [i_22 + 1] [i_22 + 1] [i_22 + 1] [8] [i_22 + 1])))) : var_7)))));
    }
    var_55 = var_7;
    var_56 = var_9;
    var_57 = (max(((max(4190104560243023221, (var_2 <= 2020762057)))), var_1));
    #pragma endscop
}
