/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 += max(((var_1 ^ (arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1]))), ((var_10 ? 1331686588 : (arr_1 [i_1 + 1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 |= ((arr_6 [2]) & (((max(var_4, -6945)))));
                                var_15 -= ((246 ^ (((((var_10 ? (arr_0 [i_2]) : var_0)) != (arr_4 [i_0] [i_0] [i_0]))))));
                                arr_11 [i_0] [i_0] [i_1] [i_4] [i_3] [i_4] = var_5;
                            }
                        }
                    }
                }
                var_16 = (((~1331686604) ^ ((max(var_2, var_6)))));
                arr_12 [i_0] [i_0] [i_1] &= var_8;
            }
        }
    }
    var_17 = (min(var_17, 15));
    #pragma endscop
}
