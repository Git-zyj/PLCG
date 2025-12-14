/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 1]))))));
                                arr_16 [14] [i_1 - 1] [i_1 - 1] [10] [i_1] = (((((arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? (arr_8 [i_0] [i_1 - 1]) : (arr_6 [1] [i_1]))) - var_13));
                                var_16 += (arr_7 [i_3] [i_2] [6]);
                                var_17 = (max(var_17, var_2));
                            }
                        }
                    }
                }
                var_18 ^= (arr_11 [i_0]);
                var_19 = var_4;
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
