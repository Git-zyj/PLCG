/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((min((min(var_13, -26427)), var_13)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_17 = 11;
        arr_4 [i_0] = (arr_3 [i_0]);
        var_18 += (((arr_2 [17] [i_0 + 1]) == (arr_2 [i_0] [i_0 + 1])));
        var_19 += (((var_15 > 215) * ((((arr_0 [i_0]) != (arr_0 [i_0]))))));
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        var_20 -= var_2;
        var_21 = ((var_1 <= (((arr_5 [i_1] [19]) ? (min(var_13, var_7)) : var_3))));
        arr_8 [11] = ((0 ? (((arr_3 [i_1]) ^ (arr_5 [i_1] [i_1]))) : var_6));
    }
    var_22 = (((max(var_11, var_8)) * ((((max(1, var_1))) >> (30 <= 14976338706622240438)))));
    #pragma endscop
}
