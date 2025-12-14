/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_13;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (max(var_21, (arr_2 [i_0])));
        var_22 += ((((arr_2 [i_0]) >> (((arr_2 [i_0]) - 123)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_23 += 6472;
        arr_7 [i_1] [i_1] = (arr_3 [i_1] [i_1]);
        arr_8 [i_1] = var_12;
        var_24 = (max(var_24, ((((arr_5 [i_1]) / ((4294967294 ? -9236 : var_10)))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_25 = (max(-var_13, (((arr_9 [i_2]) * (!var_17)))));
        var_26 = (arr_9 [i_2]);
        arr_11 [i_2] = (((((arr_10 [i_2] [i_2]) <= -450588443))) <= (min(var_7, var_13)));
    }
    #pragma endscop
}
