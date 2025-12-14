/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (min(var_10, ((min((((((-(arr_0 [i_0])))) & (max(1798891515, (arr_0 [i_0]))))), (((-(arr_0 [23])))))))));
        var_11 = max(var_4, -111);
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((0 >> ((var_2 ? 1 : -478386487)))));
        var_12 = (((((arr_2 [8]) ? (arr_1 [i_1 - 1]) : ((-691430344422965601 ? (arr_0 [i_1]) : var_0)))) <= (((((100 ? -93 : -2)) - -7116)))));
        var_13 = (((((-7116 ? (arr_2 [i_1]) : (arr_3 [i_1 - 1])))) && -84));
        arr_5 [i_1] = -var_5;
    }
    var_14 |= var_9;
    #pragma endscop
}
