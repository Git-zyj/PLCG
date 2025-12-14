/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((var_1 > (((((var_4 ? var_14 : 220))) ? -112 : var_2))));
    var_16 = (max(((((max(var_10, var_2))) + var_0)), 9781210215126877220));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((1955927343992255779 ? (((((arr_1 [i_0 + 1]) > -112)))) : -6166392687621115044));
        var_17 = (((arr_0 [12] [i_0]) ? (((!(arr_1 [i_0])))) : ((11 ? -8 : (min(2747183072, 14836537937656046472))))));
    }
    #pragma endscop
}
