/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((((min((arr_0 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) >> (((min(1089623688, -31)) + 44))));
        var_13 = (((((arr_1 [i_0] [1]) ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0] [i_0])))) ? ((min((arr_3 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : (((arr_1 [i_0] [i_0]) / (arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((-(((arr_4 [i_1]) | (arr_4 [i_1])))));
        var_14 = (min(((((max(-1089623689, -771063388))) ? (arr_5 [i_1]) : var_6)), (((!(1089623666 != 3984))))));
        var_15 = (max(var_15, (((((min(var_7, (arr_4 [i_1])))) ? ((1089623688 ? (arr_4 [i_1]) : (max(15, -1089623688)))) : (arr_5 [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_16 |= (arr_0 [i_2 - 1] [i_2 - 1]);
        arr_9 [i_2] = ((~(min(var_7, -2))));
    }
    var_17 = ((var_4 - ((min((9223372036854775807 - var_2), ((min(var_10, var_3))))))));
    var_18 = var_0;
    #pragma endscop
}
