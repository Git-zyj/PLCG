/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = min(-1222344422, (((arr_0 [i_0]) * 5492)));
        var_17 = ((!((min((arr_1 [i_0] [10]), -54)))));
        var_18 -= 64;
    }
    var_19 += (min(((((-4222784886237086955 + 52) || 7774039881046001745))), (min(-54, -65))));
    var_20 = 23157;
    var_21 = 79;
    #pragma endscop
}
