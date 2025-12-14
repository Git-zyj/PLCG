/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (arr_1 [i_0]);
                var_14 = 17256769031637297109;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = ((-25 * ((23829 ? (arr_0 [i_2 - 1]) : -10))));
                                arr_13 [i_0] [2] [i_1] [i_3] [i_2] = var_3;
                            }
                        }
                    }
                }
                arr_14 [i_0] [4] [i_1] = ((~((max(50722, var_0)))));
            }
        }
    }
    #pragma endscop
}
