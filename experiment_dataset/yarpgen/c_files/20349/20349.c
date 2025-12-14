/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_10 += (((((min(var_2, var_7)))) ? (((-7161376584381957864 ? -7161376584381957864 : 127))) : (((((58338 ? var_8 : var_8)) % (((((arr_1 [17]) + 2147483647)) << (115 - 115))))))));
        var_11 ^= ((-((7208 ? var_3 : (arr_0 [i_0])))));
    }
    var_12 &= (!((-7198 <= (~var_7))));
    #pragma endscop
}
