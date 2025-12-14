/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 ^= min(4193280, 20);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) ? var_4 : (arr_2 [i_0])));
        arr_4 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (max(((15549 ? var_5 : var_8)), (274861129728 == var_6)));
        var_22 = (max(var_22, (arr_0 [i_1] [i_1])));
        arr_8 [i_1] = arr_0 [i_1] [i_1];
        var_23 = max((max(3756602993, var_18)), (max(1844776714, (~2373071824))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = 2373071824;
        var_24 = var_19;
        var_25 &= ((!((((arr_1 [i_2] [i_2]) ^ 1844776728)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_26 = 14923;
        arr_15 [i_3] = (((arr_2 [i_3]) ? (arr_2 [i_3]) : (arr_2 [i_3])));
    }
    var_27 = (max(var_27, var_11));

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_28 = (((arr_10 [i_4]) >> (((((arr_1 [i_4] [i_4]) - 4290774015)) - 4193270))));
        var_29 = ((45884 ? (arr_14 [i_4] [i_4]) : (arr_9 [i_4])));
        var_30 = (min(var_30, ((max((~-274861129728), (((((arr_1 [i_4] [i_4]) & 2893428598)))))))));
    }
    #pragma endscop
}
