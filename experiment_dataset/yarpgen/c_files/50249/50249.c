/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_8, var_6));
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (max((min(var_12, var_15)), var_8));
        var_19 = (max(9530329369881101959, 15820));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 = (min(((min((min(var_7, var_13)), var_13))), (max(var_6, var_2))));
        arr_6 [i_1] [i_1] = (min(var_13, (min(var_16, var_5))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_11 [i_3] [i_2] [i_2] [i_1] = (max((min(var_10, var_2)), (min(15826, var_1))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] [i_2] [i_4] [i_4] [i_1] = max((max(var_9, var_4)), (min((max(var_0, var_11)), var_0)));
                                arr_21 [i_4] [i_2] = (min((min(var_2, var_8)), var_6));
                                arr_22 [i_4] [3] [i_3] [i_2] [i_4] = var_0;
                                arr_23 [i_5] [i_4] [i_4] [i_2] [i_1] = var_2;
                            }
                        }
                    }
                }
            }
        }
        var_21 = var_7;
    }
    var_22 = (max(var_16, var_16));
    #pragma endscop
}
