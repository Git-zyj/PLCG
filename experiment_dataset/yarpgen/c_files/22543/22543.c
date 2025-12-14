/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(-1, 1);
    var_11 = (max(var_11, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (min(var_12, (((var_8 ? -1 : ((var_5 ? var_3 : var_7)))))));
        var_13 = var_7;
        var_14 = ((var_2 ? ((var_4 ? var_5 : var_8)) : (~0)));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_15 *= (max((((!((max(-1, 6973)))))), 0));

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_16 = (max(((16 >> ((((58 ? var_0 : 35753)) - 5525676965185353392)))), 8660));
            var_17 = ((-7997480682195352693 ? ((48815 ? -116 : 0)) : 1465249113));
        }
    }
    #pragma endscop
}
