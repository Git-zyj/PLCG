/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_12 = ((((((arr_0 [i_0]) ^ var_10))) ? (arr_1 [i_0] [i_0 + 3]) : var_6));
        var_13 += ((var_4 ? (arr_0 [i_0 + 2]) : var_10));
        var_14 = ((var_0 ? (arr_2 [i_0 + 3]) : (arr_2 [i_0 + 2])));
        var_15 = ((-17126 ? 3332352 : 1));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = ((~(var_0 && var_4)));
        var_16 = (max(var_16, ((min((arr_4 [i_1 - 3]), (arr_4 [i_1 - 2]))))));
    }
    var_17 *= ((var_5 ? (((var_0 ? var_3 : var_4))) : ((var_10 ? ((var_0 ? var_5 : var_0)) : (((var_0 ? var_4 : var_9)))))));
    var_18 += (((((9442 ? 1914675789 : 248))) ? var_1 : ((min(var_9, var_1)))));
    #pragma endscop
}
