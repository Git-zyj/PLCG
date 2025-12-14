/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, 1));
                                arr_13 [2] [1] [1] [1] [0] [16] [2] = (140 ? (min((arr_4 [i_0] [i_0]), (arr_10 [i_0] [i_4 + 1] [i_3] [i_3] [i_2]))) : (arr_10 [i_3] [i_3] [i_2] [i_4 + 1] [i_4 - 1]));
                                arr_14 [i_0] [i_4] [i_0] [i_0] [i_4] = ((var_2 ? (var_0 - var_0) : (((((arr_7 [i_1] [18]) <= 2564021968)) ? -202967201008591251 : (~var_7)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 = ((var_8 ? (((max(var_9, (arr_5 [i_6] [i_6] [i_6]))))) : ((3209380790 * (((arr_16 [i_0] [i_1] [i_2] [i_5] [i_6]) ? (arr_6 [i_6] [i_2] [i_0] [i_0]) : var_5))))));
                                var_16 = (((((17322 ? -7924 : 116))) ? 5878972307914410438 : -93));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_7;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                {
                    arr_27 [i_7] [7] [i_7] = var_3;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_18 = (arr_15 [i_7] [i_8 + 1] [i_8] [i_11] [i_10] [i_8]);
                                var_19 += (((((var_8 ? -679727307 : (arr_31 [i_7] [i_9] [i_9] [i_9])))) ^ (arr_6 [i_7] [9] [11] [11])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, var_10));
    var_21 = (min(3209380791, -429820400));
    #pragma endscop
}
