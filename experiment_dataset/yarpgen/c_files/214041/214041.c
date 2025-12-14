/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 -= (max((((-((max((arr_1 [i_0]), (arr_1 [i_0]))))))), (((9223372036854775796 ? (arr_0 [i_0]) : var_0)))));
        arr_2 [i_0] = (max((((!((((arr_1 [i_0]) << (arr_1 [i_0]))))))), (max((-127 - 1), ((var_4 ? var_12 : (arr_0 [i_0])))))));
        arr_3 [i_0] = (max((max((arr_1 [i_0]), var_1)), (((-14302 ? (arr_0 [i_0]) : ((var_9 ? var_11 : var_11)))))));
    }
    var_14 = max(((((var_3 ? var_10 : var_6)))), (max(var_11, var_11)));

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_0;
        arr_7 [i_1] = 1824419613;
        arr_8 [i_1] = (((((max(14285, 2048))) ? 1824419613 : (65535 * 4133803438))));
        arr_9 [i_1] [i_1] = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] [i_2] |= (arr_0 [i_2]);
        arr_13 [i_2] = var_2;
    }
    #pragma endscop
}
