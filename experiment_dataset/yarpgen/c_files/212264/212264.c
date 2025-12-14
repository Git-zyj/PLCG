/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((11700853260713939723 ? 7586990845744787032 : var_2))) + (~1)));
    var_16 = (~-93);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = var_12;
        var_18 = ((((53 ? (arr_0 [i_0 + 2]) : (arr_1 [i_0 - 1])))) && ((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 1])))));
        var_19 = max((arr_0 [i_0 + 2]), ((~(((arr_1 [i_0]) ? var_11 : 0)))));
    }
    #pragma endscop
}
