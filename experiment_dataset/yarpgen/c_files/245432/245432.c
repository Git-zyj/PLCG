/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((arr_1 [i_0] [i_0]) >= (~var_10))) ? var_2 : ((-(((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_5))))));
        var_15 ^= (((arr_1 [i_0] [i_0]) ? (max(1761530671, var_9)) : (((arr_1 [i_0] [i_0]) & (arr_1 [1] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((var_4 * (!var_13)));
        var_16 = (max(var_16, (((~(arr_0 [i_1]))))));
        arr_6 [8] |= (!26);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 -= ((((arr_0 [i_2]) << (((arr_8 [i_2] [10]) - 7663)))));
        var_18 ^= ((~((max((arr_7 [i_2]), (arr_7 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_11 [i_3] = (min(((var_10 ? (~var_1) : (max(var_0, var_2)))), (~var_2)));
        arr_12 [i_3] [i_3] = -1;
        var_19 += ((((var_6 || (arr_0 [i_3]))) ? (max((arr_0 [i_3]), var_10)) : (((var_4 ? var_5 : var_12)))));
        arr_13 [1] = (min((((arr_8 [i_3] [18]) << (((arr_1 [i_3] [i_3]) - 266994737)))), 26355));
    }
    var_20 = var_9;
    #pragma endscop
}
