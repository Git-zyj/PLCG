/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((((((min(0, 310424414)) < var_9)))) & var_10)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = var_5;
        var_18 = max((min(-var_10, (57 * 2026884594))), (((var_5 ? 127 : (!var_14)))));
    }
    var_19 -= (min((max(((-95 ? var_5 : var_13)), var_0)), var_7));
    #pragma endscop
}
