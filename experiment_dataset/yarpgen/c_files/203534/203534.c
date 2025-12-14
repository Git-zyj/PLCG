/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = min(-8306351186212606610, var_8);
        var_13 = (min((((8306351186212606610 ? 1 : 2046041599114732008))), ((min((arr_1 [i_0 - 3]), 36)))));
        var_14 *= ((-15953 ? 2143680399 : -8306351186212606610));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 += (((arr_3 [i_1]) ^ ((49253 ? (arr_3 [i_1]) : var_4))));
        arr_5 [i_1] = (66 >= -2046041599114732002);
    }
    var_16 = var_11;
    var_17 = ((((var_2 - var_2) != var_8)) ? (((173 & var_9) * (var_4 < var_4))) : (min((min(1617771913, var_1)), (var_2 && var_1))));
    var_18 = var_9;
    #pragma endscop
}
