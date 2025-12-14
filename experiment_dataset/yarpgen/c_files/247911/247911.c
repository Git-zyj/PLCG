/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (arr_9 [i_3] [i_2] [i_1] [i_0])));
                            var_14 ^= ((((((min(63488, 63488))))) ? ((65 - (arr_2 [1]))) : (((arr_1 [i_1]) ? 2065 : var_8))));
                        }
                    }
                }
                var_15 = (max((((65 ? (arr_7 [i_0] [10] [i_1] [i_0]) : 65))), (((!(~2065))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_16 = 63510;
                                var_17 *= (((arr_15 [i_0] [i_1] [i_0] [i_0] [16] [i_1] [i_1]) == (arr_7 [i_0] [i_1] [i_4] [i_5])));
                                var_18 = (((arr_6 [i_0] [i_1]) ? (((var_7 & -64) ? (max((arr_16 [i_1] [i_6] [i_6]), 32767)) : var_9)) : (arr_5 [i_0] [18] [i_4])));
                                arr_18 [i_0] [i_6] = (arr_8 [i_0] [i_1] [i_6] [i_5] [i_6]);
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                arr_21 [i_5] [6] [i_1] [i_5] [6] [6] &= ((~((-(((!(arr_11 [i_7]))))))));
                                arr_22 [i_7] [i_1] [i_4] [i_5] [i_1] [i_1] = ((2065 << ((((arr_19 [i_0] [14] [14] [i_7]) == 2065)))));
                                arr_23 [11] [i_1] [2] [i_7] [i_1] = (((~var_0) ? (arr_6 [i_4] [10]) : (~17179869183)));
                            }

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                var_19 ^= (-75 ? (arr_25 [i_0] [i_0] [i_4] [i_5] [i_8] [i_8]) : (arr_13 [i_0] [i_1] [i_4] [i_5] [0]));
                                var_20 |= (arr_1 [i_4]);
                                var_21 ^= (((((65 ? (arr_4 [i_1] [1]) : (arr_8 [10] [i_1] [i_5] [i_5] [i_1])))) ? (arr_1 [i_0]) : (arr_14 [i_0] [i_4] [i_4] [i_4] [i_4])));
                                var_22 = ((23187 ? (arr_14 [i_0] [i_1] [12] [i_5] [i_8]) : (arr_16 [i_8] [i_8] [i_5])));
                            }
                            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                            {
                                arr_29 [i_9] [i_9] [i_5] [i_0] [i_0] [i_0] [i_0] = (max(2048, ((-((2065 ? 1 : 1815902234))))));
                                arr_30 [i_0] [i_1] [i_1] [i_1] [1] = ((((arr_12 [i_4] [i_4]) ? ((min(var_9, (arr_15 [i_0] [i_1] [i_1] [i_4] [i_1] [i_5] [i_4])))) : var_0)));
                            }
                            for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                            {
                                var_23 = ((((((-65 ? (arr_7 [i_0] [i_1] [1] [i_5]) : var_3))) ? (arr_13 [i_1] [i_1] [1] [i_5] [i_10]) : 1)));
                                var_24 *= ((((((arr_2 [i_10]) << (arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? ((max((arr_2 [i_4]), (arr_25 [i_10] [i_5] [i_4] [i_4] [i_0] [i_0])))) : (arr_2 [i_0])));
                            }
                            var_25 = 17179869183;
                            var_26 = ((var_4 ? var_6 : 1));
                            arr_33 [i_0] [i_0] = (((arr_12 [i_0] [i_4]) ? ((+(min((arr_4 [i_4] [1]), (arr_19 [i_0] [22] [i_4] [i_5]))))) : (((236 ? (~63501) : ((~(arr_13 [i_0] [6] [6] [i_4] [i_5]))))))));
                        }
                    }
                }
                arr_34 [i_1] [i_0] [i_0] = ((-23208 ? (arr_9 [5] [i_0] [i_0] [i_0]) : (((63490 + 2048) ? (arr_26 [i_1] [i_1] [i_1] [i_0] [i_0]) : (((arr_26 [i_0] [9] [i_1] [i_0] [i_1]) + (arr_28 [i_0] [11] [18])))))));
            }
        }
    }
    var_27 = var_3;

    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_28 = (((-7277845577685405472 % (arr_36 [3] [i_11]))));
        arr_38 [16] |= (((arr_36 [i_11] [i_11]) ? (arr_36 [i_11] [i_11]) : (arr_36 [i_11] [i_11])));
    }
    var_29 = (max(((((2048 ? 2027 : 0)) / var_11)), var_5));
    var_30 = ((var_5 >= (((!((((var_0 + 2147483647) << (var_8 - 1)))))))));
    #pragma endscop
}
