/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_14 = 4294967295;
        var_15 = (min(var_15, (((!3732713278) ? (!49006) : 81))));
        var_16 ^= 8539616412452249557;
    }
    var_17 = ((((min((max(var_10, 2572262754036513505)), -var_0))) ? -1 : (min((~var_1), var_1))));
    #pragma endscop
}
