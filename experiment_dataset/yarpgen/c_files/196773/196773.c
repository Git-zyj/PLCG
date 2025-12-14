/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(var_2, ((var_4 ? var_3 : var_7)))) * (((var_1 * var_6) * (var_9 - var_7)))));
    var_11 = (((((-(var_3 + var_7)))) ? (min((((var_6 ? var_6 : var_5))), (min(var_0, var_4)))) : (max(var_4, (var_8 * var_4)))));
    var_12 *= (((((var_2 % ((min(var_0, var_0)))))) ? (min((var_9 || var_3), (max(var_7, var_3)))) : (min((min(var_3, var_4)), (var_5 * var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = ((~var_2) > var_7);
        var_14 = (var_3 / var_7);
        arr_3 [i_0] = var_1;
    }
    var_15 = (((((var_3 * (min(var_0, var_7))))) ? (max((var_2 + var_9), ((var_6 ? var_7 : var_1)))) : var_5));
    #pragma endscop
}
