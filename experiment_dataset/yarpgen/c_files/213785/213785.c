/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_12 = ((!(arr_0 [i_0] [i_0])));
        var_13 *= 46;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((min(((min(203, (arr_3 [12] [12])))), ((var_11 ? (arr_2 [i_1] [i_1]) : var_0)))) != 59));
        arr_5 [0] = (min(-51115, ((310745579 ? (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))) : ((165 ? (arr_3 [10] [i_1]) : 219))))));
        arr_6 [i_1] = (min((((((((arr_2 [i_1] [i_1]) ? (arr_2 [2] [i_1]) : var_7))) ? (arr_3 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))), ((var_0 ? var_3 : 210))));
        arr_7 [i_1] = ((((((arr_3 [i_1] [i_1]) - (arr_3 [i_1] [i_1])))) ? (min((arr_3 [i_1] [i_1]), 3984221724)) : 76));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_14 ^= (((arr_10 [i_2]) ? (arr_10 [i_2]) : -27));
        arr_11 [i_2] = 83;
        var_15 = (35 / -17632);
    }
    var_16 = (min(var_16, 1344254898));
    var_17 = (((((((min(45, 209))) ? (9128 * 2147221504) : var_7))) ? var_3 : 17627));
    var_18 = (!-514126374);
    #pragma endscop
}
