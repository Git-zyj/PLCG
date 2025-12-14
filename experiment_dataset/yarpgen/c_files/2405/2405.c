/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_15 -= (!(arr_1 [i_0 + 3]));
        var_16 = (2147483647 | var_7);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_4 [1] = (max((arr_0 [i_1 + 3] [i_1 - 1]), (arr_1 [i_1 + 4])));
        arr_5 [i_1] = 3110;
        var_17 = (min(var_17, (~10841123863753320868)));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_18 = var_12;
        arr_10 [i_2] [i_2] = -1984369601;
        var_19 = 0;
    }
    var_20 = (max(var_20, var_0));
    #pragma endscop
}
