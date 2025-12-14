/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 9223090561878065152;
                arr_5 [i_1] [i_0] [i_0] = (1 / ((min(31, 9223372036854775807))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_0] [i_2] = 1;
                    arr_10 [i_0] = ((min(var_5, 120)));
                    arr_11 [8] [i_0] [0] |= -1353961761054526734;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_16 [i_0 - 2] [i_0 - 2] [i_2] [i_0] = (((arr_2 [i_0]) > ((var_13 ? var_6 : var_2))));

                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            arr_21 [12] [i_1] [12] [i_3] [i_0] [i_1] = (((arr_14 [i_0] [i_0] [i_0 - 2] [i_4 + 1] [i_4 + 1]) > 8356803261000208658));
                            var_15 = var_13;
                            var_16 *= (((arr_17 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4]) > var_0));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_24 [i_0] [12] [12] [i_2] [i_0] [13] [i_5] = ((arr_7 [i_0] [i_0 - 1] [i_2]) ? var_10 : 3549309701883212642);
                            arr_25 [i_0] [i_1] [i_2] [i_0] [i_2] = ((15713 >> (((arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]) - 3825112241))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_29 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_6] [i_3] [i_0 + 2]);
                            var_17 *= (arr_6 [i_2] [i_1] [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_0] [i_3] = (arr_14 [i_0] [i_1] [i_2] [i_0 + 2] [i_0 + 2]);
                            var_18 ^= (((arr_7 [i_0] [i_0] [i_0 + 2]) ? (arr_8 [i_0 - 1] [i_0] [i_0]) : (arr_2 [i_0 - 2])));
                            arr_33 [i_0] [11] [i_2] [i_0] [i_0] [i_0] = (((arr_8 [i_1] [1] [i_1]) ? (((10 ? var_10 : var_6))) : var_1));
                        }
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_19 = ((-12 ? var_6 : ((((-111 + 2147483647) << (15 - 15))))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_20 = 1;
                            var_21 = var_4;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_22 = (max(var_22, (((!((min((max(var_7, 1346739196)), (((-14 ? var_7 : 1)))))))))));
                            var_23 = (max(var_23, ((min(1460391663, 39)))));
                            var_24 = (min(-56, ((128 ? 23 : -16))));
                            var_25 = ((~(max(527699215, (arr_23 [i_2] [i_8] [i_0 + 2] [i_8] [i_10] [i_1] [i_0 + 2])))));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_26 = var_12;
                            var_27 = (min(var_27, ((max((((-((var_4 ? (arr_19 [i_0] [i_0] [i_0 - 2]) : var_4))))), (((1 < 3) ? var_4 : 10739492170309660794)))))));
                            arr_44 [i_1] [i_11] [i_2] [i_8] [i_2] [i_0] = 2;
                            var_28 = ((-var_1 & (((!12) ? var_4 : ((max(1, 0)))))));
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_29 = ((0 ? ((((var_4 & var_4) ? 3 : 536346624))) : -var_8));
                            arr_48 [i_0] = (max(var_0, (~0)));
                        }
                        arr_49 [i_0] [i_0] [i_2] [i_8] = ((((!(0 / 3))) ? ((((arr_13 [i_8] [1] [i_2] [0]) ? (0 | var_4) : var_8))) : ((var_8 / (var_5 <= var_3)))));
                        var_30 = ((((min((((var_6 ? (arr_14 [i_0] [i_0] [i_2] [0] [i_2]) : 1))), (-8394581844229475994 / 4095954150)))) < (5400330915824213680 / 14288096965007612076)));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_31 = (max(var_31, (((-(~var_0))))));
                        arr_52 [i_0] [4] [i_1] [i_13] [i_13] [i_0 - 2] = ((1 ? 127 : ((var_5 ? var_8 : ((((var_4 >= (-2147483647 - 1)))))))));
                        arr_53 [i_0] [7] [7] [i_0] = (max((arr_45 [i_13] [0] [i_0] [1] [i_0] [0] [i_0]), 0));
                        arr_54 [i_0] [i_0] [i_2] [i_13] = ((-((((max(5977580492582358304, var_3))) ? var_1 : ((-1 ? (arr_39 [3] [i_0] [i_2] [i_0] [i_13]) : var_12))))));
                    }
                    for (int i_14 = 4; i_14 < 12;i_14 += 1)
                    {
                        arr_57 [i_0] [i_1] [i_0] [0] = ((-(((var_3 ? var_2 : var_9)))));
                        arr_58 [i_0] [i_2] [i_0] = ((-(arr_26 [i_0] [11] [i_2] [i_14 + 1] [i_1])));
                        arr_59 [i_0] [i_2] [i_0] = ((min(34, 7)));
                    }
                    arr_60 [i_0] [i_1] [6] = ((0 ? var_9 : 0));
                }
            }
        }
    }
    var_32 = (var_4 + -48);
    #pragma endscop
}
