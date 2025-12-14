/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((max(((var_3 ? 1 : var_4)), (max(var_10, 1)))) ^ (min((~1304), var_1))));
    var_12 -= (max((((var_5 <= (((min(1, 14))))))), (max(((65535 ? var_1 : var_8)), var_1))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_13 |= (min((min((arr_1 [i_0]), (arr_0 [i_0]))), 1));
        var_14 = (min(var_14, 1));
        var_15 = (max(var_15, ((((((8797359512975182133 ? (arr_1 [i_0 - 2]) : 13174))) ? (arr_0 [i_0 - 2]) : (min((arr_1 [i_0 + 1]), (arr_0 [i_0 + 1]))))))));
        var_16 = (min((min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 2]))), (((-((min((arr_1 [i_0 - 2]), (arr_1 [i_0])))))))));
        arr_2 [6] = (min(1, (((arr_0 [i_0 + 2]) ? (arr_1 [2]) : (min((arr_0 [i_0]), var_1))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1 + 3] [11] = (((arr_3 [i_1 + 4] [i_1 - 1]) ? 8797359512975182133 : (((-(min((arr_3 [i_1 + 4] [i_1]), 25733)))))));
        var_17 = (max(var_17, (((~(arr_3 [i_1] [18]))))));
    }
    #pragma endscop
}
