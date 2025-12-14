/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 *= 14918395258176219794;
        var_21 = 969567117;
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        var_22 = (max(((206 ? (arr_4 [i_1 - 3]) : var_19)), ((max((arr_4 [i_1 - 2]), var_5)))));
        var_23 = (max(var_23, (((-(((arr_3 [i_1]) + -0)))))));
    }
    var_24 &= var_9;
    #pragma endscop
}
