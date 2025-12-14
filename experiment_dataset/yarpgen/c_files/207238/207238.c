/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_11 = (arr_0 [i_0] [i_0]);
        arr_4 [12] |= (((((((-63 < (arr_2 [4]))) ? (((arr_2 [4]) ? 1 : (arr_2 [10]))) : 4032))) ? ((253 ? 4311100569740035851 : 4032)) : (((+(min((arr_1 [i_0 - 1] [i_0 - 1]), 2147483647)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = (min(var_12, (((((min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1])))) ? ((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))) : (arr_6 [i_1] [i_1]))))));
        var_13 = (max((((+(((arr_6 [i_1] [i_1]) ? 1 : (arr_6 [0] [0])))))), 11114067204409936214));
        var_14 = 2906450672;
        var_15 = ((((-2147483647 ? 2147483647 : (arr_5 [i_1] [i_1])))) && (((((((arr_6 [i_1] [i_1]) ? 1 : (arr_6 [i_1] [8])))) ? ((min(2906450677, 4136264891))) : (max((arr_6 [i_1] [i_1]), 8268487321428363794))))));
    }
    var_16 = var_6;
    #pragma endscop
}
