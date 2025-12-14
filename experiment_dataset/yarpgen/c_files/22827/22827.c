/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_16 = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_2 [i_0] = var_14;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (~((max((arr_4 [i_1]), var_7))));
        var_17 = (arr_3 [i_1] [i_1]);
        arr_7 [i_1] = ((((((arr_0 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_5 [i_1] [i_1])))) ? (((!(!var_14)))) : (arr_4 [12])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_18 = ((((((!(arr_9 [i_2] [i_2]))))) ? ((((((var_7 ? (arr_4 [i_2]) : (arr_3 [i_2] [i_2])))) && (((var_9 ? var_12 : (arr_3 [i_2] [19]))))))) : (((arr_3 [i_2] [i_2]) | (var_15 | 5459)))));
        var_19 = (((arr_3 [i_2] [i_2]) != ((min((arr_10 [i_2]), (arr_5 [i_2] [i_2]))))));
    }
    var_20 = var_4;
    #pragma endscop
}
