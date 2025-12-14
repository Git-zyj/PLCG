/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 752802399;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((min((((!(arr_0 [i_0] [i_0])))), (min(1, 143)))))) & (min((var_6 && var_13), (var_1 ^ var_0)))));
        var_18 |= ((((!(arr_0 [i_0 + 2] [i_0 - 3]))) && (((var_5 << (!1))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = (min(var_19, ((((arr_3 [i_1]) ? (arr_1 [i_1]) : var_11)))));
        var_20 = var_2;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_21 = -128;
        var_22 |= max((!1), (1 && 1));
        arr_8 [i_2] = (!var_6);
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_11 [i_3] |= (((arr_10 [i_3]) == ((1 ? 1 : (arr_10 [i_3])))));
        var_23 = ((!(!1)));
    }
    var_24 = var_6;
    var_25 *= 0;
    #pragma endscop
}
