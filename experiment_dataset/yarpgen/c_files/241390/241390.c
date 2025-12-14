/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_13 = (max(var_13, 1));
        var_14 = ((var_12 ? ((var_5 ? 83 : var_10)) : (((((arr_1 [i_0]) > (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = (min(var_15, (((((((-127 - 1) ? -103 : (arr_7 [i_1])))) ? (((arr_6 [i_1] [i_1]) ? 1 : ((max((arr_2 [i_1]), 1))))) : ((3478802305 ? (arr_2 [i_1]) : 173)))))));
        arr_8 [i_1] [i_1] = 107;
        var_16 = (min(var_16, (((36427 ? ((max((min(1, 14)), (arr_4 [i_1])))) : var_0)))));
    }
    var_17 |= (min(((max(-1658, 29108))), ((var_1 ? (1 * 36427) : (var_0 || var_10)))));
    var_18 = ((23 ? ((((-103 ? 2921280129 : var_9)))) : ((((15 - var_3) > var_7)))));
    #pragma endscop
}
