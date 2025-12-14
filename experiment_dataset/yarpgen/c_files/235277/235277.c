/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -8;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_19 += 57;
        arr_3 [i_0] = 62526;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_20 = 544145695;
        var_21 ^= (!-2838989058442211920);
    }
    var_22 = (~1649688245);
    #pragma endscop
}
