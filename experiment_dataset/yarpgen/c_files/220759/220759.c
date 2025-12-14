/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(-var_5, var_5));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 |= (max((((4 ? 7371 : 58165))), 11033494469989240583));
        arr_2 [i_0] = (((((var_0 / (max(-1, var_0))))) ? (arr_1 [i_0 - 1]) : 904447632));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_14 = (min(var_14, (arr_5 [i_1 + 1])));
        arr_6 [i_1] = (-var_10 ? ((1 ? 0 : 2267682306)) : (!var_8));
        var_15 = var_6;
    }
    var_16 = (min(var_16, var_3));
    var_17 = 7371;
    var_18 = (min(var_0, var_4));
    #pragma endscop
}
