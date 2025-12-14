/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = var_8;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_22 ^= (((((arr_0 [i_0 - 1]) / (arr_0 [i_0 + 3]))) + (arr_0 [i_0 + 3])));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0 + 3] [i_0 + 1] = (((arr_0 [i_0]) > (arr_5 [i_0])));
            var_23 = (arr_4 [i_0] [4] [i_0]);
        }
        arr_7 [i_0] = (arr_3 [i_0 + 2] [i_0 - 1]);
        var_24 = (((((arr_3 [i_0] [i_0]) && (arr_0 [i_0 + 3]))) && (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                {
                    var_25 = (max(var_25, (arr_10 [i_3 - 2] [i_3 - 1])));
                    var_26 = (18446744073709551615 / 65527);
                }
            }
        }
        var_27 = (((arr_11 [i_2 + 3] [i_2 + 1] [9]) && (arr_11 [i_2 + 1] [i_2 + 3] [i_2])));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_28 = arr_21 [i_6 + 1] [i_5] [16] [i_5 - 1] [i_2 + 1] [1];
                            arr_25 [i_6] [i_5] [i_6] [i_5] [i_8] [20] = (arr_14 [i_2] [i_2 + 2] [1] [i_2]);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_29 = ((((arr_17 [i_2] [i_5] [i_6] [i_7]) | (arr_21 [16] [i_2] [16] [i_6 - 2] [i_7] [9]))));
                            arr_28 [i_2 + 2] [i_6] [i_6] [i_7] [i_9] = (((arr_21 [i_2] [i_5 + 1] [i_6] [i_5 + 1] [i_6] [i_6]) >= (arr_21 [i_2] [i_5] [i_6 - 2] [i_7] [i_2] [i_9])));
                            var_30 = (((((arr_16 [21] [i_6 - 1]) + 9223372036854775807)) << (((var_15 + 342459169) - 11))));
                            var_31 *= (-2147483647 - 1);
                        }
                        arr_29 [i_6] [i_5] [i_6] [i_6] = ((((var_4 + (arr_12 [i_2] [i_5] [i_6 - 1] [i_5]))) + (((arr_22 [i_2] [9] [i_6] [i_7] [i_6]) + var_6))));
                        arr_30 [i_2] [i_6] [i_2 + 1] [i_2] [i_2] = (((arr_22 [i_2 + 3] [i_2] [i_2] [i_2 + 3] [i_2]) >> (((arr_9 [i_2 + 1]) - 7901))));
                        var_32 *= (((arr_23 [i_7] [i_7] [i_6 - 1] [i_5 + 1] [i_2 + 2]) && (arr_13 [i_2] [i_5] [i_6 - 1])));
                    }
                }
            }
        }
        arr_31 [i_2] |= (((arr_26 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 2]) && (arr_26 [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 2] [5] [i_2 + 2])));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {

                    for (int i_12 = 3; i_12 < 21;i_12 += 1)
                    {
                        arr_42 [i_2] [i_2] [i_11] [15] [i_2] [i_12] = (((arr_35 [i_2 + 1]) ^ (arr_26 [i_10] [24] [i_12] [i_12 - 3] [4] [i_12] [i_12 - 1])));
                        var_33 = (arr_15 [i_2]);
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 23;i_14 += 1)
                        {
                            {
                                arr_47 [i_14] [i_10] = arr_22 [i_2] [i_2 + 1] [i_2 + 1] [14] [i_11];
                                var_34 = (min(var_34, (arr_32 [i_2 - 1])));
                                var_35 = (arr_46 [i_14] [i_14] [i_11] [i_10] [i_14] [i_2]);
                                var_36 -= (arr_46 [16] [i_11] [i_14] [i_14 + 2] [i_11] [i_14 - 1]);
                            }
                        }
                    }
                    arr_48 [i_10] = (((arr_10 [i_2 + 3] [i_10]) >> (((arr_10 [i_2 + 2] [i_2]) - 5653664586872492809))));
                    var_37 = (max(var_37, (888476627 / -6330828881062305015)));
                }
            }
        }
    }
    #pragma endscop
}
