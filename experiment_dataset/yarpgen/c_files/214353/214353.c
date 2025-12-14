/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_3));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (min(var_18, (arr_0 [i_0])));
        var_19 = var_2;
        var_20 *= (min(((((arr_0 [i_0]) + (!var_7)))), (((arr_1 [i_0]) ? var_8 : var_1))));
    }
    var_21 = (-(((~var_4) ? -var_0 : var_2)));
    #pragma endscop
}
