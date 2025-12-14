/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(3616463780388854211, var_3))) ? (((min(11102, 24)))) : (((var_7 || var_9) ? (arr_1 [i_0]) : 2251799813685247))));
        var_19 = min(((((((arr_1 [i_0]) + -21920)) <= var_9))), ((((max(-6127491358656584315, 119))) ? 15489921551687451646 : (max(2068426649, 536870911)))));
    }

    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (536870911 < 636834777);
        var_20 = (max(((min((-9223372036854775807 - 1), ((((arr_6 [i_1]) && var_9)))))), (((((arr_6 [i_1]) & (arr_5 [i_1]))) >> (1285407138 <= -54165080)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = 615551392;
        arr_13 [i_2] = (((-1202637014 + 2147483647) << ((((var_9 ? var_12 : var_2)) - 211980212))));
    }
    #pragma endscop
}
