/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_18 = (((((((!(arr_11 [i_0] [i_0] [i_0 - 1] [1]))) ? (arr_14 [i_0] [i_4 + 1] [i_2] [i_0 - 1] [i_4 + 1] [i_1] [i_0]) : (min((arr_12 [5] [i_2] [0] [i_0 - 1]), 1))))) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 1));
                                arr_15 [i_4] [1] [i_2] [i_0] [i_4] = var_6;
                            }
                        }
                    }
                    var_19 = 1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_26 [i_5] [i_5] [i_7] [1] [i_8] = (((arr_14 [i_5] [1] [i_7] [i_6] [i_6] [i_6] [i_5]) == (((((min(1, (arr_2 [i_5]))))) % (arr_9 [i_5] [i_7] [i_7])))));
                            var_20 = (max(var_20, (!var_2)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            {
                                arr_37 [i_5] [i_6] [i_9] [i_11] [i_10 - 2] [i_10] [i_11 + 1] = (arr_2 [i_5]);
                                arr_38 [i_11 + 1] [i_11] [i_5] [i_11] [i_5] = (((arr_21 [i_5 + 1] [i_10 + 2] [i_10 - 2]) && var_3));
                                var_21 = 1;
                            }
                        }
                    }
                    arr_39 [4] [i_5] [i_5] = var_13;
                }
            }
        }
    }
    #pragma endscop
}
