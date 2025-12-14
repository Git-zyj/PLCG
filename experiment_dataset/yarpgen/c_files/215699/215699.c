/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (var_4 ? (min((((~(arr_0 [i_0] [i_1])))), (arr_1 [i_1]))) : (((max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))));
                var_16 &= ((((34 ? 45 : 9886))) ? 1778986537620853622 : -23814);
                arr_6 [i_0] [i_1] [i_1] = ((!((((arr_5 [i_1] [i_1]) ? var_7 : (arr_4 [i_1] [i_1] [i_1 + 1]))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_14 [i_1] = var_13;
                        var_17 = var_8;
                        var_18 = 123;
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_19 = var_14;
                        arr_17 [i_4] [6] [i_2] [6] [i_0] |= ((((((-(arr_3 [i_1] [i_0]))) + 2147483647)) << ((((var_1 + (arr_8 [i_2]))) - 2032484203))));
                        arr_18 [i_0] [i_1] = ((52411180 ? -1930 : -19383));
                        var_20 = ((var_13 ? ((-19365 ? -107 : 18446744073709551603)) : (arr_2 [i_2 + 1] [i_1 - 1])));
                        arr_19 [i_1] [i_2] [i_1] [i_0] [i_1] = ((14 - (arr_4 [i_4 + 3] [i_2 - 1] [i_1 + 2])));
                    }
                    var_21 = (max(var_21, -1023));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_22 ^= (arr_2 [i_0] [i_2]);
                                var_23 = ((19377 << (2288884940 - 2288884938)));
                                var_24 &= (arr_3 [i_2] [i_0]);
                                var_25 *= (((arr_3 [i_0 - 1] [i_1 + 1]) > var_14));
                                var_26 = ((9893 && (arr_23 [i_1 + 1] [i_5 - 2] [i_6 + 1])));
                            }
                        }
                    }
                    arr_25 [i_1] = (arr_15 [i_0 + 1] [i_0] [i_1 + 2] [i_2 - 1] [i_1]);
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    var_27 *= ((((((arr_24 [i_7] [i_7] [i_1] [i_1] [i_1] [i_0] [i_0]) == 1))) - (arr_12 [i_7] [4] [4] [i_0])));

                    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_28 = (min(var_28, ((((arr_24 [i_0] [i_0 + 1] [i_1] [i_1 + 1] [i_7 + 1] [i_8 - 1] [i_8]) && ((((arr_2 [i_0] [i_8]) ? 0 : var_6))))))));
                        arr_31 [i_1] = var_5;
                    }
                    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_29 *= (((!8368630680849789882) ? var_8 : (-1930 ^ 1125032885)));
                        arr_36 [i_9] [i_7] [4] [i_1] [i_0] &= (!1);

                        for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_30 = 18446744073709551600;
                            var_31 = (~var_6);
                            var_32 = ((-26532 ? 127 : 18446744073709551588));
                        }
                        for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_33 -= ((((((arr_7 [i_9] [i_1] [i_0]) ? (arr_28 [i_11] [i_9]) : var_10))) ? (arr_28 [i_0] [i_7]) : (arr_40 [i_11 + 2] [i_11] [i_9] [i_7] [i_1 - 1] [i_0])));
                            var_34 = 65505;
                            arr_43 [i_0] [i_0] [i_0] [i_1] [i_7] [i_9] [i_1] = 106;
                        }
                        for (int i_12 = 1; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_35 = ((((arr_33 [i_1] [i_1]) ? var_3 : 3179273573)) + (~var_3));
                            var_36 *= (~-15);
                            arr_46 [i_12] [i_1] [i_7] [i_1] [i_0] = (((((var_14 ? 232 : var_14))) ? (((arr_12 [i_0] [i_1] [i_1] [i_9]) ? (arr_33 [i_1] [i_1]) : var_6)) : (arr_24 [i_1 + 1] [i_7] [i_7] [i_7 - 2] [i_7] [i_9 + 1] [i_12 - 1])));
                        }
                    }
                    var_37 ^= ((((1 ? var_12 : 2288884958))) || (((var_0 - (arr_44 [i_0] [i_0] [i_7] [i_7] [i_7] [i_1] [i_1])))));
                }
            }
        }
    }
    var_38 *= (min(var_8, ((max(var_5, (var_7 < 55639))))));
    #pragma endscop
}
