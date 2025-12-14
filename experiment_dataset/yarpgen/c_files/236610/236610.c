/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_6);
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 ^= ((+((((arr_0 [i_0]) < (min(-14847, -1)))))));
        var_18 = ((((((min(var_10, (arr_2 [3])))) ? (((arr_2 [5]) ? (arr_0 [i_0]) : 14847)) : ((((arr_1 [i_0]) <= (arr_0 [2])))))) / var_13));
    }
    #pragma endscop
}
