/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 &= ((((((arr_2 [8] [i_0 + 1]) < (arr_2 [4] [i_0 + 1])))) | (((arr_1 [i_0 + 2]) | (arr_1 [i_0 - 2])))));
        arr_3 [i_0] = (~-304536075);
        var_21 = (max(var_21, var_16));
        var_22 = (min(var_22, -6924));
    }
    var_23 = (~var_3);
    var_24 = (max(var_4, (((~var_11) ? (var_2 && var_19) : var_8))));
    #pragma endscop
}
