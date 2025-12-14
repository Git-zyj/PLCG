/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = var_14;
        var_20 = (((arr_0 [i_0 + 1] [i_0]) ? (arr_0 [i_0] [i_0]) : var_0));
        var_21 = (max(var_21, var_15));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((~(((arr_3 [i_1] [i_1 + 1]) & var_14))));
        arr_6 [i_1] = var_14;
        var_22 = (max(var_22, ((min((max(((var_12 ? var_10 : var_12)), ((min(var_1, var_4))))), (((((max(var_9, (arr_0 [12] [12])))) << (((arr_1 [i_1]) & var_7))))))))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] = (7751468632903749548 || 49993);
        arr_12 [i_2] = ((((-5543 ? -28 : 14394)) / 44));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_16 [1] = (min((8231 - var_0), ((min((var_9 + 49993), 14393)))));
        var_23 = (min(var_23, (((min((arr_15 [i_3]), (((arr_13 [i_3]) / var_15)))) < -var_18))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_19 [i_4] [i_4] &= -var_6;
        var_24 = (min(((((min(-125, 51141))) ? ((var_9 ? (arr_13 [i_4]) : (arr_18 [i_4]))) : (((((arr_13 [1]) && var_1)))))), (15536 % -786363055)));
    }
    #pragma endscop
}
