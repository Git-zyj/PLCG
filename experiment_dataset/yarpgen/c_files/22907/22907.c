/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = var_16;
                                arr_14 [10] [10] [i_2] [i_2] [12] [i_2] [i_2] = (((16398031083196800846 % var_10) / var_16));
                            }
                        }
                    }
                }
                arr_15 [1] = ((2048712990512750789 - (~2048712990512750780)));
                arr_16 [i_0] [8] [1] = var_13;
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_18 = var_5;
        var_19 = ((((min(var_4, -202))) != var_8));
    }
    #pragma endscop
}
