/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, var_3));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [1] [1] [i_2] [i_3 + 2] [i_4] = (!var_16);
                                arr_16 [1] [i_1] [11] [1] [i_1] [i_1] [i_1] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
