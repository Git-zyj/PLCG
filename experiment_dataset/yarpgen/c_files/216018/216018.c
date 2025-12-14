/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(-67, (-2147483647 - 1)));
        var_21 = (((((min((arr_2 [i_0]), var_16)))) / ((max((min(50, 1)), (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = var_19;
        var_22 -= (max(74, (arr_2 [i_1])));
        var_23 = (min(var_23, (((((((arr_5 [i_1]) ? var_3 : (arr_2 [i_1])))) ? (((min(64, -67)))) : ((min((arr_2 [i_1]), (arr_2 [i_1])))))))));
        arr_8 [i_1] [i_1] = ((!(((~(-9223372036854775807 - 1))))));
    }
    var_24 &= (~(~var_8));
    #pragma endscop
}
