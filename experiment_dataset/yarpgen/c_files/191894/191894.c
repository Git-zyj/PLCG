/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_11 ? var_5 : (var_4 && 11)))) ? (((var_11 ? ((32768 ? var_0 : 22733)) : (var_7 + 32767)))) : var_8);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (1467983613 ? ((var_11 ? var_7 : var_7)) : ((var_9 ? var_1 : (arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = ((!(((var_5 ? (arr_0 [i_0]) : var_13)))));
        arr_5 [i_0] [i_0] = (var_2 && var_6);
        arr_6 [i_0] [i_0] = var_14;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_16 = ((arr_8 [i_2] [i_1]) ? 47 : -22715);
            arr_12 [i_1] [i_1] [i_1] = (~-66);
            arr_13 [i_1] [i_2 + 1] = ((-(arr_8 [i_1] [i_2 - 2])));
        }
        var_17 = (((arr_9 [i_1]) ? (arr_7 [i_1]) : var_9));
    }
    var_18 = (max(((var_1 ? (((max(0, var_4)))) : var_10)), (((-((var_5 ? var_8 : 2826983697)))))));
    #pragma endscop
}
