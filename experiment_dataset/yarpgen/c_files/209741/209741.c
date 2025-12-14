/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((((var_12 < var_11) ? var_11 : var_1)) * ((((((var_0 ? var_1 : var_1))) > var_16))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [6] [i_4] [i_3] = var_12;
                                var_19 = (min(var_19, var_16));
                                arr_18 [i_1] [i_2] [i_2] [i_3] [i_1] = (min(var_0, (((0 ? 6 : -1)))));
                            }
                        }
                    }
                }
                arr_19 [i_1] [i_0] [9] = (~-64);
            }
        }
    }
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_21 = (min((((((0 ? 32735 : -1))) ? -81 : 3746623952)), ((((arr_4 [i_5]) > (-1 > 32735))))));
                var_22 = ((((-var_2 + ((max(var_12, (arr_21 [i_5])))))) % ((((arr_13 [i_6] [i_6] [i_5 - 1]) ? (arr_13 [i_5] [i_6] [i_5 - 1]) : (arr_5 [i_6] [i_6]))))));
            }
        }
    }
    var_23 = (min(var_11, ((-((max(var_8, var_6)))))));
    #pragma endscop
}
