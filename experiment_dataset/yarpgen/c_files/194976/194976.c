/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [1] = var_4;
        var_12 -= (((arr_2 [i_0] [12]) ? var_8 : var_10));
        arr_4 [i_0] [i_0] = arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = var_8;
        var_13 = ((~((+((min((arr_5 [i_1]), var_2)))))));
        var_14 = (min(var_14, (((((((-(arr_0 [i_1] [i_1])))) ? -98 : ((-28319 - (arr_0 [i_1] [i_1])))))))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_15 = -98;
        var_16 = ((-((-(arr_9 [i_2] [i_2])))));
    }
    var_17 = (((32505856 - -98) ? (var_11 && var_3) : (!var_6)));
    #pragma endscop
}
