/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((-4344073489846311654 ? var_6 : (var_9 && 14734083588909351271)))) ? 36028796750528512 : var_9))));
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = ((min(var_4, 4344073489846311653)));
        var_14 = var_0;
        var_15 = (((~var_0) ? (var_10 / -36028796750528531) : (((arr_1 [i_0]) ? var_1 : var_5))));
    }
    #pragma endscop
}
