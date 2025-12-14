/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [6] [i_1] [i_2 + 1] [i_3] [6] |= ((!(arr_7 [i_0] [i_1] [i_0] [i_2 - 1])));
                        var_16 -= var_0;
                        var_17 &= (~6);
                    }
                }
            }
        }
        var_18 = (max(var_18, -1));
        var_19 = (min(var_19, ((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) - var_12)))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_20 = (((((arr_11 [24]) ? -8 : var_2)) / ((min(-716302709, (min((arr_12 [i_4]), 1746365566)))))));
        var_21 = (((((-(arr_12 [i_4])))) ? ((-1 * (arr_11 [i_4]))) : (arr_12 [i_4])));
    }

    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        arr_16 [i_5] = var_2;
        var_22 = (max(var_22, (((-(arr_14 [i_5 - 1]))))));
        var_23 = (max(var_23, (((((1964514401 ? (min(9223372036854775808, -1)) : (arr_6 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 2])))) ? (((arr_14 [i_5 + 1]) ? (0 + var_13) : var_7)) : var_3))));
        arr_17 [i_5] = (arr_4 [i_5] [14]);
        var_24 = (~29);
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 19;i_6 += 1)
    {
        var_25 = (max(var_25, ((((arr_8 [i_6 - 1] [i_6] [i_6] [i_6]) ? (arr_11 [i_6]) : (arr_6 [i_6 + 1] [i_6 - 4] [i_6] [i_6]))))));

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_24 [i_7] [i_7] = (arr_3 [i_6 + 1] [i_6 + 2]);
            var_26 ^= (arr_22 [i_6 + 1]);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_31 [i_7] = (arr_3 [i_8] [i_7]);
                        arr_32 [i_6 - 1] [i_7] [i_7] [5] = 65535;

                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            arr_35 [11] [i_9] [i_7] [i_7] [2] = ((arr_18 [5]) ? (0 - 250) : (((!(arr_28 [i_10])))));
                            var_27 = ((var_4 ? var_12 : 0));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_28 -= (((arr_25 [1] [1]) ? (arr_11 [i_6 - 1]) : (arr_5 [i_6 + 2] [0] [i_11])));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_29 = (min(var_29, ((((arr_11 [i_6 + 1]) + (arr_25 [i_13] [i_13]))))));
                            arr_47 [i_6] [i_6 - 1] [i_12] = ((2287071457674766539 ? (arr_30 [i_6] [i_11] [i_12] [i_13] [i_14 + 3]) : 13367308574475683224));
                            var_30 = (max(var_30, (arr_45 [16] [16] [i_11] [i_11] [i_14 + 3])));
                            var_31 = (max(var_31, (arr_5 [i_11] [i_11] [i_11])));
                            var_32 = ((((((arr_21 [i_12]) ? var_0 : var_1))) ? ((153 ? (arr_13 [i_11]) : (arr_2 [i_12]))) : var_1));
                        }
                    }
                }
            }
            var_33 = (((((arr_29 [i_6] [i_6] [i_6]) + (arr_20 [i_6]))) >= ((((arr_18 [i_6]) >= (arr_29 [i_6 + 1] [i_6 + 1] [1]))))));
        }
        arr_48 [i_6 - 1] [12] &= (((arr_28 [i_6 - 4]) ? var_12 : (arr_21 [i_6 + 1])));
        arr_49 [19] [19] = (-(arr_41 [i_6 - 2] [i_6 + 1] [i_6 + 2]));
    }
    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        var_34 &= var_14;
        var_35 = (min(var_35, (((5079435499233868403 ? 15 : 62654)))));
    }
    #pragma endscop
}
