/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = (min(((((arr_1 [i_0]) || (arr_2 [i_0 - 1])))), (min(((max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))), (255 | 217)))));
        arr_3 [i_0] = ((((var_11 > (arr_1 [i_0]))) ? ((((arr_1 [i_0]) == (arr_1 [i_0])))) : (13 | 160)));
        arr_4 [0] &= ((((((arr_1 [16]) & (arr_1 [16])))) ? (((arr_1 [10]) ? (arr_1 [6]) : (arr_1 [20]))) : (((arr_1 [6]) ? (arr_1 [4]) : (arr_1 [18])))));
        var_17 = (((arr_1 [i_0]) | ((25 ? 3 : 226))));
    }
    var_18 = var_4;
    #pragma endscop
}
