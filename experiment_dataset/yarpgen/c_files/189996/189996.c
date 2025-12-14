/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((~((var_16 ? var_13 : var_0))))));
    var_18 = var_4;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_19 += ((~((var_2 ? var_13 : (!var_0)))));
        var_20 &= (((+(min((arr_0 [i_0] [i_0]), var_9)))) << (((((((arr_0 [i_0] [i_0]) ? var_9 : var_9)) << (((arr_2 [8]) - 160)))) - 3699453244137799659)));
        var_21 = ((((((((arr_0 [i_0] [i_0]) ? var_2 : var_16))) ? (((!(arr_0 [i_0] [i_0])))) : (arr_0 [i_0] [i_0]))) - ((((min(var_10, (arr_2 [i_0])))) ? ((var_15 - (arr_0 [i_0 - 2] [i_0 - 2]))) : var_14))));
    }
    #pragma endscop
}
