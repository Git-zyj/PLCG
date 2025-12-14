/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 -= (((-30926 + 2147483647) >> ((min((arr_0 [i_0]), 19)))));
        var_19 = ((max(((var_2 ? var_0 : -30926), (((~(arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = (min(var_20, (((((((arr_0 [i_1]) ? -2147483636 : ((var_1 ? (arr_3 [i_1]) : var_7))))) ? var_14 : (arr_2 [i_1]))))));
        var_21 = -2147483639;
        var_22 = 19;
    }
    var_23 = ((~(max(var_16, ((max(-30944, var_12)))))));
    var_24 = (max(var_24, ((min((!var_16), (!var_3))))));
    #pragma endscop
}
