/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2349122932;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_2] [18] [i_2] [i_0] = var_14;
                                arr_16 [i_0] [i_0] [i_2] [i_3] [18] &= (((var_4 ? (arr_3 [i_4 - 1] [i_4 - 1]) : (arr_6 [i_2] [i_3] [i_4 + 1] [i_4]))));
                            }
                        }
                    }
                }
                arr_17 [3] [3] = ((max(var_2, (234 ^ var_7))));
            }
        }
    }
    #pragma endscop
}
