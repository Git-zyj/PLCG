/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_1] = (max(((-((18389867866860654475 ? var_6 : var_0)))), ((((arr_2 [i_0] [i_1]) == (arr_0 [i_0 - 1] [i_1 + 2]))))));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_3] [6] [i_2] [i_3] &= (((arr_9 [i_0] [13] [5] [0] [i_2] [i_3 - 1]) ? (arr_9 [i_0 + 1] [i_1 - 1] [i_2] [i_2] [i_2] [i_0]) : 29));
                        var_14 *= (((arr_4 [i_0] [4] [i_2]) ? 23 : (arr_5 [i_1 - 1] [i_3] [i_1] [i_1])));

                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            var_15 = var_4;
                            var_16 = (max(var_16, (arr_4 [i_4] [i_3] [i_2])));
                            arr_16 [i_1] [i_1] [i_3] [i_4] = (-8232252273588942381 / 1);
                            var_17 = (((arr_15 [11] [i_1] [i_2] [i_2] [1] [i_4 - 1] [10]) * 82));
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_18 = 0;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_19 = ((~(arr_17 [i_5] [7])));
            arr_21 [1] [i_6] = 469492995;
        }
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            var_20 = (min(var_20, ((min((arr_20 [i_7] [i_7]), (arr_19 [i_5] [i_5]))))));
            var_21 = (min((((((var_4 ? 200 : -1974234727)) == (arr_18 [i_7 + 1] [i_7 - 1])))), (((var_7 > 2199023255520) ? (min(1, 9223372036854775807)) : (((32767 ? (arr_19 [i_5] [i_7]) : 469492995)))))));
            var_22 = ((((236 <= (arr_17 [i_7 + 1] [i_7 + 2])))));
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            var_23 = (((arr_26 [i_5] [i_5]) & 194327712));
            arr_27 [2] [i_8 + 2] = (((((-8472370377008946370 ? 1013004118608819956 : 16100429005490372714))) ? -46 : ((-52 ? 1744746257 : 1))));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    {
                        arr_33 [i_5] [i_8] [i_8] [i_10] = (arr_31 [i_5] [i_5] [i_9 - 1] [i_5] [i_10]);
                        var_24 &= (((arr_26 [1] [i_8]) & (arr_26 [i_9] [i_10])));
                        var_25 = ((194327712 > ((2025589051 >> (((arr_24 [9] [i_8]) - 6488386750317993535))))));
                    }
                }
            }
            arr_34 [i_5] [i_5] = 10542035499978330404;
        }
        var_26 = (max(var_0, var_13));
    }
    #pragma endscop
}
