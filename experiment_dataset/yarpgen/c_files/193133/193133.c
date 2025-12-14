/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, (min(((((var_9 ? (arr_7 [i_3] [i_1] [i_0]) : var_5)) % ((((arr_5 [i_0]) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_0 [i_1])))))), 0))));
                            arr_11 [0] [i_0] [i_2] = var_2;
                        }
                    }
                }
                arr_12 [i_0] [i_0] = ((var_9 - var_14) ? var_15 : (((((var_0 ? (arr_1 [i_0]) : var_2))))));
                var_17 = (max(var_2, (arr_1 [i_0])));
                var_18 = (max(var_18, (var_12 * var_2)));
                var_19 = (max(var_19, ((((((var_9 * (44692 * 0)))) ? (min((((arr_6 [i_1] [i_1] [i_0] [i_0]) ? var_6 : (arr_1 [i_1]))), var_12)) : var_7)))));
            }
        }
    }
    var_20 &= var_8;
    var_21 = ((min(((min(var_2, var_8))), ((var_15 ? var_9 : var_3)))) >= var_11);
    var_22 = (min(var_12, ((var_13 ? (((1651483778 ? var_7 : var_1))) : (var_8 | var_6)))));
    #pragma endscop
}
