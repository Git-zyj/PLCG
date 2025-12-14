/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    var_20 = var_15;
    var_21 = ((var_12 == var_13) ? (((((min(var_12, var_8)) + 2147483647)) << (var_12 * var_16))) : var_1);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((max(-5533876637166820017, ((max((arr_1 [i_0]), (arr_2 [i_0]))))))) ? (min((arr_3 [i_0]), ((21 & (arr_1 [i_0]))))) : var_16));
        var_22 = (arr_3 [i_0]);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_23 = ((((((103 ? (arr_6 [i_1] [i_1]) : var_8)))) && ((min(((min(var_18, var_8))), (arr_6 [i_1] [i_1]))))));
        var_24 *= (arr_6 [14] [i_1]);
    }
    #pragma endscop
}
