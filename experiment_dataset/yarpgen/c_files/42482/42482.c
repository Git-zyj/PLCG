/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = ((!(arr_1 [i_0 + 1])));
        arr_2 [0] [i_0] = (((arr_1 [i_0 - 2]) > (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 = (((0 ? 503377934 : (arr_4 [i_1] [i_1 - 2]))));
        arr_5 [i_1] = (((arr_1 [i_1]) ? (arr_3 [i_1] [i_1 - 2]) : (((1 ? (arr_1 [i_1 - 2]) : (((var_16 > (arr_3 [i_1 - 1] [1])))))))));
    }
    var_20 = var_8;
    #pragma endscop
}
