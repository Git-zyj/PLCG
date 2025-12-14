/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min(var_5, ((31 ? var_3 : var_10)))), ((((max(var_5, var_0)) != var_3)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_14 = (min(var_14, (((var_0 ? 34171 : (arr_1 [i_0 - 1] [i_0]))))));
        arr_2 [1] = (var_8 << (30404 - 30389));
        var_15 = (-23381 ? 4561037662300843299 : 1048576);
        var_16 -= var_5;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 += (((((var_1 ? ((var_0 ? 65535 : (arr_3 [i_1]))) : ((4611404543450677248 ? (arr_4 [i_1]) : (arr_4 [i_1])))))) ? var_4 : ((((((277076930199552 & (arr_3 [i_1])))) ? ((var_6 ? (arr_3 [i_1]) : var_2)) : (((var_6 + 2147483647) << var_11)))))));
        var_18 = ((((((max((arr_3 [1]), var_2))) && (arr_3 [i_1]))) ? (((var_3 || (arr_3 [i_1])))) : (((arr_4 [i_1]) ? 48 : (arr_4 [i_1])))));
        var_19 ^= var_0;
    }
    var_20 = ((var_1 ? (min(var_4, var_11) : (((var_1 ? var_9 : 0))))));
    #pragma endscop
}
