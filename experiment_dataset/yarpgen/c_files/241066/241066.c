/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = var_1;
        var_17 = var_7;
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 &= (((max(((max(var_10, var_7))), ((var_8 ? var_13 : -64)))) <= ((((var_10 + 2147483647) << (((((arr_3 [i_1]) + 31988)) - 7)))))));
        arr_4 [i_1] = (((arr_3 [i_1]) | ((var_1 ? var_8 : 127))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_7 [8] |= (max((min((arr_5 [i_2]), -311085206)), ((min(var_14, 23431)))));
        var_19 = 72057594037862400;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_20 = 1;
        var_21 = 1184967053;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_22 -= ((((var_11 ^ (var_12 ^ 1))) / (var_0 - var_2)));
        arr_12 [3] = 18446744073709551596;
    }
    var_23 = (min(-997757035, -var_3));
    #pragma endscop
}
