/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(var_16, (var_10 | var_1))) - (((var_16 >> (var_6 && var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = (max(((((min(var_7, var_2))) ? (((var_8 ? var_15 : var_1))) : var_6)), ((((!var_17) < var_4)))));
                                var_21 = (max(var_21, ((max((max((var_12 & var_9), (min(var_10, var_3)))), (((((var_18 ? var_2 : var_0)) * (var_14 - var_10)))))))));
                                arr_12 [i_0] [i_2] [i_1] [12] [i_0] [i_2] = (min((min((!var_1), -var_17)), var_6));
                            }
                        }
                    }
                    var_22 = (((min(var_4, var_18)) * (((var_1 ? var_5 : var_6)))));
                }
            }
        }
    }
    var_23 = (min(((((((var_0 ? var_17 : var_2))) / var_18))), (max(32302, 780390044771338132))));
    #pragma endscop
}
