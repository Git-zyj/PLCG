/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_1] [i_1] [0] [i_3 + 4] [1] = 206;
                                arr_17 [i_2] [i_2] [i_3] [9] = (~220);
                                arr_18 [0] [i_1] [i_1] [i_2] [i_3] [i_2] = var_1;
                            }
                        }
                    }
                    arr_19 [16] [16] [i_2] [i_2] = (!((!(!var_6))));
                }
            }
        }
    }
    var_19 = -70815040399984994;
    #pragma endscop
}
