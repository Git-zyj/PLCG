/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_6 ? ((var_12 ? var_11 : var_8)) : (!var_12))) - ((((2754763783 && 35961) / -1317764315)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = (max(var_15, (((var_9 ? (arr_4 [i_0]) : (arr_2 [i_0]))))));
            var_16 = (min(var_16, (((((((arr_5 [i_0] [1]) * (arr_5 [10] [i_1])))) ? (((max((arr_5 [i_0] [i_1]), (arr_5 [i_1] [i_1]))))) : (arr_5 [i_0] [i_1]))))));
            arr_6 [10] = ((((((arr_1 [i_0] [i_0]) ? ((var_12 ? (arr_4 [i_1]) : (arr_5 [2] [i_1]))) : var_10))) ? ((((!(arr_1 [i_0] [i_1]))))) : (((arr_5 [i_0] [i_1]) - (((arr_5 [7] [i_1]) ? (arr_3 [i_0] [i_0]) : 1755411131))))));
            var_17 = ((((max((arr_2 [i_0]), (arr_5 [i_1] [i_0])))) & (arr_4 [i_1])));
        }
        var_18 = ((((((arr_3 [i_0] [i_0]) ? (arr_5 [i_0] [3]) : (arr_2 [i_0])))) ? ((var_2 ? (arr_5 [i_0] [i_0]) : var_6)) : (arr_2 [i_0])));
    }
    #pragma endscop
}
