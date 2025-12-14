/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 ? ((var_11 ? var_0 : (1787127312807571314 / var_4))) : (1 == -1787127312807571314)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 &= ((((arr_1 [4]) ^ var_2)));
        var_18 = 20731;
        var_19 = (arr_2 [0]);
    }
    var_20 = (max(var_20, 17886306422641367787));

    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_21 = (min((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))), (arr_3 [i_1])));
        var_22 = (arr_4 [i_1] [i_1]);
        var_23 = ((-20725 | ((10620165158952805674 ^ (arr_4 [i_1] [i_1])))));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_24 = (arr_8 [11] [i_2 + 1]);
        var_25 = ((((max(16744448, var_7))) ? (((min((arr_6 [i_2 - 1]), (arr_6 [i_2 + 2]))))) : (arr_7 [0] [i_2])));
    }
    #pragma endscop
}
