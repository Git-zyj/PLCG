/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 += ((var_8 ? -var_9 : ((-(arr_0 [i_0] [i_0])))));
        var_16 = (!var_7);
    }
    var_17 = (var_4 && var_9);

    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_18 *= ((var_0 ? ((var_4 ? var_14 : (arr_4 [10] [i_1 + 2]))) : (((arr_4 [4] [i_1 + 3]) | (arr_4 [i_1] [i_1 + 3])))));
        arr_6 [i_1] = var_14;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 = (min(var_19, ((((arr_1 [12]) ? (arr_7 [i_2] [i_2]) : (arr_1 [i_2]))))));
        arr_10 [i_2] = arr_8 [4];
        var_20 = var_1;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_13 [i_3] = arr_12 [i_3];
        var_21 = var_13;
    }
    #pragma endscop
}
