/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, (((-(~var_1))))));
        var_12 = ((var_7 ? ((((((arr_1 [i_0] [i_0]) + 2147483647)) << (((arr_0 [i_0] [i_0]) - 14436))))) : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_0))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 -= ((arr_1 [i_0] [i_1]) ? (arr_1 [i_1] [i_0]) : (arr_1 [i_0] [i_1]));

            for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
            {
                arr_7 [i_0] [i_0] = (arr_6 [i_2] [i_1] [i_2 - 1]);
                var_14 = ((var_8 ? (((arr_5 [i_0] [i_0] [i_1] [i_2]) ? var_3 : (arr_6 [i_0] [i_0] [i_0]))) : (((var_1 >= (arr_0 [i_0] [i_1]))))));

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_15 = (((arr_6 [2] [i_1] [i_2 + 1]) ^ ((-(arr_9 [i_2] [i_1] [i_2] [i_3] [i_1])))));
                    var_16 -= ((-(((arr_6 [i_0] [i_2 - 2] [i_3]) ? (arr_5 [10] [i_1] [i_2 + 1] [i_3]) : var_5))));
                    var_17 = (max(var_17, (((var_6 <= (arr_9 [i_0] [i_0] [i_1] [i_2] [i_0]))))));

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_18 = ((~(((!(arr_0 [i_0] [i_1]))))));
                        var_19 = ((var_4 + (((arr_5 [4] [i_3] [i_2] [i_0]) * (arr_4 [i_0] [i_2])))));
                        var_20 = (max(var_20, (arr_12 [i_2 - 1] [i_2 - 1] [i_4 + 3])));
                        var_21 = (((~41512) ? (((arr_8 [i_1] [i_1] [i_1] [i_3]) ? var_7 : (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4 + 3]))) : (((arr_9 [i_0] [i_1] [i_4] [i_3] [i_4 + 4]) / (arr_6 [i_1] [i_3] [i_4])))));
                    }
                }
                var_22 = (max(var_22, (((((((arr_2 [7]) >= var_8))) >> (((arr_3 [i_0] [i_1]) - 631618940)))))));
                var_23 = (((((var_6 ? var_9 : var_0))) ? (var_2 > var_1) : var_0));
            }
            for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_24 = (max(var_24, ((~(arr_0 [12] [i_0])))));
                arr_15 [i_0] [i_1] [i_5 - 1] [i_5] = ((!((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ var_6)))));

                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    var_25 = ((((((!(arr_16 [i_6 + 1] [i_1] [i_6 + 1] [i_6] [i_6] [i_6]))))) > (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_4 : var_2))));

                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        var_26 = var_8;
                        var_27 = (~var_9);
                    }
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        var_28 = var_6;
                        var_29 = (min(var_29, ((((((arr_21 [i_0]) ? var_8 : (arr_6 [i_0] [i_0] [i_8]))) ^ (!var_3))))));
                        arr_24 [i_0] [i_9 + 2] = -1818554941;
                    }
                    var_30 ^= (var_4 ^ var_4);
                }
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    var_31 = (arr_16 [i_0] [i_10 + 2] [i_10] [i_10 + 1] [i_10 + 1] [i_1]);
                    var_32 = (~((var_6 ? (arr_4 [i_1] [i_1]) : (arr_14 [5]))));
                }
                var_33 = (arr_26 [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_5 - 2]);
            }
            arr_27 [i_0] [i_1] [i_0] = (((((((arr_3 [i_0] [i_1]) <= var_4)))) & (~var_1)));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                {
                    arr_33 [i_0] [i_0] [i_0] = ((((((arr_16 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) ? (arr_13 [i_11] [i_0] [i_12 - 1] [i_11]) : var_9))) & (((arr_18 [i_12] [i_12 - 1] [i_12] [i_11] [i_11] [i_0]) % var_4))));
                    arr_34 [i_0] [i_0] [i_0] = (arr_6 [i_11] [i_11] [i_11]);
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_42 [i_14] [i_13] [i_13 - 1] [i_12] [i_11] [i_13] [i_0] = (((-8359648265292005164 & 24023) ^ ((-(arr_30 [i_14] [i_12] [i_11] [i_0])))));
                                var_34 = (((arr_31 [i_0] [i_11] [i_12] [i_11]) <= ((var_8 << (var_9 + 1524744536)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = (max(var_35, var_8));
    var_36 = ((var_5 << (var_4 - 65)));
    var_37 ^= ((-var_5 ? var_7 : (((var_5 | var_6) | var_4))));
    #pragma endscop
}
