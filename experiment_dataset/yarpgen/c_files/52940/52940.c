/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_10;
        var_17 += (((((-(-63 <= var_0)))) <= 5015817116826202733));
        arr_3 [i_0] = ((-(11 != 4294967279)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (max(((var_10 ? (arr_5 [i_1]) : (arr_4 [i_1]))), (((~(arr_5 [i_1]))))));
        var_18 += (((((-117 ? 5 : 2292))) ? (arr_4 [i_1]) : ((((var_16 < (((arr_4 [i_1]) ? 2 : var_13))))))));
        arr_7 [1] = (((arr_5 [i_1]) != (max((max((arr_4 [i_1]), var_9)), ((((arr_5 [12]) ? (arr_5 [i_1]) : 4294967269)))))));
    }
    var_19 &= (min((min(((var_1 ? var_3 : var_7)), (var_11 && var_13))), var_15));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_20 &= (((arr_1 [i_2]) ? (arr_4 [i_2]) : (arr_1 [i_2])));
        var_21 = (min(var_21, (((~(((arr_5 [i_2]) ? 81 : var_14)))))));
        arr_12 [i_2] = (((arr_4 [i_2]) ? (arr_8 [i_2]) : var_13));
        var_22 &= ((var_7 ? var_2 : (((1 ? 23063 : 1)))));
    }
    #pragma endscop
}
