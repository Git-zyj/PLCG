/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] = var_14;
        arr_3 [i_0] = min(var_14, (((-1 + var_10) / var_9)));
        arr_4 [8] = (((-9223372036854775807 - 1) == -4830202093557518768));
        var_15 -= min((-18 / var_8), (min(-4830202093557518768, var_12)));
    }
    var_16 -= 48;
    #pragma endscop
}
