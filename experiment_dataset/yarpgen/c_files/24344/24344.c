/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~((-var_9 ? (max(3912825796, 109)) : (!var_5)))));
    var_21 = (min((((!var_7) ? -var_5 : ((var_11 ? 28 : var_15)))), (((~((max(109, 118))))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_22 = min((!-7), 11802327521634894686);
        var_23 = (~var_2);
    }
    #pragma endscop
}
