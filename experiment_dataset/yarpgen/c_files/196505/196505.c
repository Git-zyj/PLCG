/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_10 - var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (!9049977493691330662);
                                var_18 += (-10309 / 1);
                            }
                        }
                    }
                }
                var_19 ^= (arr_12 [19] [i_0] [23] [i_0] [6] [1] [i_1 + 4]);
            }
        }
    }
    #pragma endscop
}
