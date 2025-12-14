/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = ((-(arr_1 [i_2])));
                            var_19 = (max(var_19, var_15));
                            var_20 = ((((((arr_0 [i_0]) | (((arr_8 [i_0] [i_1] [i_2] [12]) ? (arr_7 [i_0] [23]) : 30714))))) ? var_13 : (((var_15 ? var_14 : var_1)))));
                            arr_13 [i_0] [i_0] [i_0] [20] = ((((((arr_4 [i_2] [i_3]) / (arr_3 [i_1]))) == (arr_11 [i_0] [i_1] [i_2 - 2] [i_0]))));
                        }
                    }
                }
                var_21 = ((((-30730 ? -2109478257 : var_7))));
            }
        }
    }
    var_22 = -var_5;
    var_23 = (max(var_3, var_12));
    var_24 = -var_12;
    #pragma endscop
}
