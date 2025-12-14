/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((min(var_4, var_1))) ? var_9 : (min((-9223372036854775807 - 1), 14)))) != (((-122 ? (~var_16) : var_14)))));
    var_18 = 9223372036854775783;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_19 *= (-2147483647 - 1);
        var_20 = ((-((4 ? 31 : -3732149552544153250))));
        var_21 &= ((~(min(2147483647, 16871096180337313294))));
        var_22 = var_4;
        var_23 = -var_6;
    }
    var_24 = (max(var_24, -1));
    #pragma endscop
}
