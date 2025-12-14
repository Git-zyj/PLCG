/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_13 = ((max(var_8, (~var_3))));
        arr_3 [i_0] = min(7, (min(85, var_10)));
        var_14 = (min(var_14, var_2));
        arr_4 [7] = ((((-(arr_2 [8]))) & (min(var_10, ((var_5 >> (var_5 - 191)))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_15 *= var_4;
        var_16 = var_10;
        arr_8 [i_1] |= (min(var_9, ((max(var_8, var_2)))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] &= var_1;
        arr_13 [i_2] [i_2] = (min(-7, var_12));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_17 [i_3] = (((arr_16 [i_3]) || var_4));
        var_17 *= (((arr_14 [i_3]) == var_7));
        arr_18 [i_3] = (arr_16 [i_3]);
    }
    var_18 &= var_9;
    #pragma endscop
}
