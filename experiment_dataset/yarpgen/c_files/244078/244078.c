/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = var_2;
        arr_2 [8] = var_7;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_14 = ((((((var_0 ? (arr_4 [i_1]) : var_1)) - var_9))) ? (((var_10 + var_12) + ((max(var_11, (arr_0 [11] [i_1])))))) : (arr_1 [0] [i_1]));
        var_15 = (max(((~(arr_0 [i_1 + 1] [i_1]))), 63));
        var_16 = ((var_3 <= ((((min((arr_4 [i_1]), var_2))) ^ var_5))));
    }
    var_17 = (min(((var_10 || (var_11 && var_11))), ((!((max(var_1, var_0)))))));
    var_18 = (((var_4 && var_8) > var_7));
    #pragma endscop
}
