/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = 576460752303423487;
        var_13 -= (((((var_3 ? (arr_0 [i_0] [i_0]) : (max(1073741824, 1073741824))))) ? (arr_2 [i_0]) : (((arr_2 [i_0]) ? 128 : 128))));
        var_14 -= ((((min((arr_1 [i_0]), (arr_2 [i_0])))) ? (arr_2 [i_0]) : (arr_1 [i_0])));
    }
    var_15 ^= (max(var_5, ((17 ? (!var_1) : ((6827554961291194624 ? var_5 : var_1))))));
    var_16 -= var_9;

    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_17 -= (arr_3 [i_1 + 1]);
        var_18 = ((17846668477806730935 & (arr_2 [i_1 - 1])));
    }
    #pragma endscop
}
