/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = (max(var_19, var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] = (!var_4);
                    arr_9 [8] = (((!var_2) >> (((min(-1, (var_6 >= var_15))) + 26))));
                    arr_10 [i_0] [i_1] [i_2 + 3] = (!2656735507);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [8] [18] [i_3] [i_4] = (min(var_14, -var_7));
                                arr_18 [i_0] [i_2 + 2] [i_0] [6] [i_3] [i_3] = (max(var_8, (min((var_8 | var_3), var_15))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
