/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0 + 4]);
        var_10 |= (arr_0 [i_0] [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] |= (arr_5 [i_1 - 4] [i_1 + 1]);
        arr_8 [i_1] = (((arr_6 [i_1 + 1] [i_1 - 4]) ? (arr_4 [i_1 - 1]) : var_0));
        var_11 ^= ((1 ? 25422 : 151));
    }
    var_12 = (max((((~((max(var_1, var_9)))))), var_5));
    var_13 = ((var_8 ? (max(((var_2 ? var_5 : 240)), (!var_1))) : ((((!((max(var_5, var_1)))))))));
    var_14 = 49291;
    var_15 += (max((max((var_7 <= var_4), var_3)), (max((max(var_0, 4294967295)), (((-32759 ? 0 : 25422)))))));
    #pragma endscop
}
