/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_10 = (max(var_10, ((((arr_0 [18]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1]))))));
        arr_2 [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {
        var_11 = (20198 - var_2);
        var_12 = (((arr_4 [i_1 + 2]) ? (arr_4 [i_1 + 2]) : var_7));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        var_13 |= (max((max(5300005800134885879, -1951344469)), var_8));
        arr_7 [20] [i_2] |= ((~(((var_9 | var_4) ? (arr_5 [i_2]) : -564606083))));
    }
    var_14 = var_4;
    var_15 = 19921;
    #pragma endscop
}
