/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (((((1 ? var_11 : var_18))) ? var_11 : 2471));
        var_20 = 984532801;
        arr_2 [i_0] = (((((min(161, 1))) ? (arr_0 [i_0] [i_0]) : ((((arr_0 [i_0] [i_0]) ? 100 : 99))))));
        var_21 = (((arr_0 [i_0] [i_0]) & ((137 ? 1 : var_5))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = ((-(((arr_3 [i_1] [i_1]) / (-32767 - 1)))));
        var_23 = (max(var_23, 1));
    }
    var_24 = var_18;
    var_25 = var_9;
    var_26 = ((1349668419 % (min(((28292 ? var_6 : -4245224404613001931)), -2208530981))));
    #pragma endscop
}
