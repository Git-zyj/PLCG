/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += -var_13;
    var_16 = ((var_14 ? ((((~var_1) ? (min(204, var_10)) : 20))) : var_8));
    var_17 = (max(((-(var_11 + var_2))), -1));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (max(var_18, 1792));
        var_19 = (1758869030 / 204);
    }
    #pragma endscop
}
