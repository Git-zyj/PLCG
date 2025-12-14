/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 ? (((-(-91 > var_13)))) : ((65535 ? ((var_2 ? var_10 : var_9)) : var_10))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((((arr_0 [i_0] [i_0]) ? 65535 : (arr_2 [i_0])))) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((arr_2 [10]) ? (arr_2 [i_0]) : (arr_2 [4]))) : (((~(min(var_13, 115))))));
        arr_4 [i_0] &= (((arr_0 [i_0] [i_0]) ? (((!(arr_1 [i_0] [16])))) : (arr_0 [i_0] [i_0])));
    }
    var_16 = (!var_9);
    var_17 = 2251710991163366446;
    #pragma endscop
}
