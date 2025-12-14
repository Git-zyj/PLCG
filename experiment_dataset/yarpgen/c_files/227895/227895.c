/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_2;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = ((~(max((arr_2 [i_0]), ((var_11 ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0])))))));
        var_18 = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_19 = -1679611017;
        var_20 |= var_10;
    }
    #pragma endscop
}
