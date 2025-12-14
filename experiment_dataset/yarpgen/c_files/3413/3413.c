/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min((((~var_7) ? (((var_6 ? var_4 : var_17))) : var_3)), var_2)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 -= ((max(var_2, (arr_1 [i_0]))));
        arr_2 [i_0] = (arr_0 [1] [i_0]);
        var_20 = ((16380 ? var_17 : (min(((max(252, (arr_1 [i_0])))), -5926434760853135459))));
        var_21 = var_2;
    }
    #pragma endscop
}
