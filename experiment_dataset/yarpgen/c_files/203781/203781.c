/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = (((!2) - var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 += (max((((var_16 || (((var_15 ? var_10 : -25)))))), -14));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = (((8 || 12) ? var_9 : (((-29 ? var_15 : var_13)))));
                                var_21 = (max(var_21, 8));
                                arr_14 [i_0] [i_2] [i_2] [i_2] [11] [i_4] = 2;
                            }
                        }
                    }
                    var_22 = (arr_6 [i_0] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
