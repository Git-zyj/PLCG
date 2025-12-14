/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(var_0, 46126))) ? 64512 : ((((5 ? var_9 : -75)) / 1703904951)));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((19392 ? 0 : 19417))) ? var_9 : ((((arr_3 [4]) ? 11 : var_5))))));

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_19 = 7534;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_17 [i_0] = 0;
                            var_20 += (((arr_6 [i_0 - 1]) || (((arr_6 [i_2]) <= (arr_6 [i_3])))));
                            var_21 = (min(var_21, (((117 ? 2113929216 : 25)))));
                        }
                    }
                }
            }
            var_22 = 46119;
        }
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            var_23 = (min(var_23, var_1));
            arr_22 [i_5 + 2] = (((9223372036854775807 ? (var_12 / var_14) : ((var_1 ? var_7 : (arr_20 [i_0] [i_5 + 1] [i_0]))))));
            arr_23 [i_0] [i_0] = (max((((arr_10 [i_0 - 1] [i_5 + 1]) ? (arr_10 [i_0 + 1] [i_5 + 3]) : (arr_10 [i_0 + 1] [i_5 + 2]))), (min(1, (arr_10 [i_0 + 1] [i_5 + 1])))));
        }
        var_24 = 18446744073709551615;
    }

    for (int i_6 = 3; i_6 < 15;i_6 += 1)
    {
        var_25 = (arr_26 [i_6]);
        arr_27 [i_6] [i_6] = ((((((~(arr_26 [i_6]))))) >> (min(19410, 0))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_26 ^= var_14;
                                var_27 = (((-17846 ? (((-21 + 2147483647) << (18446744073709551599 - 18446744073709551599))) : 19409)));
                                arr_37 [i_6] [i_7 - 2] [i_6] [1] [i_6] = 5969;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        arr_40 [i_11] [i_7] [i_8] [2] [i_6] = ((-159367645 ? (((arr_30 [i_7 - 1] [i_7 - 1] [i_7 - 1]) ? 3 : (arr_26 [i_8]))) : 97));
                        arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_32 [i_6 - 2] [i_7 + 1] [i_7 + 1]);
                        arr_42 [12] [12] [12] [12] [i_6] = (arr_24 [i_7]);
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            arr_48 [i_6] [i_6] [i_6] [i_6] = -0;
                            arr_49 [i_6] [i_7] [i_6] [i_7] = ((!((1023 && (((0 ? 1023852484 : 1)))))));
                            arr_50 [i_6] [i_7] [i_6] [i_6] [i_6] [i_13] [i_13] = 5969;
                        }
                        arr_51 [i_12] [i_12] [i_6] [i_6] [i_7] [i_6] = 4032;
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        var_28 = (min(var_28, (arr_26 [i_14])));
                        arr_55 [i_6] [i_6] [i_6] [i_6] = (arr_34 [i_6] [i_6] [i_6] [15]);
                        var_29 = (max(((min(-1, var_13))), (min(19410, 111))));
                    }
                    /* vectorizable */
                    for (int i_15 = 3; i_15 < 14;i_15 += 1)
                    {
                        arr_59 [i_6] [i_7] = 26;
                        var_30 = (min(var_30, 12));
                    }
                }
            }
        }
    }
    var_31 = (max(var_31, var_14));
    #pragma endscop
}
