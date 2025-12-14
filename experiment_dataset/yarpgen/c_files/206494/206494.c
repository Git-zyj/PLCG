/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = (min(var_14, (((((((((var_5 ? var_5 : var_10))) ? (-6568 + 6563) : var_0))) >= (((var_2 < 6561) ? (((min(-6557, -6582)))) : var_12)))))));
    var_15 = ((~(((var_0 >= ((var_11 ? -6577 : var_0)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((((arr_2 [i_0]) + 2147483647)) >> (((arr_2 [i_0]) + 1706343372)))) % -6563)))));
        arr_3 [i_0] = (((max(var_10, (arr_2 [i_0])))) ? (((((arr_1 [i_0]) <= (arr_1 [i_0]))))) : (((arr_1 [i_0]) - var_7)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_17 = -6577;
        var_18 = (min(var_18, 6567));
        var_19 = (((arr_5 [i_1]) && (((~(arr_5 [i_1]))))));
    }
    var_20 = ((!((min((((6558 ? var_10 : -6557))), (max(var_4, 6533)))))));
    #pragma endscop
}
