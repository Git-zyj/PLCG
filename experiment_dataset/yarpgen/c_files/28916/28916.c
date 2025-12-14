/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = (-(arr_0 [i_0] [i_0]));
        var_19 = -7191657355419926733;
        var_20 = min(247809328, -7191657355419926733);
    }
    var_21 = max((((((var_13 ? var_4 : var_14))) ? (max(-247809342, -247809328)) : var_11)), var_5);
    #pragma endscop
}
