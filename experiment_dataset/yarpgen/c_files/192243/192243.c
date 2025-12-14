/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [18] [5] &= var_0;
        var_13 = var_11;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_14 = var_7;
        var_15 = var_3;
        arr_6 [i_1] [1] = var_9;
    }
    for (int i_2 = 4; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] [1] = var_10;
        arr_10 [i_2 + 2] = var_0;
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_16 = (min(var_16, var_6));
        var_17 = var_0;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_18 |= var_8;
        arr_17 [i_4] [i_4] &= var_4;
        arr_18 [i_4] = var_1;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_19 *= var_11;
        var_20 = var_11;
        arr_22 [9] = var_7;
        var_21 *= var_2;
    }
    #pragma endscop
}
