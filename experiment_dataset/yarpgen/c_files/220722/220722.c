/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = (var_9 / 1830788582403382202);
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] [6] = (((arr_6 [i_0] [i_2] [i_2]) & (max((arr_2 [i_0 + 1] [i_1]), -1830788582403382203))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [11] [i_2] = (max((((max(-1830788582403382203, -1830788582403382202)) / (arr_2 [i_4] [i_1]))), (~-893252428)));
                                arr_15 [i_2] [i_1] [i_0] [i_3] [i_4] [i_2] = (max((arr_0 [i_0 - 2] [i_0]), (((arr_3 [i_0 - 3]) ? (arr_1 [i_0]) : var_5))));
                                arr_16 [i_0] [4] = (1830788582403382203 > 1830788582403382202);
                                arr_17 [i_2] [14] = 57718;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_15 * (max(-120, 3081844726))));
    #pragma endscop
}
