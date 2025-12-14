/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = (max(var_18, (((((var_9 ? ((-113 ? -114 : 114)) : var_8)) + -115)))));
        arr_3 [i_0] = ((2515639489 ? ((-(!var_7))) : (arr_1 [4] [4])));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = ((~(arr_5 [i_1] [i_1])));
        var_19 = ((~(((arr_0 [i_1 - 1]) % (arr_0 [i_1 - 1])))));
        var_20 -= (((((var_7 ? ((1 ? (arr_5 [i_1] [19]) : -30673)) : (arr_0 [i_1 + 1])))) ? var_8 : (((((var_9 / (arr_1 [i_1] [i_1])))) ? (arr_1 [i_1 + 2] [i_1 + 3]) : ((min((arr_5 [i_1 - 1] [i_1 - 1]), (arr_1 [5] [i_1 + 3]))))))));
        var_21 = ((-(arr_5 [i_1] [i_1])));
    }
    var_22 ^= (!29953);
    var_23 = (max((!1), (var_7 * var_7)));
    var_24 |= (-114 / 1264777460);
    var_25 = var_12;
    #pragma endscop
}
