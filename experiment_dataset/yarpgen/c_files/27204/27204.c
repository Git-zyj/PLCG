/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 + 1] [0] [i_3] [i_4] = (((((arr_1 [i_1 + 1]) ? (arr_1 [i_3]) : (arr_1 [i_2]))) & ((min(var_13, 12095001344303838062)))));
                                arr_15 [i_1 + 1] [i_0] = 1;
                            }
                        }
                    }
                }
                var_14 = (var_7 | (((arr_8 [i_0] [i_1 + 1]) ? (arr_8 [i_0] [i_1 + 1]) : (arr_8 [i_0] [9]))));
            }
        }
    }
    var_15 = var_11;
    #pragma endscop
}
