/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0] [i_0]) || (((-1421179547 / (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = 7825536286529534574;
    }
    var_14 = 7825536286529534590;
    #pragma endscop
}
