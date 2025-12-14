/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min(var_7, var_1)))) != ((138 ? var_12 : 11935))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 = ((11827 / (-2147483647 - 1)));
        arr_4 [2] &= (arr_0 [i_0]);
        arr_5 [i_0] = ((!(((92 ? var_12 : var_3)))));
        arr_6 [i_0] = ((!(((arr_1 [2]) <= (arr_2 [i_0] [i_0 + 1])))));
        var_15 = ((-var_1 ? ((11481959337993499650 ? 53687 : (arr_0 [i_0]))) : -var_4));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_16 = (((arr_3 [i_1 + 1]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 - 1])));
        arr_9 [i_1] [i_1] = ((var_4 ? (var_5 | var_7) : 2147483647));
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_17 = ((~((~((max(var_10, var_11)))))));
        var_18 = (arr_8 [i_2] [6]);
    }
    var_19 = (~-849403954);
    #pragma endscop
}
