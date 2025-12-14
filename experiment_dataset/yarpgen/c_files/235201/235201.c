/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (max(var_16, (((min(((11562 ? -2547319272978202144 : 26), (min((arr_2 [i_0]), var_6)))))))));
        var_17 = ((((((arr_0 [i_0]) ? (((arr_2 [i_0]) ? var_8 : (arr_0 [i_0]))) : ((max(var_5, var_11)))))) ? var_1 : (((((!(arr_0 [i_0]))) || ((!(arr_2 [i_0]))))))));
        arr_3 [i_0] = ((((!((!(arr_0 [i_0])))))));
        var_18 = (((max(((var_12 ? var_4 : var_7)), (((46751 ^ (arr_2 [i_0]))))))) ? ((((((arr_0 [i_0]) ? (arr_2 [1]) : 235))) ? (arr_1 [i_0] [i_0]) : 8493637240604514971)) : (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 = (arr_2 [i_1 + 4]);
        var_20 = (((((arr_0 [i_1]) || var_9)) ? (((arr_2 [i_1]) ? 34 : var_15)) : (arr_5 [8])));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = var_4;
        arr_9 [i_2 - 1] = ((+((268435455 ? (((arr_6 [i_2]) << (((arr_7 [15]) - 8632784856026917544)))) : ((7294380126370607032 ? 9084 : -18192))))));
    }
    var_21 = var_6;
    var_22 = ((!((min((~var_15), var_8)))));
    var_23 = var_14;
    #pragma endscop
}
