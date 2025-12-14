/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))) * (!var_13))) <= (arr_1 [i_0]));
        var_14 = (min(var_14, (((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) || (((-21700 ? 4803042034106967254 : 7676366224639377930))))))));
        var_15 = var_0;
        arr_3 [i_0] = var_5;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_16 = 588176636;
        var_17 = (+(((!var_13) ? ((((!(arr_5 [i_1]))))) : ((3706790645 ? (arr_0 [i_1] [4]) : var_7)))));
    }
    var_18 = (max(var_18, 52));
    #pragma endscop
}
