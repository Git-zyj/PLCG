/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = ((((arr_2 [i_0] [i_0]) ? -21469 : (max(18446744073709551615, 1)))));
                    var_15 &= ((!(18446744073709551609 | -4837467977638207380)));
                }
            }
        }
    }
    var_16 += 6;
    var_17 = var_13;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_18 = (!136);
        arr_12 [i_3] = (((var_5 ? 18446744073709551612 : 8)));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                var_19 = 18446744073709551615;
                var_20 = ((((min(1023, var_0))) ? var_11 : var_11));
            }
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                var_21 &= var_8;
                var_22 ^= (18446744073709551615 != -1276435997);
            }
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                var_23 += 1073740800;
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_24 ^= (~1);
                            var_25 = ((((((107 ? -1 : 3446441156))) + 2147483647)) >> (1073631370 - 1073631359));
                        }
                    }
                }
                arr_34 [i_4] = var_3;
            }
            arr_35 [i_4] = ((((min(132, 1)))) - (((arr_16 [5]) ^ (~1073631358))));
            arr_36 [i_4] [i_4] = (((var_6 ? 18446744073709551598 : 7)));
        }
        arr_37 [i_4] = -3950305224;
        var_26 = var_11;
        var_27 += var_1;
        var_28 ^= (((((!(arr_17 [i_4]))) ? 2520528321 : var_12)));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
    {
        var_29 = (min(var_29, (((arr_23 [i_11] [i_11] [i_11] [2]) ? (18446744073709551590 | -4984640963776879718) : var_12))));
        arr_41 [i_11] = var_1;
        var_30 = 10;
        var_31 += (arr_27 [i_11] [6]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        var_32 = (arr_16 [i_12]);
        /* LoopNest 2 */
        for (int i_13 = 4; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 3; i_16 < 11;i_16 += 1)
                        {
                            {
                                var_33 = 0;
                                var_34 = (min(var_34, (arr_28 [i_13 - 3] [i_16 - 2] [i_14])));
                                arr_55 [i_12] [8] = (arr_51 [9] [i_14] [i_13 - 4] [9]);
                            }
                        }
                    }
                    arr_56 [i_12] [i_12] [i_14] = 99;
                    var_35 = 848526139;

                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {

                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            var_36 += (arr_58 [i_12] [7] [i_14] [7] [i_18] [i_18]);
                            var_37 = var_3;
                        }
                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            var_38 = (((arr_66 [i_12] [i_13] [i_13] [i_17] [i_17 + 1]) ? var_12 : 18446744073709551615));
                            arr_67 [i_17] [i_14] [i_14] [i_17] = (((arr_3 [i_13 - 2] [i_19]) | var_9));
                        }
                        var_39 = (arr_47 [i_13 + 1]);
                        arr_68 [i_17] = -1363521631;
                        arr_69 [i_12] [i_12] [i_14] [i_17] [i_12] [i_17] &= (((arr_60 [i_12] [i_13] [i_17 - 1] [i_17 - 1] [i_13 - 3]) && var_0));
                        var_40 = (arr_26 [i_17 + 1] [i_17] [i_13 - 2]);
                    }
                }
            }
        }
        var_41 = (max(var_41, var_11));
    }
    #pragma endscop
}
