/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = 18446744073709551615;
        var_19 = ((var_10 % var_16) ? (!0) : 0);
        var_20 = ((var_5 * var_16) ? 11391164476004421128 : ((var_9 ? var_13 : (arr_0 [i_0]))));
        var_21 = (max(var_21, (((var_17 > 16491919916367491396) | (arr_2 [i_0] [5])))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_22 = min((((((var_5 ? var_4 : var_4))) ? (var_15 - 16491919916367491396) : ((var_3 ? var_7 : var_7)))), var_6);
        var_23 = (((max(1954824157342060220, ((var_14 ? var_0 : var_6))))) ? (max((min(var_7, 9323934250517525583)), (max(var_16, var_15)))) : (((min((arr_5 [i_1] [i_1]), 285506456124525287)) ^ (18112148930670655773 / 7513712885433930234))));
        var_24 = (max(var_24, ((16491919916367491396 ? ((-((7905612212511149047 ? 1954824157342060219 : 17199784864010720196)))) : var_2))));
        var_25 &= (var_9 % (arr_5 [i_1] [i_1]));
    }
    #pragma endscop
}
