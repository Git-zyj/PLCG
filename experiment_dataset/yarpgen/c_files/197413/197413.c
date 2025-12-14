/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_12 ? ((~(arr_2 [i_0] [10]))) : var_10));
        var_13 = ((0 ? 81 : 32078));
        var_14 = (max(var_14, (((1 ? (arr_2 [i_0 - 1] [i_0 + 1]) : 4261412864)))));
        arr_4 [i_0] = (((arr_2 [i_0] [i_0 - 1]) ? 127 : (arr_2 [i_0 - 1] [3])));
        arr_5 [i_0] = (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 *= ((((4294967284 ? -121643192814635609 : 194))) ? ((max(-7660957689282353455, 33435))) : (arr_6 [i_1] [i_1]));
        arr_10 [i_1] = (!33463);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_16 *= (((7660957689282353437 & var_9) ? (5842031616139629901 ^ 0) : (arr_12 [i_2])));
        var_17 = var_1;
        var_18 = (((arr_13 [i_2]) ? (var_11 == 33453) : (arr_13 [i_2])));
    }
    var_19 = (max((((~((81 ? 84 : var_9))))), (max(16337540781487632488, 16))));
    var_20 = -var_11;
    var_21 = ((((2513726436 <= (max(var_5, var_11)))) ? 0 : (((((min(var_12, 1695824543))) ? ((0 ? 1 : var_6)) : -93)))));
    var_22 = ((((((min(var_5, var_1))) ? (~var_1) : (((var_4 ? var_12 : 16)))))) ? 3 : ((max(var_0, var_6))));
    #pragma endscop
}
