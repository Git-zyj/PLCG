/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 = ((((max(0, var_0))) != (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 += (((arr_2 [i_2]) > ((max((((!(arr_0 [i_1])))), (arr_1 [15] [i_1]))))));
                    var_22 = ((((max((arr_1 [i_0] [i_1 + 1]), (((arr_1 [i_0] [i_0]) ? (arr_4 [i_2] [1]) : var_5))))) && (((((((arr_0 [i_0]) ? (arr_0 [21]) : (arr_4 [i_0 - 1] [i_1])))) ? (arr_1 [i_0] [i_2 + 1]) : (arr_2 [i_0 + 1]))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_8 [i_3] = ((var_1 ? ((var_13 ? (arr_3 [i_3] [i_3]) : var_8)) : ((max((arr_7 [i_3]), (!466887521))))));
        arr_9 [i_3] [i_3] = ((((arr_3 [8] [8]) ? (arr_4 [i_3] [i_3]) : (max(var_15, var_17)))));
    }
    var_23 = ((((((var_13 / var_16) ? (-4321 * var_10) : (var_9 && var_18)))) ? ((var_14 ? var_12 : (max(var_16, var_17)))) : ((max(var_14, var_12)))));
    #pragma endscop
}
