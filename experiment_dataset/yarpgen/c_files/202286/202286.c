/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 65535;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_15 += ((((max(25, (max((arr_0 [4]), (arr_1 [1])))))) ? ((max(var_1, (arr_0 [6])))) : (min((((arr_0 [8]) ? -32751 : (arr_0 [1]))), 65512))));
        arr_3 [i_0] = (min((max((((arr_0 [i_0]) / (arr_1 [i_0]))), -1178906649)), (var_1 / 20770)));
        var_16 = (max((((((-1958186729 ? (arr_1 [i_0]) : var_9))) || (arr_1 [i_0]))), ((((!(arr_1 [i_0]))) || ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = ((((arr_5 [i_1] [0]) ? var_2 : var_10)) == ((244 ? (arr_4 [i_1]) : (arr_5 [i_1] [i_1]))));
        arr_6 [i_1] [i_1] = ((((44765 & (arr_4 [i_1])))) & (((arr_5 [i_1] [i_1]) ? 339868614 : (arr_4 [i_1]))));
        var_18 |= (((~(arr_4 [8]))));
    }
    var_19 = (max(var_11, (((!4294967295) ? ((0 ? 10 : var_11)) : (((var_0 ? var_9 : var_0)))))));
    #pragma endscop
}
