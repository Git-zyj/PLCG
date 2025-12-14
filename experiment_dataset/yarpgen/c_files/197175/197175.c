/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 = (!-39);
        arr_2 [i_0] = 4840340879153391249;
    }
    var_17 = 137304735744;
    #pragma endscop
}
