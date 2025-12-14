/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (min(var_20, ((((arr_0 [i_0 - 1] [20]) >> (var_3 - 8142555047969264474))))));
        var_21 = ((var_18 + (arr_1 [i_0 - 1])));
    }
    var_22 = (max(var_22, (((var_6 != (((var_13 >= var_14) + var_8)))))));
    var_23 = ((var_1 ? (((((var_3 ? var_19 : var_14))) ? (!var_12) : (~var_16))) : ((((var_10 > var_14) != var_4)))));
    var_24 *= ((((((min(var_3, var_7))) ? (((var_17 + 2147483647) << (((var_14 + 132) - 8)))) : var_4)) > var_18));
    #pragma endscop
}
