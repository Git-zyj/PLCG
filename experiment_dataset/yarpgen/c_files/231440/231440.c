/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (arr_15 [10] [i_1] [4]);
                                arr_16 [i_0 + 1] [i_0] [i_0] [i_1] [i_0] = (arr_9 [i_4] [i_2] [i_0]);
                            }
                        }
                    }
                }
                var_12 = (((var_7 ? var_1 : 1616022686)));
                var_13 = -30334;
            }
        }
    }
    var_14 -= var_4;
    #pragma endscop
}
