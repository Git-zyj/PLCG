/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= ((var_5 ? var_3 : ((((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 1]))))));
        var_11 = (max(var_0, (arr_0 [i_0 - 1])));
        var_12 = (((((~(max(-16313, var_8))))) ? (arr_2 [i_0]) : var_6));
        arr_4 [i_0 - 1] [15] = var_9;
        var_13 = var_4;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = (min(((var_2 / (arr_6 [i_1] [i_1]))), (max((((1 ? var_2 : (arr_6 [i_1] [i_1])))), var_8))));
        arr_7 [i_1] = ((((arr_6 [i_1] [i_1]) & (arr_6 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_15 = ((((((((arr_10 [i_2]) ? (arr_6 [i_2] [i_2]) : var_3))) ? (-16300 && var_7) : -16312)) - ((var_4 ? (arr_0 [1]) : -11))));
        var_16 *= (var_7 - 7361994375752887519);
        var_17 -= ((!(((arr_5 [i_2]) < var_5))));
        arr_11 [i_2] = ((1 ? (~-2199023255551) : ((((arr_8 [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_9 [i_2]))))));
        var_18 *= var_6;
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_19 = ((arr_16 [i_4 + 2] [i_3 - 1] [i_3]) ? -1 : (((arr_13 [i_3 + 2]) / var_10)));
            var_20 += var_7;
        }
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            arr_19 [i_5] [i_5 - 2] [i_3] = 7361994375752887497;
            var_21 = (1 ? (arr_15 [i_3] [i_3] [i_3]) : -2199023255548);
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_22 = (arr_20 [10] [i_7] [i_7]);
                    arr_27 [i_6] [i_6] [i_7] = var_0;
                }
            }
        }
        var_23 -= ((var_2 ? (((var_7 ? (arr_23 [i_3] [14] [6]) : var_6))) : ((var_9 ? (arr_6 [i_3] [i_3]) : var_7))));
    }
    #pragma endscop
}
