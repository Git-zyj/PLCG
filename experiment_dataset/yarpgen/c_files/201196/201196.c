/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (min((var_9 * 35184372088831), (((var_1 != ((var_8 ? var_6 : var_8)))))));
        arr_3 [i_0] [i_0] = -3753570311964425302;
        var_14 = var_10;
        var_15 |= ((((((arr_0 [i_0]) >> (35184372088832 - 35184372088822)))) >= (((35184372088821 ^ 35184372088822) ? ((((var_3 != (arr_2 [i_0] [i_0]))))) : var_9))));
    }
    var_16 = ((var_10 < ((((min(55151, 10379))) ? var_11 : var_11))));
    #pragma endscop
}
