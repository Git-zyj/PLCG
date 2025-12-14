/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (32221 - 33315);
    var_21 = (((((var_3 ? (var_1 * var_12) : var_5))) > ((((var_19 ? var_10 : var_19)) - (((var_15 << (var_15 - 76))))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_22 *= max((arr_2 [i_0] [i_0]), (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_1)));
        var_23 = (min(var_23, (((+(max((arr_2 [i_0] [i_0]), var_5)))))));
        var_24 ^= var_16;
        var_25 = var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_26 |= (arr_3 [i_1]);
        var_27 = (((arr_3 [i_1]) + (arr_0 [i_1])));
        var_28 ^= (32221 | var_18);
    }
    #pragma endscop
}
