/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [10] [i_0] |= var_14;
                var_19 = var_5;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 |= (~(min(-var_1, var_7)));
                                var_21 = -var_1;
                                var_22 = (max((min((~63262), var_5)), (~8)));
                                var_23 |= (min(((-(arr_2 [i_0]))), ((min((max(var_7, var_0)), 228)))));
                                var_24 = (min(((max(var_2, (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])))), (min(((min(var_6, var_16))), (min(0, var_13))))));
                            }
                        }
                    }
                }
                var_25 = var_18;
                var_26 = var_10;
            }
        }
    }
    var_27 = (min(var_1, (max(0, var_8))));
    #pragma endscop
}
