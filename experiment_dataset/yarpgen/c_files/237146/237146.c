/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (+((42131145 ? (-27421615 != 436177483) : (var_7 + 0))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = var_11;
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (((((~((~(arr_4 [i_0] [i_0] [i_3])))))) ? (((((arr_4 [i_3] [i_2] [i_1]) ? var_8 : var_7)))) : (((arr_8 [i_1 - 1] [i_0 + 2] [i_0] [i_0] [i_0]) ? ((6946160637157007565 % (arr_2 [i_0] [i_0]))) : var_9))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_16 = (max(var_16, (6946160637157007565 < var_1)));
                            var_17 = (min((((116401586 != ((2163547968908174628 ? -1739931466 : -1))))), ((~(arr_1 [i_3 + 1])))));
                            var_18 = -18446744073709551615;
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_19 = 6946160637157007565;
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_3] [i_2] = (min(4177920, ((-4264160145419288129 ? (arr_17 [i_0] [i_0] [i_2] [i_2]) : var_12))));
                        }
                        var_20 |= 6946160637157007565;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_21 = var_5;
                        arr_22 [4] [i_1] [i_1] [i_1] &= (!-3026453126259955495);
                        arr_23 [i_0] [i_0] = (((((~var_8) + 2147483647)) >> ((((arr_10 [i_1] [i_1] [i_1] [i_1]) && var_13)))));
                    }
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_0] [i_7] [i_1] = var_11;

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            var_22 = (min(((var_6 & (arr_3 [i_7] [i_0]))), (((~((var_6 ? (arr_0 [i_0]) : var_9)))))));
                            var_23 = -18761;
                            var_24 = (max(var_24, (((~((-3026453126259955479 ? (((arr_4 [i_0] [i_0] [i_8]) ? var_14 : var_10)) : var_8)))))));
                            var_25 ^= ((arr_4 [i_7 + 2] [i_1 + 1] [i_1 + 1]) & ((~(~-1))));
                        }
                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_26 = arr_0 [i_0 - 1];
                            var_27 &= (!4294967295);
                            var_28 = ((-(max((max(753085001, -4177920)), ((7284442444871238177 ? (-9223372036854775807 - 1) : 2))))));
                        }
                        var_29 = (((~var_9) ? (arr_30 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] [i_2]) : ((((arr_8 [i_1 - 1] [i_7 + 4] [i_7] [i_7 + 4] [i_1 - 1]) + var_8)))));

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            var_30 = (max(var_30, -5492));
                            var_31 = ((!(arr_2 [i_0 + 4] [i_0 + 2])));
                        }
                        arr_34 [i_0] [i_0] [i_0] [i_0] = var_8;
                    }
                    var_32 = arr_7 [i_0] [i_2] [i_0] [i_2];
                    arr_35 [i_0] = (var_1 ? (max((var_9 / var_3), -4264160145419288128)) : (((8138380167764031397 ? 1073610752 : 27421615))));
                }
            }
        }
    }
    var_33 &= (~var_14);
    var_34 = (((var_8 & var_7) || var_5));
    var_35 = (var_13 / var_10);
    #pragma endscop
}
