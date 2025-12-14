/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_2 - 2] [i_3] = -758862690;
                            var_10 = 1;
                            arr_11 [i_0] = 1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_4] [i_5] [i_6] = ((min(-17, 12267289887809802196)) != (((((41994464 && 9372272889462035333) == -43)))));
                                arr_21 [i_0] = ((-(((var_3 && (var_8 + var_7))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_32 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_7 - 1] [i_0 + 2] [i_7 - 1] [i_0] = (max((((!((max(var_7, 3498701481)))))), 43));
                                arr_33 [i_8] [i_8] [i_8] [i_8] [i_0] [i_0] [i_8] = 9372272889462035328;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 17;i_14 += 1)
                        {
                            {
                                arr_50 [i_10] [i_10] [i_11 - 1] [i_10] [i_12] [i_13] [i_10] = (max((-var_4 + var_9), (2846528644865557497 && var_2)));
                                var_11 = (max((((((min(1, var_4))) % 163))), var_5));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            {
                                arr_57 [i_10] [i_10] [i_12 + 3] [i_15] [i_16] = ((~(var_7 & var_3)));
                                arr_58 [i_10] [i_11] [i_12] [i_15] [i_10] [i_10] = 5807712191531757938;
                                var_12 = var_8;
                                arr_59 [i_10] [i_10] [i_10 + 1] [i_10] = (max(8381091568291104166, 53));
                                arr_60 [i_10] [i_10] [i_10] = (((((var_8 >= 9074471184247516270) & (max(1, var_9)))) != 8733789614573319976));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
