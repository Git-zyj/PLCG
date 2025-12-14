/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((0 - var_1) != var_10));
        arr_4 [i_0] = ((var_18 ? var_9 : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (max((min(var_2, var_15)), (((((max(-32758, -4))) ? (var_18 >= var_15) : ((var_1 ? 0 : 848637322)))))));
        arr_9 [i_1] = (arr_0 [9]);
        arr_10 [23] &= (var_11 % (((min((arr_7 [i_1]), var_9)) + (max((arr_1 [i_1]), 2)))));
        arr_11 [i_1] = (((((var_4 ? var_10 : 0))) ? (((var_16 + 2836237426716146997) ? (min(0, var_15)) : var_16)) : ((((arr_7 [i_1]) ? var_2 : (arr_5 [i_1]))))));
        arr_12 [i_1] [i_1] = ((~(((arr_0 [i_1]) % 848637326))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        arr_15 [i_2] = var_5;
        arr_16 [11] = ((!var_6) ? ((var_13 ? (arr_0 [i_2]) : 3806293091)) : var_13);
        arr_17 [5] = (4294967282 && 1);
        arr_18 [i_2] = (arr_14 [i_2] [i_2]);
        arr_19 [i_2] |= (((arr_13 [i_2] [i_2]) ? var_4 : var_16));
    }
    var_19 = var_9;
    #pragma endscop
}
