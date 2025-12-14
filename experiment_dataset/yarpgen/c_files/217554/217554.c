/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = -70;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [7] [i_2] [i_1] [11] = var_15;
                    arr_11 [i_0] = (!(((2113503143 ? -2113503143 : -1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = ((~((-(max(-20258, (arr_13 [i_0] [10] [5] [i_0] [i_0])))))));
                                var_19 = var_11;
                                arr_18 [i_0] [i_2] [i_2] &= (max(2113503143, ((var_1 ? (max(var_8, var_7)) : (!-2113503144)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
