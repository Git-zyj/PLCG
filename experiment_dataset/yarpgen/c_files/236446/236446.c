/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 ^= (1 == 7987400398923851962);
        arr_3 [i_0] = (~1);
        arr_4 [i_0] = var_3;
    }
    var_12 &= var_5;

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = (65521 && -4895584791388984589);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] [i_4] = (min((arr_7 [i_4]), (~9223372036854775807)));
                                var_13 += (arr_1 [i_1] [0]);
                                arr_20 [i_3] = var_4;
                            }
                        }
                    }
                    var_14 = arr_5 [i_2] [i_2];
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_15 = (-9223372036854775807 - 1);

                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [5] = (arr_2 [i_1]);
                            var_16 = (((((arr_17 [i_6] [9] [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9]) & var_1)) >> ((14 | (!var_9)))));
                            var_17 = (-(((-1 + 2147483647) << (((arr_30 [i_1] [i_7]) - 90)))));
                            var_18 = ((!(arr_18 [i_7] [i_9 + 1] [i_9 + 1] [i_9] [i_9])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_35 [i_7] [i_6] [i_7] [i_8] = 9223372036854775807;
                            var_19 = (min(var_19, (arr_1 [i_1] [i_1])));
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            var_20 ^= var_8;
                            arr_40 [12] [i_1] &= 11599869316590326367;
                            var_21 = (max(var_21, 4895584791388984606));
                            var_22 = (arr_22 [i_1] [i_6] [1]);
                            var_23 = var_6;
                        }
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_24 += ((~(arr_9 [i_8])));
                            var_25 = (min(var_9, (arr_25 [1] [4] [i_7] [i_8])));
                        }
                        var_26 = (!var_5);
                    }
                }
            }
        }
    }
    #pragma endscop
}
