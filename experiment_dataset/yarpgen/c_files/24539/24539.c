/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((-((var_7 ? 10986318516395474168 : var_6))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_12 = (arr_0 [i_0] [3]);
        arr_2 [12] |= 4746101637353360995;
        arr_3 [i_0] [i_0] = (max((arr_1 [i_0 - 1] [i_0]), (arr_0 [i_0] [i_0])));
        var_13 = 17179869183;
        arr_4 [i_0] = (((((arr_1 [i_0 - 3] [i_0]) ? -var_0 : (arr_1 [i_0] [i_0]))) | ((max((arr_1 [i_0 - 1] [i_0]), (arr_1 [i_0 - 3] [i_0]))))));
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = ((((arr_6 [13]) / (arr_6 [i_1]))));
        arr_8 [i_1] [i_1] = 17179869183;
        var_14 = (max(((1 * ((var_3 / (arr_6 [10]))))), -var_7));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_15 = (min((max(4746101637353360995, (arr_0 [i_2] [i_2]))), ((((arr_0 [i_2] [i_2]) / var_10)))));
        var_16 ^= (((arr_1 [i_2] [i_2]) / (arr_1 [i_2] [i_2])));
        var_17 = (min(var_17, (((-15673 ? ((var_7 | (arr_5 [i_2] [i_2]))) : ((((arr_10 [i_2]) ? (((!(arr_5 [i_2] [i_2])))) : ((~(arr_6 [1])))))))))));
        arr_11 [i_2] [i_2] = (arr_9 [i_2]);
    }
    #pragma endscop
}
