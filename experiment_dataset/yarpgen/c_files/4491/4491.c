/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (!((var_8 && ((((arr_1 [i_0] [i_0]) ? var_1 : var_0))))));
        arr_3 [i_0] = (min((arr_1 [i_0] [i_0 - 2]), (((1 % var_10) ? ((-(arr_1 [i_0] [i_0]))) : (arr_0 [i_0 - 2])))));
    }

    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_16 = var_9;
        var_17 = (((((((((arr_5 [i_1] [i_1]) | var_14))) ? ((var_6 ? var_4 : (arr_4 [i_1] [i_1]))) : var_11))) ? (((-(arr_6 [i_1])))) : ((-(arr_6 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_18 = var_15;
                        var_19 = (var_1 >> var_15);
                    }
                }
            }
        }
        var_20 = (((~(arr_14 [i_2] [i_2] [i_2] [i_2]))));
        arr_19 [i_2] [i_2] = (((!var_10) ? (((var_6 ? (arr_11 [12] [18] [i_2] [i_2]) : var_4))) : (((arr_15 [i_2] [12] [i_2] [i_2] [i_2] [i_2]) ? (arr_12 [18] [i_2] [i_2] [21]) : var_14))));
        arr_20 [i_2] [i_2] = ((var_4 * (((arr_13 [20] [20] [i_2] [20]) * (arr_16 [i_2] [i_2] [i_2] [i_2])))));
    }
    #pragma endscop
}
