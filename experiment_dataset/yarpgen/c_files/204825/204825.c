/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_19 -= (max((max(((((-1 + 9223372036854775807) >> 0))), var_14)), 213));
        var_20 = 4088371664777608018;
    }
    var_21 = ((var_5 ? 1 : 0));
    #pragma endscop
}
