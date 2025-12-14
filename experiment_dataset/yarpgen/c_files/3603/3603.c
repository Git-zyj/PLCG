/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((7217728205742466891 ? var_19 : var_8)))) / var_19));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (~var_6);
        arr_4 [i_0] = (~1);
        arr_5 [i_0] = (3 && var_19);
        var_21 = (arr_1 [i_0] [i_0]);
        var_22 = (!var_5);
    }
    #pragma endscop
}
