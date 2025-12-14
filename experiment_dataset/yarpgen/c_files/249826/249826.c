/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = 1618634167;
        arr_2 [i_0] = ((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) | (((-883985288 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_12 = 24701;
        var_13 = ((((-505113898 ? -739738072 : var_7)) < (arr_4 [i_1] [1])));
        var_14 = ((~(((arr_0 [i_1]) | (((!(arr_0 [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = (min(((max((arr_1 [i_2] [i_2]), (arr_1 [i_2] [i_2])))), (((arr_1 [i_2] [i_2]) ? -739738082 : (arr_1 [i_2] [i_2])))));
        var_15 = var_9;
    }
    var_16 = (min(36129, ((((36139 ? -194579928 : var_2))))));
    var_17 = (((((~((1808706146 ? var_10 : var_8))))) ? var_1 : (~var_5)));
    #pragma endscop
}
