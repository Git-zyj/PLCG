/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = var_8;
    var_18 = (max(((var_0 ? var_11 : -var_6)), var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (arr_1 [i_1 + 2] [i_1 - 2]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = var_4;
                                var_21 = (((!var_4) ? (((min(var_15, (arr_3 [3] [i_1] [3]))))) : (max(var_8, (arr_3 [i_2] [i_3] [i_2])))));
                                var_22 = (min(var_22, var_15));
                            }
                        }
                    }
                }
                var_23 = 1;
            }
        }
    }
    var_24 = ((((min(var_13, 3682544917))) ? (max(var_13, var_5)) : var_1));
    #pragma endscop
}
