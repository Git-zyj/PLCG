/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [8] [8] [i_3] [i_2 - 2] [8] [8] = max(((max((arr_9 [i_2 + 1] [i_2 + 1] [i_4 - 1] [i_4 + 2] [i_4 - 1]), (arr_9 [i_2 - 3] [i_2 - 1] [i_4 - 1] [i_4 + 1] [1])))), (((arr_3 [i_4 + 1] [i_4 + 1]) ? (arr_3 [i_2 - 3] [1]) : var_1)));
                                var_17 = (-(max((arr_11 [i_2 - 3] [5] [i_3] [i_3] [i_4 + 1]), (arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]))));
                                var_18 = (min((arr_5 [2] [2] [i_2 - 1]), (arr_5 [2] [2] [i_2 - 1])));
                                arr_13 [i_3] [i_1] [i_4 + 1] = (arr_10 [i_3] [i_4 + 1] [i_3] [i_3] [4]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_16 [i_5] [22] [i_0] [i_0] = (arr_3 [i_5] [i_1]);
                    arr_17 [i_0] [i_5] = arr_4 [i_1];
                    var_19 |= (-(((~var_3) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_14 [i_0]))));
                }
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
