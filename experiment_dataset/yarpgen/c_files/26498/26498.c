/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (-var_6 > (var_5 % var_7));
        arr_3 [i_0] [i_0] = var_4;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_10 = var_0;
                            arr_15 [i_4] [i_3] [15] [14] [15] [i_0] [14] = (((var_0 != var_2) >= var_8));
                            arr_16 [1] [i_1] [i_1] [i_1] [3] = ((!(~var_5)));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [1] [11] [11] [1] [i_3 + 1] [i_0] = var_8;
                            var_11 = ((var_9 >> (var_9 - 17923337)));
                            arr_20 [i_0] [15] [1] [i_3] = var_0;
                        }

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_12 = (((var_7 >> (var_7 - 2865025777))));
                            arr_23 [1] [i_1] [12] [12] [i_1] [12] = var_5;
                            var_13 = var_8;
                            arr_24 [i_0] [i_0] [i_0] = (var_9 - var_3);
                            var_14 -= var_0;
                        }
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [9] [1] [i_0] [i_7] [i_0] = var_1;
                            var_15 = (min(var_15, var_3));
                        }
                        var_16 = (10 % 1113219332);
                        arr_28 [6] [i_1] [i_2] [i_3 + 1] [i_1] [i_1] = (~var_2);
                    }
                }
            }
        }
        arr_29 [i_0] = var_2;
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
    {
        arr_33 [i_8] = ((~(~var_4)));
        arr_34 [17] = ((((-(~var_1))) + (~var_5)));
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_10 = 3; i_10 < 16;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {

                        for (int i_13 = 2; i_13 < 17;i_13 += 1) /* same iter space */
                        {
                            arr_46 [i_9] [i_11] [i_11] [i_10 + 1] [i_13 - 2] = (~1742779593);
                            arr_47 [i_9] [i_9] [i_11] [4] [i_13] = ((var_7 << (var_3 - 10667)));
                        }
                        for (int i_14 = 2; i_14 < 17;i_14 += 1) /* same iter space */
                        {
                            arr_50 [i_9] [i_10] [i_10] [i_11] = var_2;
                            var_17 = (((var_2 % var_7) & var_4));
                            var_18 = var_3;
                        }
                        for (int i_15 = 2; i_15 < 17;i_15 += 1) /* same iter space */
                        {
                            var_19 = var_4;
                            var_20 = ((~(var_3 % var_8)));
                            arr_54 [i_9] [i_9] [i_11] [14] [i_11] = var_3;
                            arr_55 [i_10] [i_11] [i_10] = var_6;
                        }
                        arr_56 [i_11] [i_11] [i_11] = (var_8 / var_8);
                        arr_57 [i_9] [i_9] [i_9] [i_9] [i_11] = var_1;
                        arr_58 [i_11] = -var_1;
                        arr_59 [14] [i_10] [i_10] [i_10] [i_11] [i_10] = var_4;
                    }
                }
            }
            arr_60 [i_10 - 2] = (~var_5);
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    var_21 += (var_0 + var_5);
                    arr_67 [i_16] [11] [i_17] [i_17] = ((~(var_1 | var_8)));

                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                    {

                        for (int i_19 = 2; i_19 < 17;i_19 += 1)
                        {
                            var_22 = (min(var_22, var_8));
                            var_23 = var_0;
                            arr_72 [i_9] [i_16] [7] [i_18] [i_19 - 2] = ((+((((-9223372036854775807 - 1) || 61086)))));
                            arr_73 [2] [i_9] [8] [i_19] [i_9] |= var_4;
                        }
                        arr_74 [1] [i_16] [3] [5] [5] = var_2;
                        arr_75 [i_16] [i_17] [i_17] [0] = var_3;
                    }
                    for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
                    {
                        arr_79 [i_16] [i_16] [13] [i_16] = ((~((((~var_1) > var_6)))));
                        var_24 = (((((~var_3) + 2147483647)) << (((~var_9) - 4277043928))));
                    }
                    for (int i_21 = 0; i_21 < 18;i_21 += 1) /* same iter space */
                    {

                        for (int i_22 = 0; i_22 < 18;i_22 += 1) /* same iter space */
                        {
                            arr_85 [i_9] [i_16] [14] [14] [i_16] [i_16] = (((!(var_4 + var_1))));
                            arr_86 [i_16] [17] [16] [i_21] [i_22] = var_5;
                            arr_87 [i_16] = (var_8 * var_7);
                        }
                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 18;i_23 += 1) /* same iter space */
                        {
                            arr_90 [i_9] [i_17] [i_16] [i_23] = (~var_1);
                            arr_91 [i_9] [i_16] [i_16] [i_21] [14] = (~var_9);
                            arr_92 [i_16] [i_16] [i_17] [i_21] [1] = var_0;
                        }
                        for (int i_24 = 0; i_24 < 18;i_24 += 1) /* same iter space */
                        {
                            arr_95 [i_9] [i_16] [i_9] [i_9] = var_3;
                            var_25 = var_8;
                            var_26 = var_7;
                        }
                        arr_96 [i_17] [10] [i_17] [i_16] = var_2;
                    }
                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 18;i_25 += 1) /* same iter space */
                    {
                        var_27 = var_5;
                        arr_99 [i_9] [i_9] [i_9] [i_16] [i_9] [i_9] = var_1;
                        arr_100 [i_25] [i_16] [i_16] [i_9] = (var_4 & var_9);
                    }
                    var_28 &= var_4;
                    arr_101 [i_16] [i_16] [i_17] = (!var_3);
                }
            }
        }
    }

    for (int i_26 = 3; i_26 < 8;i_26 += 1)
    {
        arr_104 [7] [i_26] = -var_3;
        var_29 = (var_1 | var_9);
        arr_105 [i_26] = var_5;
        arr_106 [i_26] = ((~(~var_4)));
    }
    var_30 = var_3;
    /* LoopNest 2 */
    for (int i_27 = 0; i_27 < 22;i_27 += 1)
    {
        for (int i_28 = 0; i_28 < 22;i_28 += 1)
        {
            {

                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    var_31 = var_2;
                    arr_116 [i_27] [i_28] = (var_2 > var_2);
                    arr_117 [i_27] [i_27] [i_27] [i_28] = ((var_2 >> (var_1 - 14560)));
                }
                var_32 = var_9;
            }
        }
    }
    #pragma endscop
}
