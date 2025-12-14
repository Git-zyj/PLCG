/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 64;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((min(191, (!18446744073709551615))))) < ((((min(var_7, var_6))) ? 3605528788343429058 : -107)))))));
        var_16 = (max(var_16, var_12));
    }
    var_17 ^= (min(var_7, ((((391341888 || 12) | 30642)))));
    var_18 = var_13;
    #pragma endscop
}
