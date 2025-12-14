/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((((((((~var_8) + 2147483647)) >> (((~var_4) - 7915565596453159653))))) ? (-106 + var_1) : var_3));
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 *= (~var_12);
        var_18 *= (~(((var_9 || 198062767) ? (var_9 && 37) : var_5)));
    }
    #pragma endscop
}
