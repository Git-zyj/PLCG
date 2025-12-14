/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (((((arr_1 [i_0]) ? var_19 : (arr_1 [2]))) != (-9223372036854775807 - 1)));
        var_22 = (((arr_0 [i_0] [i_0]) <= (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = (((((var_10 - (arr_4 [i_1])))) ? var_13 : var_3));
        var_23 = (((((max(34292629504, (arr_5 [i_1] [i_1]))))) ? (((arr_7 [i_1]) / (((18 ? (arr_7 [i_1]) : 682249806))))) : (arr_4 [i_1])));
        arr_9 [i_1] = ((!(arr_5 [i_1] [i_1])));
        var_24 = (max(3030056140, 3612717497));
    }
    var_25 = (~((var_9 - (var_18 | var_16))));
    #pragma endscop
}
