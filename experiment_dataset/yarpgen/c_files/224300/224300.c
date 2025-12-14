/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((max(var_16, var_8)) / var_10));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((((arr_0 [i_0] [i_0]) - ((max((arr_1 [i_0]), (arr_1 [i_0])))))));
        var_21 -= (((((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))) ? ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [1])))) ? (((arr_1 [i_0]) | (arr_0 [13] [i_0 - 1]))) : ((max((arr_0 [2] [i_0]), (arr_1 [i_0 - 2])))))) : (((((arr_1 [i_0 + 2]) ? (arr_1 [i_0]) : (arr_0 [i_0 + 3] [7])))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 -= ((((((((arr_0 [i_1] [i_1]) * (arr_5 [i_1])))) ? (arr_4 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))) <= (((((arr_0 [i_1] [i_1]) >> (((arr_5 [i_1]) + 100)))) + ((min((arr_5 [i_1]), (arr_0 [i_1] [i_1]))))))));
        var_23 = (min(var_23, (arr_3 [2] [2])));
    }
    #pragma endscop
}
