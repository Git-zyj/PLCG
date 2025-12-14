/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [6] [i_1] [9] = var_5;
                            arr_12 [i_0] = var_13;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_23 [i_0 - 1] = var_5;
                                var_15 = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_14;
    var_17 = var_4;
    var_18 = (min(var_18, 3968));
    #pragma endscop
}
