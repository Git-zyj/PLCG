/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(max((min(var_8, 7)), -var_6))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_21 = var_16;
        var_22 = 2795096302444519942;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_23, var_2));
        arr_7 [i_1] = (((arr_2 [i_1]) * (((!(arr_3 [i_1]))))));
        var_24 = var_9;
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_25 = (max(-2617, 15651647771265031644));
        var_26 = (max(var_26, var_15));
        var_27 += var_5;
        var_28 = (min(var_28, ((((max(-2094041327, (min(2795096302444519968, -453480792)))) | var_15)))));
    }
    #pragma endscop
}
