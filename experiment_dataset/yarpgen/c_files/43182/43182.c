/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_0));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 |= (max((max(-18199, (arr_3 [i_0 + 1]))), (arr_2 [i_0 - 1])));
        var_20 = ((((max((var_7 * var_2), var_6))) ? var_3 : 2091532856));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = var_8;
        var_22 = (max((((((arr_5 [i_1] [i_1]) ? (arr_4 [i_1]) : var_5)) != (max((arr_4 [i_1]), (arr_4 [i_1]))))), ((var_7 != ((~(arr_4 [i_1])))))));
        var_23 &= (max(((((var_9 + var_9) - ((var_0 ? var_15 : var_17))))), (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [22] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_8 [i_2] = ((((arr_6 [i_2] [i_2]) ? (arr_7 [i_2]) : (arr_5 [13] [i_2 + 2]))) ^ (arr_5 [i_2] [15]));
        var_24 = (arr_6 [i_2 - 1] [i_2 + 1]);
    }
    #pragma endscop
}
