/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] = (arr_2 [i_1]);
                    var_13 ^= (arr_0 [i_0]);
                    var_14 = arr_4 [i_0] [i_1] [i_2];
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_15 ^= (arr_9 [i_3] [i_3] [i_3] [i_3]);

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_16 = (arr_10 [1] [1]);
                        var_17 = (arr_12 [i_0] [i_4] [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_18 = (arr_11 [i_0] [i_0] [i_0] [i_3] [i_3] [i_5]);
                        var_19 -= (arr_13 [1] [1] [i_3] [i_3] [i_5]);
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_20 = (arr_17 [i_0] [i_6]);
                        arr_21 [i_6] [i_3] [i_1] [i_0] [i_0] = (arr_16 [3] [i_1] [i_3] [i_6] [i_6] [i_0]);
                        var_21 = (arr_18 [i_6 - 2] [i_3] [i_1] [i_1] [i_0]);
                        var_22 *= (arr_3 [i_3] [i_0]);
                        var_23 *= (arr_12 [1] [i_1] [i_3]);
                    }
                }
                var_24 = (min(var_24, (arr_0 [i_1])));

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_25 ^= (arr_1 [i_7] [i_1]);
                    arr_24 [i_0] [i_7] = (arr_0 [i_0]);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_26 ^= (arr_11 [i_0] [i_0] [i_8] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_33 [1] [i_1] [i_8] [i_9] [i_0] [i_8] [0] = (arr_28 [i_0] [i_1] [i_8]);
                                var_27 = (arr_4 [i_0] [i_0] [11]);
                            }
                        }
                    }
                    var_28 = (arr_2 [5]);
                }
            }
        }
    }
    var_29 = var_2;
    #pragma endscop
}
