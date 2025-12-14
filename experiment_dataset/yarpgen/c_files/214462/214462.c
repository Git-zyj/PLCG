/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((arr_1 [i_0]) ? ((-1731 ? 16 : 16985)) : ((1750 + (arr_0 [i_0]))))) <= (arr_1 [i_0]))))));
        arr_2 [i_0] = ((((((max(-1673705369, -16985))) ? (((((arr_1 [i_0]) + 2147483647)) << (232 - 232))) : ((181 ? (arr_0 [i_0]) : (arr_1 [20]))))) / (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_16 = (((arr_1 [i_1]) ? (((arr_0 [i_1 + 4]) ? (arr_0 [i_1 + 2]) : 218)) : (((-(arr_1 [i_1]))))));
        arr_7 [14] [4] = (((min(16985, (((arr_4 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : 255)))) < ((((((arr_0 [i_1]) - (arr_1 [i_1])))) ? (((arr_4 [i_1] [1]) ? (arr_5 [i_1 - 1] [i_1]) : -78)) : (((arr_1 [i_1]) ? 162 : 20))))));
    }
    var_17 = (((((min((var_4 / var_12), var_1)) + 2147483647)) << ((((((var_1 ? 29547 : 181)))) - 107))));
    #pragma endscop
}
