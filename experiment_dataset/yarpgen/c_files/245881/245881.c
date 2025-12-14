/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_14 += (((((((max(73, var_6))) << (((max(var_13, var_3)) - 18446744073709539819))))) ? (((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2]))))) : ((min(4095, (arr_2 [i_0 + 2]))))));
        var_15 = (max(var_15, var_10));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_16 = (198 % -1);
        var_17 = (((4294967279 / 77) ? (min((((arr_4 [i_1]) ? 61459 : (arr_0 [i_1] [i_1]))), (~9358))) : (((var_1 == (arr_0 [i_1] [i_1]))))));
        var_18 += ((!((max((arr_2 [i_1]), 15246532409691832510)))));
    }
    var_19 = var_5;
    var_20 = (min(var_11, ((~(max(var_10, var_10))))));
    var_21 = var_4;
    #pragma endscop
}
