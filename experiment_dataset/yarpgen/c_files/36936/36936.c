/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((((!(arr_1 [i_0] [i_0]))) ? ((((arr_1 [5] [i_0]) ? (((arr_2 [i_0]) ? var_10 : var_0)) : (arr_2 [i_0])))) : (((arr_2 [i_0]) ? var_9 : (arr_0 [i_0])))));
        var_14 &= (((((-18446744073709551615 / (arr_0 [i_0])))) ? (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0]))) : ((((((var_6 ? (arr_1 [11] [11]) : 0))) ? -16 : (((arr_1 [i_0] [i_0]) ? var_5 : (arr_2 [11]))))))));
        var_15 = (((((arr_1 [i_0] [i_0]) ? 455171899899691461 : ((var_12 ? (arr_0 [i_0]) : (arr_2 [i_0])))))) ? (((((arr_0 [i_0]) == var_6)))) : (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0]))) ^ -1)));
    }
    var_16 = var_5;
    #pragma endscop
}
