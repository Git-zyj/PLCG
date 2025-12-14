/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((((12319 ? 2852292866 : var_8)) ^ (~var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = var_13;
                                var_19 = (max(var_19, var_8));
                                var_20 = (min(var_20, ((min(var_8, (((((25 >= (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [1])))) << ((((1488976164 ? var_5 : 1488976164)) - 4753304429890477741)))))))));
                            }
                        }
                    }
                    var_21 = (max(var_21, (!var_13)));
                }
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
