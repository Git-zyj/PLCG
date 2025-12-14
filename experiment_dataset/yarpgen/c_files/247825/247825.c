/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_16);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (arr_1 [i_0] [i_0]);
        var_20 = arr_2 [i_0];
    }
    #pragma endscop
}
