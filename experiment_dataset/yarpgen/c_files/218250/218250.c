/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((-((18446744073709551615 ? (arr_1 [i_2]) : var_7))));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_21 += (arr_3 [i_0]);

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_22 = (max(var_22, (arr_15 [i_4] [i_3] [i_2 - 1] [i_2 - 2] [i_4])));
                            var_23 &= (!1);
                        }
                        var_24 |= (((arr_14 [i_3 - 2] [i_3] [i_1] [i_3 + 1] [i_3 + 3]) ? (arr_14 [i_3] [i_3] [i_3] [i_3] [i_3 + 1]) : (arr_14 [i_3] [i_3 - 1] [i_1] [i_3] [i_3 + 1])));
                        var_25 += ((var_11 > (arr_14 [i_0] [4] [i_0] [i_3] [i_2])));
                    }
                    var_26 *= (((arr_8 [i_0] [7] [i_2 - 1]) ? var_11 : (arr_8 [i_0] [i_1 - 2] [i_2 - 2])));
                    var_27 = ((-1 ? var_0 : var_1));
                }
            }
        }
        var_28 = (((arr_0 [i_0] [i_0]) || var_2));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_18 [7] [7] &= (max(200, ((max(1, -2140424106)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    var_29 += 32768;
                    var_30 = (min(var_30, 1));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_31 = (min(var_31, var_8));
                                var_32 = (max(var_32, var_13));
                                var_33 ^= (arr_19 [1] [i_7]);
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_34 ^= ((!(((9179 ? (max(255, 0)) : (((var_18 ? var_5 : var_5))))))));
                        arr_32 [i_5] [i_5] [i_7] [i_6] [i_7] [i_10] = (arr_25 [i_10] [i_5] [i_7] [i_10] [i_7] [i_7]);
                        var_35 += (((var_11 - (((var_4 ? var_17 : var_2))))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_38 [i_5] [i_7] [i_7 + 2] [i_7 + 3] [i_11] [i_5] = (min(var_19, var_14));
                                var_36 = ((255 ? ((((var_13 != (arr_35 [i_7]))))) : (arr_35 [i_7])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_37 *= var_10;
    var_38 += -1;
    var_39 = var_9;
    #pragma endscop
}
