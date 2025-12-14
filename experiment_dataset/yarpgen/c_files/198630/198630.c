/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_11 = var_2;
                        var_12 = (var_6 ? ((var_9 ? var_3 : var_2)) : (((var_7 ? 45085 : var_10))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            arr_18 [i_5] = ((-268435456 & (var_2 - var_0)));
            var_13 = (((((16065397685193496191 ? 55582 : 244))) - 18446744073709551615));

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_22 [i_4] [i_5] [i_6] [i_4] = 235;
                var_14 += -148;
            }
            var_15 = (min(var_15, (arr_17 [i_5])));
            arr_23 [i_5] = (((-11524 ? -58 : (arr_21 [i_5 - 2] [i_5 - 2] [i_5 - 2]))));
        }
        var_16 = (max(var_16, var_3));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_17 = var_1;
        var_18 = (max(var_18, (((!(!-2381346388516055424))))));

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_19 = (((max(23, 175))) ? (arr_30 [i_7] [i_8]) : 40274);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_20 = ((((max((var_8 <= 65535), (~var_6)))) ? 268435433 : (max(((23 ? var_0 : 18014261070528512)), var_3))));
                            var_21 = var_0;
                            arr_40 [i_7] [i_11] [i_9] [i_9] [i_9] [i_8] [i_7] = ((!(((-56 ? (((9812588089092722944 ? var_4 : var_9))) : (min(1, 16065397685193496191)))))));
                        }
                    }
                }
            }
            var_22 = 201;
            var_23 = (((!201) ? (18446744073709551610 && var_6) : ((2984397437 - (arr_35 [i_7] [i_7] [i_8] [i_8])))));
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 24;i_12 += 1)
        {
            var_24 = (max(var_24, 2381346388516055425));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_25 = ((-(1 <= 36)));
                            arr_50 [i_13] [i_12] [i_7] = (((arr_47 [i_13 + 1] [i_12 - 2] [i_12] [i_12]) > (arr_47 [i_13 - 1] [i_12 - 3] [i_12] [i_7])));
                        }
                    }
                }
            }
        }
        for (int i_16 = 1; i_16 < 1;i_16 += 1)
        {
            var_26 = ((((min(23, 8))) ^ (arr_41 [i_16])));

            /* vectorizable */
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 24;i_19 += 1)
                    {
                        {
                            arr_63 [i_7] [i_7] [i_16] [i_7] = ((arr_62 [i_7] [i_16] [i_16] [i_16] [i_7]) > var_9);
                            arr_64 [i_7] [i_7] [i_7] [i_7] [i_7] [i_16] = var_7;
                            var_27 = (max(var_27, ((!(-268435431 ^ 7082)))));
                            var_28 = (var_1 || 1265263548);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        {
                            var_29 += var_0;
                            var_30 = (min(var_30, (-8 & 30349)));
                        }
                    }
                }
            }
            arr_69 [i_16] = var_9;
        }
        for (int i_22 = 0; i_22 < 25;i_22 += 1)
        {
            arr_74 [i_7] = (arr_53 [i_22] [i_7] [i_22]);
            var_31 = arr_31 [i_7] [i_7] [i_7] [i_7];
            arr_75 [i_7] [i_7] [i_7] = 4647018243061891085;
            var_32 |= arr_24 [i_7];
        }
    }

    for (int i_23 = 0; i_23 < 16;i_23 += 1)
    {
        var_33 = (min(var_33, var_7));
        var_34 = var_2;
        var_35 += (min((max(var_3, ((min(var_1, var_1))))), ((((!62) <= (179 <= var_8))))));
        var_36 = var_6;
    }
    /* LoopNest 3 */
    for (int i_24 = 2; i_24 < 15;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 16;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 16;i_26 += 1)
            {
                {
                    var_37 = var_7;

                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        arr_89 [i_27] [i_26] [i_24] [i_24] [i_24] |= (var_9 - (max(var_4, (arr_20 [i_27] [i_27] [i_27] [i_27]))));
                        arr_90 [i_26] = var_9;
                    }
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 16;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 16;i_29 += 1)
                        {
                            {
                                var_38 ^= (max((var_10 | var_4), (arr_81 [i_26])));
                                var_39 -= var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_30 = 1; i_30 < 17;i_30 += 1)
    {
        for (int i_31 = 0; i_31 < 21;i_31 += 1)
        {
            {
                var_40 = (min((!172766719), (min(var_0, 1))));
                arr_100 [i_30] [i_30] [i_30] = (1 ? -71661638 : -2735);
                var_41 -= ((!((min(var_10, 0)))));
            }
        }
    }
    #pragma endscop
}
