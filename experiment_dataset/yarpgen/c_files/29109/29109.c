/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (((((((max(var_8, var_2))) * var_2))) ? var_10 : ((-(var_7 ^ 0)))));
        var_13 = min(1208450855, (((~(!var_8)))));
        var_14 = (var_5 ? ((((((var_10 ? var_9 : var_3))) ? 47616 : ((min(-9728, var_3)))))) : ((var_5 & (((-18390 ? 1 : var_0))))));
        var_15 &= ((((((46044 << (var_2 - 8837)))) ? (~var_2) : ((var_10 ? var_6 : 17320587102886448979)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = -244;
        var_17 = (~12496000454604897596);
        var_18 = 1126156970823102638;
    }
    #pragma endscop
}
