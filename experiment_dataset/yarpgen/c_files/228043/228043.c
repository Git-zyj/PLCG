/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_4;
    var_11 = (max(var_11, (((((((~var_0) < (var_2 ^ 121)))) * var_6)))));

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_12 = (max((var_1 % var_4), ((((arr_1 [i_0 + 1] [i_0 + 1]) > (arr_0 [i_0 + 1]))))));
        arr_2 [i_0] = (max(-573948761, (((arr_1 [i_0] [i_0 + 1]) ? 14585653460845428015 : 16097738105565755177))));
        arr_3 [i_0 - 4] [5] &= -19257;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 = 21195;
        var_14 = (min(var_14, ((max((min(var_9, (arr_4 [i_1]))), (arr_5 [i_1]))))));
        var_15 = max((min(-21224, 6494367403212788889)), (arr_6 [i_1]));
        var_16 = (max(var_16, (((-((var_5 ? (arr_5 [i_1]) : (arr_5 [i_1]))))))));
    }
    var_17 = var_7;
    #pragma endscop
}
