/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (max((min(var_12, (~var_4))), var_8));
    var_17 = var_11;
    var_18 = (!var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (min(var_0, ((max(var_5, var_3)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] [12] = var_0;
                        var_20 = -var_6;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_21 = (min(var_10, var_2));
                        var_22 -= (max(var_7, var_15));
                        var_23 = (max(var_23, (+-var_9)));
                        arr_12 [i_0] [i_2] [i_0] = var_6;
                        var_24 = (min(var_14, var_6));
                    }
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        var_25 = (min(var_25, var_0));
                        var_26 = (min(var_8, ((min((!var_4), var_13)))));
                        var_27 = (max((max((min(var_11, var_7)), var_13)), var_15));
                    }
                }
            }
        }
    }
    var_28 = (max(var_28, var_4));
    #pragma endscop
}
