/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (arr_4 [i_3] [i_4])));
                                arr_17 [13] [i_0] [i_2 - 1] [i_2] = (((arr_3 [20]) << (((2471933157147587535 > (var_9 - var_5))))));
                                var_18 = var_13;
                                var_19 = (((arr_13 [i_0] [i_1 - 1] [9] [i_1] [1] [i_2 + 1] [i_2 - 1]) > (((((arr_15 [i_0] [i_1 - 1] [i_2] [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 1]) > (arr_13 [i_1] [i_1 - 1] [8] [8] [i_1] [i_2 + 1] [i_2 - 1])))))));
                            }
                        }
                    }
                    arr_18 [i_0] = (((((arr_16 [i_1 + 1] [i_2] [1] [18] [i_2] [i_2 - 1]) / (arr_16 [i_1 - 1] [i_2] [i_2] [i_2] [i_1 - 1] [i_2 + 1]))) - (((arr_6 [i_0] [i_0]) ? ((1426857404 ? var_8 : 146)) : ((((arr_8 [i_0] [i_0] [i_0] [i_0]) / var_0)))))));
                }
            }
        }
    }
    var_20 = (max(var_20, var_5));
    #pragma endscop
}
