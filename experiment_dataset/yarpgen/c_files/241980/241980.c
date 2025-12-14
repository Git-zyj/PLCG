/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min((min(((var_10 ? var_13 : var_4)), ((min(var_10, var_3))))), (min((-2147483647 - 1), var_12)));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = var_12;
        arr_3 [i_0] = ((1 ? ((-1625764383 ? (((arr_1 [i_0 - 2]) ? (arr_0 [i_0 - 1]) : var_15)) : ((var_1 ? (arr_0 [i_0]) : var_10)))) : ((((min((arr_0 [i_0 + 1]), var_9))) & (var_5 | 1)))));
        arr_4 [7] = (((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 2]) : var_3)) <= (!var_5)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (max(var_18, ((min((arr_6 [i_1] [i_1]), var_1)))));
        var_19 = (min((arr_0 [i_1]), (min(var_12, var_5))));
        var_20 = 1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_21 ^= ((var_11 ? (arr_8 [9] [i_2]) : ((var_2 ? (-127 - 1) : 249072033))));
        arr_11 [i_2] = ((arr_9 [i_2]) ? var_4 : var_4);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 = (max(var_22, (((var_15 << (((((var_6 ? (arr_13 [i_3]) : 15))) + 32)))))));
        var_23 = (arr_13 [i_3]);
        var_24 = ((((((var_9 ? var_2 : var_14)) * (((arr_12 [i_3]) % var_2))))) ? (arr_13 [i_3]) : ((-((var_0 ? var_7 : var_13)))));
    }
    var_25 = ((var_11 ? var_1 : -var_15));
    #pragma endscop
}
