/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_15 = (((-31146 ? 211 : -20220196)));
        var_16 = (max(var_16, (((((var_8 >> (((arr_2 [i_0]) - 58521)))) % var_7)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (min((max(4, (arr_2 [i_1]))), (((var_0 ? (arr_2 [i_1]) : (arr_2 [i_1]))))));
        var_17 ^= var_3;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_18 = var_8;
        arr_11 [0] = (((((var_6 ? ((var_13 ? (arr_10 [i_2] [i_2]) : var_11)) : var_1))) ? (((arr_2 [i_2]) ^ 18132420855481126117)) : (((((arr_9 [i_2]) <= (arr_9 [i_2])))))));
        arr_12 [i_2] |= (max((((((min(var_3, var_9))) ? 37689 : (var_7 * var_8)))), var_0));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        arr_17 [i_3] = (((((var_8 ? (arr_13 [i_3] [i_3]) : (arr_16 [i_3])))) ? (arr_16 [i_3]) : (arr_13 [i_3] [i_3 + 2])));
        arr_18 [i_3 + 1] [i_3] |= ((-((var_6 ? (arr_16 [i_3]) : var_9))));
    }
    #pragma endscop
}
