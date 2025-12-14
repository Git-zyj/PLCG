/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 ^= (arr_14 [i_2 + 1] [6] [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1]);
                                var_15 = (min(var_15, (((+(min((arr_13 [i_0] [8] [i_2] [i_3] [i_3] [i_2 + 1] [i_0]), (~1))))))));
                            }
                        }
                    }
                }
                var_16 = -1;
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_17 = var_8;
                                var_18 += (max((max((1782033682393541499 != 1), (arr_2 [i_0]))), (((-(((arr_19 [i_7] [i_6 - 1] [i_0] [i_0] [1] [1]) ? 1 : (arr_14 [4] [i_1] [i_1] [i_6] [i_0] [i_7]))))))));
                            }
                        }
                    }
                }
                var_19 = (var_7 && 1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((((arr_35 [i_11] [i_11 + 1] [i_11 + 3] [13] [i_11 - 1] [i_10]) ? (arr_32 [i_8] [i_8] [i_8] [9]) : (var_10 + 54439)))) ? (((arr_35 [i_9] [i_11 + 3] [i_9] [i_9] [8] [i_10]) + (1 + var_6))) : 33)))));
                                var_21 = (max(var_21, 33));
                            }
                        }
                    }
                }
                var_22 = (-1084556184 + 0);
            }
        }
    }
    #pragma endscop
}
