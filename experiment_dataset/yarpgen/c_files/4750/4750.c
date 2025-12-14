/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-(arr_0 [i_0])));
        arr_4 [i_0] [i_0] = arr_2 [i_0];
    }
    var_19 = var_6;

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_20 = 81;
        arr_8 [i_1] = 56;
        arr_9 [i_1] = (((((~(arr_5 [i_1]))))));
        arr_10 [i_1] = ((~((~(arr_6 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((20014 ? (max((~71), (!var_2))) : 73)))));
        arr_15 [i_2] [i_2] = (((arr_1 [i_2]) ? (arr_2 [i_2]) : -25));
        arr_16 [i_2] = (((((~(arr_1 [i_2])))) ? ((max((arr_1 [i_2]), (arr_0 [i_2])))) : ((-5 ? (arr_1 [i_2]) : var_14))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_19 [i_3] [i_3] = (((((max((arr_1 [i_3]), var_3)))) / ((1 ? (arr_17 [i_3]) : (arr_17 [i_3])))));
        var_22 *= -62;
        arr_20 [i_3] [i_3] = ((~((((arr_14 [i_3]) > (arr_14 [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_23 = (((((((arr_11 [i_4]) ? (arr_6 [i_4]) : (arr_1 [i_4])))) > (arr_12 [i_4]))) ? (((arr_22 [i_4]) % var_11)) : ((((arr_11 [i_4]) - (arr_11 [i_4])))));
        arr_23 [i_4] [i_4] = (((((arr_0 [i_4]) < 73)) ? var_10 : 1));
        var_24 ^= (arr_14 [i_4]);
    }
    #pragma endscop
}
