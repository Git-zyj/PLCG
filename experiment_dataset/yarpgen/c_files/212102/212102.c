/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (((var_9 / var_1) / (var_2 * var_3)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, var_3));
                                arr_15 [i_0] [i_1] [i_0] [3] [i_4] = (1112180598 && 405788832);
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 *= ((((var_10 >> (var_1 - 995639539))) != var_10));
    #pragma endscop
}
