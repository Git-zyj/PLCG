/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_0] [i_0] [i_0] = (((var_8 & var_11) ? ((max(var_1, var_2))) : (~var_9)));
                            var_12 = (max(var_12, ((min(((var_7 ? var_10 : var_11)), ((((var_0 / var_8) * var_6))))))));
                            arr_13 [i_2 - 1] [i_0] = (((!(var_9 && var_11))));
                        }
                    }
                }
                var_13 = (((var_9 - var_8) / ((((5397833246264022747 ? 6428397699597200646 : var_4))))));
            }
        }
    }
    var_14 &= ((((max(var_8, var_10))) - var_2));
    var_15 = (max((((!var_5) ? (min(var_3, var_6)) : ((732326817 ? 3562640497 : var_4)))), var_2));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_17 [i_4] [10] = (~var_7);
        var_16 = (~-var_6);
        arr_18 [i_4] = var_0;
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_21 [i_5] = (min(((var_6 ? var_5 : var_1)), (var_10 <= var_6)));
        var_17 = (((((~((var_2 ? var_1 : var_11))))) ? (((((min(var_5, var_5)) < var_6)))) : (max(var_1, var_7))));
        arr_22 [i_5] [i_5] = ((((var_6 ? var_10 : var_11)) == ((((((max(var_10, var_8)))) & (min(var_3, var_6)))))));
    }
    #pragma endscop
}
