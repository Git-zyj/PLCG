/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (37604 | -622191628912933520);
                arr_5 [i_0] = (max((arr_4 [i_0] [i_0]), var_1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [7] = -1272643287;
                            arr_13 [i_0] [6] [i_0] [i_3] [i_2] [i_1] = -622191628912933523;

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_18 = (min(var_18, ((((!var_13) ? ((~(arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]))) : var_5)))));
                                arr_17 [i_1 + 2] [i_1] [i_0] [i_3] = arr_10 [i_4] [i_0] [i_0] [i_0];
                                arr_18 [i_0] [i_0] [i_2] [i_3] [i_4] = (((var_2 & (arr_0 [i_4] [i_0]))) ^ ((((arr_10 [i_1 + 2] [2] [i_0] [i_4]) ? (min(622191628912933520, 0)) : (min(var_13, var_8))))));
                                var_19 += ((4261412864 ? -622191628912933520 : -26));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                arr_22 [0] [i_0] [7] [0] [i_5] = var_0;
                                var_20 = ((((max((arr_9 [i_0] [i_2] [i_2] [i_5]), (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_9 [i_0] [i_1 + 1] [i_3] [i_5]) | 16907510082756333001)) : (arr_9 [i_5] [i_3] [i_1 - 1] [i_0])));
                            }
                        }
                    }
                }
                arr_23 [i_0] [6] [i_1 + 2] = ((((-622191628912933520 ? (arr_1 [i_0]) : -4753743864868630875)) ^ ((((arr_1 [i_0]) ^ (arr_1 [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            {
                arr_29 [i_6] = (arr_27 [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                arr_30 [i_6] = ((622191628912933520 ? var_14 : var_13));
                arr_31 [i_6] = (arr_28 [i_6] [i_6] [i_6]);
            }
        }
    }
    #pragma endscop
}
