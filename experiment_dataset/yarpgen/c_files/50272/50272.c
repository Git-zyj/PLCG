/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((max(var_8, ((max(1413323584, var_5))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_2] [i_1] [i_0] = ((min(-1580250373, (arr_0 [i_0] [i_4 - 1]))));
                                arr_18 [i_0] [i_1] [i_1] [i_1] [3] [i_1 + 1] [i_1] = ((((~(var_2 & 2147483647))) & var_10));
                            }
                        }
                    }
                    var_13 = (((-81 ? var_6 : var_0)));
                }
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
