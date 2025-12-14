/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (((min((arr_0 [14]), (arr_1 [i_0]))) == (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        arr_2 [i_0] = (((((0 ? 0 : (min((arr_1 [i_0]), 4294967295))))) ? 1 : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        var_14 = ((var_9 ? (min((arr_1 [i_0]), ((((arr_0 [i_0]) == (arr_1 [i_0])))))) : ((0 ? 4294967295 : 0))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = var_7;
        var_15 = arr_4 [i_1 - 2];
        var_16 = 1;
    }
    var_17 = -var_10;
    var_18 = min(((var_2 ? ((-18 ? 480 : var_1)) : (((4294967295 ? var_5 : var_8))))), var_3);
    #pragma endscop
}
