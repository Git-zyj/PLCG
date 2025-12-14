/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_11 = (min((((arr_9 [i_4 + 1] [i_1] [i_1] [10]) + var_9)), (((+(max((arr_8 [i_0] [i_0] [4] [6] [i_0] [18]), 12014)))))));
                                var_12 = var_7;
                            }
                        }
                    }
                }
                arr_10 [12] [i_1] [1] = (-12378782735350579247 || 120);
            }
        }
    }
    var_13 = var_3;
    #pragma endscop
}
