/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_18 = 65528;
        var_19 = (2545 ? -var_0 : (((var_12 ? (min((arr_0 [i_0] [i_0]), (arr_1 [i_0 + 1]))) : var_9))));
        var_20 = (min(var_20, var_17));
        arr_2 [i_0] = ((((((arr_0 [i_0 - 2] [i_0 - 3]) ? ((960 ? (arr_0 [i_0] [i_0]) : var_16)) : (!65535)))) ? (max((arr_0 [i_0 - 3] [i_0]), 63913)) : (((((64580 >> (120 - 101)))) ? (~0) : (65535 >> 1)))));
    }
    var_21 |= var_10;
    #pragma endscop
}
