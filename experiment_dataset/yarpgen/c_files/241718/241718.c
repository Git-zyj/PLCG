/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (max(var_13, var_4));
        arr_2 [i_0] [i_0] = (((((~((~(arr_1 [i_0])))))) ? (((~(arr_1 [i_0])))) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_14 -= ((-((-(arr_5 [i_1] [1])))));
        var_15 = (max(var_15, var_10));
        arr_6 [1] [i_1] = (arr_4 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_16 = ((16777215 ? 65526 : 32758));
        var_17 = ((!((((!1964139479) | 8)))));
    }
    var_18 = (max(var_18, (((var_11 * (!var_4))))));
    #pragma endscop
}
