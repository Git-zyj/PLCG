/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((max(-17422, 2139095040))), ((var_14 ? ((min(var_3, var_12))) : var_3))));
    var_19 = (max(var_19, var_8));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = (max((max(2139095018, 53847)), var_14));
        var_21 ^= (min(((9403950746309545034 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0]))), (var_8 > var_12)));
        var_22 = ((((max(-1, 2130))) / 57));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_23 = -36;
        var_24 = (((((49016 ? var_14 : 0))) ? var_0 : var_9));
        var_25 = (max(var_25, var_5));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_26 = (~123);
        arr_8 [i_2] = ((((((arr_7 [i_2] [i_2]) ? (arr_0 [i_2]) : var_3))) ? ((var_2 ? var_12 : (arr_7 [i_2] [i_2]))) : (5028 || 0)));
    }
    #pragma endscop
}
