/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((min(((max(var_3, var_3))), (max(var_8, var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_2] [12] [i_3] [i_1] [i_3] = (max(var_13, var_0));
                                arr_16 [i_4] [i_1] [i_3 + 1] [i_3] [i_2] [i_1] [i_0] = (((min(var_0, var_3))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [i_1] [i_0] [i_1] [i_0] [i_0] = var_4;
                        arr_20 [i_0] [i_1] [i_1] [i_0] = (max(var_10, var_4));
                    }
                }
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
