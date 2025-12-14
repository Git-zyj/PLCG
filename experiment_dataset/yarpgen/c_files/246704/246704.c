/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = -var_3;
        arr_4 [i_0] [i_0] = (var_6 + var_8);
        arr_5 [i_0] = ((var_12 % (1 >> var_10)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_9 [1] &= ((((var_6 ? 36028797018931200 : var_10)) * (var_9 == var_1)));
        arr_10 [i_1] = (((-377338564 + var_12) * var_8));
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((~(((!(1 ^ var_1)))))))));
        var_16 = var_0;
        var_17 = (min(var_17, -1825023904));
        var_18 = (max(var_18, ((((((var_7 && var_10) & var_6)) * ((var_0 << (var_8 - 1893108405))))))));
    }
    #pragma endscop
}
