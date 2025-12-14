/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_11);
    var_17 = var_7;
    var_18 = (max((((((-1608124935745261942 ? var_15 : -1))) ? (((var_15 ? (-32767 - 1) : -85))) : (max(var_15, var_9)))), ((-22 ? var_2 : (((var_5 ? -52 : 32756)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = ((~((1 | (arr_1 [i_0])))));
        arr_2 [i_0] = (((((min((arr_1 [i_0]), var_1))) | var_7)) != (arr_1 [i_0]));
        var_20 = ((((((max(-720928749, var_1)) * var_13))) & (3025644547449675046 ^ var_7)));
        var_21 = (min((!var_5), var_11));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (min((((88 ? var_9 : ((min(1, 3)))))), (((var_7 ? var_2 : (arr_4 [i_1]))))));

        /* vectorizable */
        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            var_22 = (arr_4 [i_1]);
            var_23 = (((!var_4) > (!var_11)));
            var_24 = 1;
        }
    }
    #pragma endscop
}
