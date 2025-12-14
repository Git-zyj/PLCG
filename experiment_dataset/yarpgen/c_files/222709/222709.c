/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (max((((!(arr_1 [i_0] [i_0])))), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_19 = (((arr_1 [i_0] [4]) ? (((+(max((arr_0 [i_0] [i_0]), 1536))))) : (min((arr_0 [i_0] [i_0]), (~var_0)))));
        var_20 = min((arr_1 [1] [i_0 + 1]), (min((min(0, var_7)), 1108288124)));
    }

    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_21 = ((~(arr_3 [i_1])));
        var_22 = ((((var_10 ? (arr_5 [7] [i_1 - 1]) : (arr_5 [i_1 + 1] [i_1 - 1]))) < (!1)));
        arr_6 [i_1] [i_1] = (arr_5 [i_1] [i_1 - 1]);
        arr_7 [i_1] = (arr_3 [i_1 + 1]);
    }
    var_23 += var_6;
    #pragma endscop
}
