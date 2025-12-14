/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, -var_10));
    var_20 = (min(1, ((min(var_12, (max(1, -98)))))));
    var_21 = (max(var_9, var_18));

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0 - 1] = 0;
        var_22 = (min(var_22, 1));
        arr_3 [i_0] = (min(-1, (max(1, 68719214592))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (max(1, -383744029));
        arr_7 [i_1] |= ((-(--1)));
    }
    for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_23 = (max(var_23, ((max(-1, 1)))));
        var_24 = ((min(-1, ((max(1, 511))))));
    }
    var_25 = var_4;
    #pragma endscop
}
