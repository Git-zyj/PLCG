/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [6] [i_1] = var_16;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_3] = var_15;

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 13;i_4 += 1)
                            {
                                var_18 *= var_5;
                                arr_18 [i_0] [i_0] [i_2] [i_3] [i_4 - 1] [0] = var_2;
                                var_19 = (min(var_19, var_1));
                                arr_19 [i_0] [i_4] [i_2] [6] [i_4] [i_4] [i_4] &= var_4;
                            }
                            arr_20 [i_0 - 1] [i_0 - 1] [i_2] [i_0] [0] [i_3] = var_3;
                            arr_21 [4] [i_1] [i_2] [i_3] [i_2] = var_0;
                        }
                    }
                }
                var_20 = (min(var_20, var_15));
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
