/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_11 = ((((((1251052012 | 1) & (arr_0 [i_0 - 2])))) & (((arr_2 [i_0]) & (arr_2 [i_0])))));
        var_12 *= (!251);
        var_13 -= (((!(arr_3 [i_0 - 2]))) ? (max((var_1 % 4294967295), ((((arr_1 [i_0]) ? (arr_1 [i_0 + 2]) : var_1))))) : ((max((arr_0 [i_0 + 1]), (arr_1 [i_0 + 1])))));
        var_14 = (arr_2 [i_0]);
        var_15 = (((arr_1 [i_0 - 2]) ? (max((((arr_3 [i_0]) ? var_8 : var_5)), (((-(arr_1 [i_0 + 1])))))) : (var_0 & 1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = (~var_9);
        var_17 = (min(var_17, -6628093705981556454));
        var_18 = (((arr_5 [i_1]) + (arr_4 [i_1])));
        arr_6 [i_1] [i_1] = 4294967295;
    }
    var_19 = var_4;
    var_20 |= ((1251052012 ? ((max((max(var_0, -6628093705981556454)), var_9))) : -var_5));
    #pragma endscop
}
