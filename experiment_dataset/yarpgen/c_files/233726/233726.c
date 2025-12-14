/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_0));
    var_19 = ((-114 ? -5471716787597708871 : -5471716787597708852));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 = -1;
        var_21 |= (!-7594425657312349836);
        var_22 -= ((1 ? 1 : 181099605));
    }
    #pragma endscop
}
