/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = var_13;
                                arr_12 [i_3] [i_1] = (max(((var_14 & (!1))), ((min(var_5, 8)))));
                                var_17 = var_2;
                            }
                        }
                    }
                }
                var_18 = 1464370312;
                var_19 = ((((((arr_11 [i_0] [i_0] [i_0] [6] [i_0] [i_0]) / (arr_3 [i_0] [16] [i_1])))) ? ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_15 : var_1))) : ((1 ? (arr_3 [i_1] [i_1] [i_0]) : var_4))));
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
