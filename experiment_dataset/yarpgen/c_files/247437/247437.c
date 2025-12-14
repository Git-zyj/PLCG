/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = (((~3600794647) >= -34831));
        var_11 = (max((arr_0 [i_0]), var_4));
    }
    var_12 += (((-31362 + 2147483647) << (((min(436971496547530992, var_7)) - 54411))));
    #pragma endscop
}
