/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_9 * var_5);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = var_4;
        arr_2 [i_0] = (((arr_0 [i_0]) > 0));
        var_20 -= (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 *= (arr_3 [i_1] [i_1]);
        var_22 = ((arr_1 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]));
        var_23 = -3121008430286602928;
        var_24 = (((arr_3 [i_1] [i_1]) ? 12 : ((var_16 << (32 - 17)))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_25 = var_7;
        arr_8 [i_2] = ((((((max((arr_1 [i_2] [i_2]), -25127))) ? 112 : (arr_4 [i_2 + 1]))) == ((((arr_0 [i_2 + 1]) ? 30 : 112)))));
    }
    var_26 = (max(((var_5 ? (((max(var_11, 37)))) : -var_9)), ((var_2 ? (max(var_13, var_13)) : (((-732127480756966850 ? var_5 : var_15)))))));
    #pragma endscop
}
