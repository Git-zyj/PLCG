/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (arr_2 [i_0]);
                arr_7 [i_0] [i_0] [i_1] = (arr_3 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, (arr_11 [i_2] [i_3] [3])));
                                var_22 = (arr_14 [i_2] [i_3] [i_4] [i_5]);
                            }
                        }
                    }
                }
                arr_20 [i_2] [i_3] [i_3 - 3] = (arr_9 [i_2] [i_3 - 3]);
                var_23 ^= arr_12 [i_2] [i_3];
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_26 [i_2] [i_2] = arr_22 [i_2];

                            for (int i_9 = 1; i_9 < 15;i_9 += 1)
                            {
                                arr_29 [i_9] [i_9] = (arr_25 [13] [i_3] [7] [15]);
                                arr_30 [16] [i_3] [i_3] [i_9] [i_8] [i_9] [i_9] = (arr_21 [i_2] [i_3 - 2] [8]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_42 [i_10] [i_11] [i_12] [i_14] = (arr_28 [i_10]);
                                var_24 = (max(var_24, 2230497728));
                                var_25 = (arr_10 [i_14]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        {
                            arr_48 [4] [4] [11] = arr_24 [i_16] [i_15] [i_11] [i_10];
                            var_26 = (arr_15 [i_11] [i_10]);
                            arr_49 [9] [i_11] [i_15] [i_16] = (arr_8 [i_11] [i_16]);
                            arr_50 [i_16] [i_11] = (arr_18 [i_10] [5] [i_15] [i_16] [i_16]);
                            arr_51 [i_10] [i_10] [i_10] [8] [i_15] [i_16] = 3841528974;
                        }
                    }
                }
            }
        }
    }
    var_27 = var_5;
    #pragma endscop
}
