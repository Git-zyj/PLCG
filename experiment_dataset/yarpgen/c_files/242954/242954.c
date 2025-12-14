/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((((((var_8 ? var_3 : var_2))) ? ((20101 ? 8283137425420924247 : var_7)) : (((-4339096720549845684 + 9223372036854775807) >> (var_3 - 54501))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (-(((~var_2) ^ (~var_13))));
        var_17 = -4339096720549845684;
    }
    var_18 = (~var_13);
    #pragma endscop
}
