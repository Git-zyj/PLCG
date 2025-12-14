/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((((!-3005) ? ((var_5 ? -22 : var_0)) : -9)) * (((min(var_0, var_12))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((min(38980, 1))) ? (((!1) & (var_8 < 1))) : ((~(var_15 || 1))));
        var_19 = (min(var_13, (arr_2 [i_0] [9])));
    }
    var_20 = var_11;
    #pragma endscop
}
