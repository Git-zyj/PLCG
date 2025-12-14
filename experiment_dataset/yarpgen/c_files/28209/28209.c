/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(((min((231 || var_1), var_7))), ((~(min(163, var_14))))));
    var_19 = ((!(((109 - (~var_16))))));
    var_20 = ((var_9 | (((((min(var_6, var_12)))) * (var_3 - var_9)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_21 -= (arr_0 [10] [i_0]);
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_22 -= ((((9263032517603619477 / (arr_1 [i_0]))) > -var_7));
        var_23 ^= (((((((min((arr_0 [0] [6]), var_7))) >> ((((var_16 - (arr_1 [10]))) + 57923))))) ? (min((9183711556105932147 - var_2), ((var_11 ? var_0 : 4575657221408423936)))) : ((max((((arr_1 [i_0]) ? -106 : (arr_0 [10] [i_0]))), -var_5)))));
    }
    var_24 = var_15;
    #pragma endscop
}
