/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(((max(7, var_8))), -622107971)) != ((min(17733, var_8)))));
    var_16 = (min(var_16, 156));
    var_17 = (max(71, 34968));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = ((((min(30568, 245))) ? 71 : var_9));
        var_19 -= (max((min((-12210 < 402653184), ((var_6 ? var_2 : 1)))), var_9));
        var_20 -= (min(-17730, (min(var_2, (-9223372036854775807 - 1)))));
    }
    #pragma endscop
}
