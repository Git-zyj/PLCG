/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_1 / var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_2] [i_1 - 1] [i_0] = var_3;
                            var_11 = (arr_7 [i_0] [i_1] [16] [i_3]);
                        }
                    }
                }
                arr_11 [i_0] = (arr_1 [i_1]);
            }
        }
    }
    #pragma endscop
}
