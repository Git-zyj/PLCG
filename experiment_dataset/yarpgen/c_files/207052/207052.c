/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_1);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 = (arr_1 [5]);

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0 + 2] [i_1] = ((!(!8384512)));

            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                var_15 = arr_0 [i_1];
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_16 *= (arr_6 [i_4]);
                            var_17 ^= (((var_4 + 2147483647) >> ((-(var_8 / var_3)))));
                            var_18 = (arr_4 [i_0]);
                            var_19 = -116;
                        }
                    }
                }
                var_20 = (arr_2 [11]);
            }
            var_21 = (arr_3 [i_1]);
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_22 = (min(var_22, (~var_1)));
        var_23 = ((!((max((arr_13 [i_5]), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [8]))))));
        var_24 = (min((arr_13 [i_5]), (arr_12 [i_5])));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_25 |= max((arr_14 [12]), (max((((arr_15 [i_6] [i_6]) % var_6)), (arr_16 [i_6]))));
        var_26 = var_9;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_27 = (max(var_27, var_3));
            var_28 = (arr_14 [i_6]);
            var_29 = (arr_15 [i_6] [i_6]);

            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                var_30 = (((arr_18 [i_6] [i_7] [22]) >> (3133015901054100154 - 3133015901054100137)));
                arr_21 [23] [23] [i_6] [i_8] = arr_16 [i_6];
                var_31 = arr_18 [i_6] [i_8 + 2] [i_6];
                var_32 |= (arr_14 [16]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_33 = (((arr_26 [i_8] [i_6]) / (arr_24 [i_7] [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8 + 2] [i_8 + 1])));
                            arr_28 [i_6] [i_6] [i_6] [i_6] [i_9] [i_10] = (i_6 % 2 == 0) ? (((((var_6 ? (arr_14 [i_6]) : (arr_14 [i_6]))) >> (((((arr_20 [i_6] [i_7]) ? (arr_18 [i_6] [i_6] [i_8]) : 0)) - 3078349628568713585))))) : (((((var_6 ? (arr_14 [i_6]) : (arr_14 [i_6]))) >> (((((((arr_20 [i_6] [i_7]) ? (arr_18 [i_6] [i_6] [i_8]) : 0)) - 3078349628568713585)) - 5420767569301398504)))));
                        }
                    }
                }
            }

            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_34 -= (arr_32 [i_6] [22] [i_11] [i_6]);
                    var_35 = var_1;
                    arr_34 [i_6] [7] [i_11] [i_11] = (((arr_32 [i_6] [i_6] [i_6] [i_6]) ? (arr_25 [23] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_31 [i_6] [i_11] [i_7] [i_6])));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_36 *= 1;
                            var_37 = var_3;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            {
                var_38 = 608239044;
                arr_43 [13] [i_16] [i_16] = ((!(arr_27 [6] [i_16] [6] [i_15] [i_16] [i_15])));
                arr_44 [i_16] [i_16] = (arr_35 [i_15] [i_15] [6] [i_15] [i_15]);
            }
        }
    }
    #pragma endscop
}
