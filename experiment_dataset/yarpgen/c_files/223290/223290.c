/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((0 >> 1) ? (max(1, 3304032661)) : 73)), var_1));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_11 = (((arr_2 [i_0 - 1]) / var_0));
        var_12 = (((((var_9 ? 1 : var_0)))) ? (((var_0 >= var_8) ? (var_4 % -1156116466) : var_0)) : (arr_2 [i_0 + 3]));
        var_13 = var_1;
        var_14 = (max(var_14, ((min(((((((((arr_0 [i_0] [i_0]) + 2147483647)) >> (((arr_0 [i_0 + 2] [7]) + 23))))) ? (arr_3 [i_0]) : (arr_1 [i_0]))), (((((var_2 ? var_8 : (arr_3 [i_0])))) ? (235 == var_3) : (((arr_0 [i_0] [i_0]) ? (arr_3 [8]) : (arr_3 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_15 = (min(var_15, ((((arr_5 [i_1]) ? (arr_2 [i_1]) : (max((arr_3 [i_1]), (min(var_9, 3563723501)))))))));
        arr_6 [i_1] = var_7;
    }
    var_16 += 134;
    #pragma endscop
}
