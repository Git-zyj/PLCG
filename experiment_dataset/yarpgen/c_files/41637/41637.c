/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0] [i_0];
        var_18 = ((!(arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((((((((17 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : 234862097867136634)) : ((((arr_1 [3] [i_0]) ? 1 : (arr_0 [i_0]))))))) ? (arr_0 [i_0]) : (((min((arr_1 [2] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_19 = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1 - 2] [i_1] = (arr_6 [i_1]);
        arr_8 [15] [i_1] = 1;
        arr_9 [i_1 + 1] = (arr_5 [i_1 - 1]);
    }
    #pragma endscop
}
