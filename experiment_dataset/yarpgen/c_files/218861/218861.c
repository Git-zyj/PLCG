/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_11 = (-(((arr_1 [i_0]) / (arr_3 [i_0 - 1]))));

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_12 = 119;
            arr_6 [11] [i_1] [i_1] = 172;
            arr_7 [i_0 + 1] = 1;
            arr_8 [i_0 + 2] [9] [9] = ((~((var_8 ? (arr_2 [i_0] [i_1]) : var_8))));
        }
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            var_13 = (((((arr_10 [i_0 - 1]) + 2147483647)) << (((((arr_10 [i_0 + 2]) + 27438)) - 28))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_14 = ((var_3 ? (arr_0 [i_0 - 1]) : var_10));
                        arr_17 [i_0] [i_0] [i_3] [i_3] [i_4] = ((((((arr_5 [i_2]) != var_8)))) ^ (-1 - -119));
                        var_15 = (max(var_15, (((var_1 + (arr_10 [i_0 - 1]))))));
                    }
                }
            }

            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_16 ^= ((var_7 ^ (((arr_13 [3] [i_2 + 1] [3] [i_2 + 1]) ? 40778 : (arr_2 [14] [i_0 - 1])))));
                    arr_24 [i_0 + 2] [i_2] [i_5 + 1] [i_5] [i_6] = (arr_10 [i_0]);
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_29 [i_2] [i_0] = ((~(arr_9 [11] [16] [i_5])));
                            arr_30 [i_0 - 1] [i_2] [17] [i_7 + 1] [i_8] = (var_10 - 262144);
                            arr_31 [3] [i_2 - 1] [i_2 - 1] [i_7 + 1] [i_8] = (((arr_13 [i_0 + 1] [22] [i_2 - 2] [i_8 - 1]) == 7866801676032049931));
                            var_17 = (min(var_17, (((-(arr_15 [i_0 + 2] [i_7 + 1] [i_7 + 1] [i_7 - 1] [0] [i_8 + 1]))))));
                        }
                    }
                }
                arr_32 [i_0] [i_5] = ((3312127455 ? 3022638588446181553 : 661692818));
                var_18 = (arr_20 [i_0] [i_0 + 2] [i_2 + 1] [i_5 + 2]);
            }

            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                arr_37 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((((-(arr_19 [i_9] [i_9] [i_9]))) > (((var_1 ? (arr_16 [i_0 + 2] [19] [i_2] [i_9]) : 119)))));

                for (int i_10 = 1; i_10 < 23;i_10 += 1) /* same iter space */
                {
                    var_19 ^= (((119 ? var_2 : var_3)));
                    var_20 = (max(var_20, (arr_1 [i_10 + 1])));
                    arr_40 [i_10] [i_10] [i_10] [i_0 + 1] = 0;
                }
                for (int i_11 = 1; i_11 < 23;i_11 += 1) /* same iter space */
                {
                    var_21 = (((arr_4 [i_0 - 1] [i_0 + 2]) ? var_10 : (arr_4 [i_0 + 2] [i_0 + 2])));
                    arr_44 [i_11 - 1] [i_0] = 9223372036854775807;
                }
            }
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_22 = 255;
            arr_48 [i_0] [i_12] [i_12] = ((~((~(arr_36 [i_12] [i_12] [i_0] [i_0])))));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_23 = (((arr_22 [i_12] [i_13] [i_13 - 1] [i_13 + 1] [7]) < (arr_22 [i_13] [i_13] [i_13 + 1] [i_13 - 1] [i_14 + 3])));
                            var_24 = -24;
                        }
                    }
                }
            }
            arr_57 [i_12] [i_0] = ((~(arr_53 [i_0 - 1] [i_0 + 2])));
        }
        for (int i_16 = 1; i_16 < 23;i_16 += 1)
        {
            arr_61 [i_16] [i_16 + 1] = ((17739001897287532550 ? (arr_60 [i_0 - 1] [i_16 + 1]) : (arr_60 [i_0 + 1] [i_16 + 2])));
            var_25 = (min(var_25, -3));
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 4; i_18 < 23;i_18 += 1)
                {
                    {
                        var_26 = (arr_51 [i_0] [i_0] [i_18] [18] [22] [22]);
                        var_27 = (min(var_27, ((var_5 ? (arr_15 [i_0 + 1] [i_16 - 1] [i_16 + 2] [i_16 - 1] [i_16 + 1] [i_17 + 3]) : (arr_11 [i_16] [i_16 - 1] [i_16 + 1] [i_18 + 1])))));
                        var_28 = ((var_10 ? var_5 : 10));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        {
                            var_29 = var_4;
                            var_30 = 11;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 11;i_22 += 1)
    {
        for (int i_23 = 2; i_23 < 10;i_23 += 1)
        {
            {
                arr_79 [i_22] [i_22] [i_23 + 1] = var_0;
                var_31 = (max(var_31, (((-((var_10 ? (((var_4 ? var_1 : var_1))) : (arr_67 [i_23 - 1] [16] [i_23 - 1] [i_23]))))))));

                /* vectorizable */
                for (int i_24 = 2; i_24 < 10;i_24 += 1)
                {
                    arr_82 [i_22] = (arr_68 [i_23] [i_22] [i_22] [i_24] [i_24 - 2] [15]);
                    arr_83 [i_22] [i_22] [i_23] [i_24] = (((arr_75 [i_23 + 1]) + ((-1077502131 ? (arr_80 [i_22] [i_23 + 1] [i_24]) : var_2))));
                    var_32 = (((arr_38 [17] [i_23 - 2]) || (arr_38 [i_23 - 2] [i_24 - 2])));
                }

                for (int i_25 = 1; i_25 < 8;i_25 += 1)
                {
                    var_33 = ((-(arr_65 [i_22] [i_22] [i_23] [i_23] [12])));
                    var_34 = (arr_25 [i_25] [i_25 - 1] [i_23] [i_23] [i_22] [i_22]);
                }
            }
        }
    }
    var_35 = (min(var_35, var_3));
    var_36 = (((241 | 50587) >> ((((-120 + var_2) < (var_7 / var_1))))));
    var_37 = ((var_1 ? var_9 : 3589626457361676699));
    #pragma endscop
}
