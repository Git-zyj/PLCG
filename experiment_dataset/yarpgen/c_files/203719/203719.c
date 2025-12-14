/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = ((var_12 ? ((var_7 ? var_11 : var_1)) : (arr_2 [i_0] [8])));
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
    }
    var_15 = var_3;

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = (max(var_16, var_5));
        arr_7 [i_1] [20] = var_1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] = ((29463 ? 1 : 9926771949404525462));
        var_17 = arr_9 [i_2] [i_2];
        var_18 += (arr_5 [i_2]);
        var_19 = ((-(arr_6 [i_2])));
    }
    #pragma endscop
}
