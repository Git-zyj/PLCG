/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_4 [21] = (min(var_3, (((((!(arr_3 [i_0 + 1]))))))));
        arr_5 [i_0] = (arr_2 [i_0 - 2]);
        var_14 = (min(var_14, (arr_0 [11])));
        var_15 = (min(var_15, (((((max((arr_0 [i_0 - 2]), (min(28, (arr_0 [i_0])))))) ? (min(var_7, (((3152677610 ? 2075597039 : 16383))))) : ((max(((max((arr_1 [i_0 - 1]), var_2))), (arr_2 [i_0 - 1])))))))));
        var_16 = (max(var_16, (((((((arr_1 [i_0 - 2]) ? var_1 : -2075597025))) ? (max((((arr_2 [i_0]) ? var_13 : 7646935071589181415)), ((16711680 ? (arr_1 [i_0 + 1]) : (arr_3 [i_0]))))) : (min(1089804346, 1034199536798435980)))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] = (arr_3 [i_1]);
        var_17 = (min(var_13, (((((arr_6 [i_1]) ? (arr_7 [i_1] [i_1]) : var_6))))));
        var_18 = (max(var_18, (arr_6 [i_1])));
    }
    var_19 = -4018191750369112781;

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_12 [i_2] = ((((arr_6 [i_2]) != (((arr_7 [i_2] [10]) ? 1546101672 : var_1)))));
        arr_13 [i_2] = var_1;
        arr_14 [i_2] = ((!((!(((var_12 ? (arr_1 [i_2]) : -1134205401)))))));
        arr_15 [i_2] [i_2] = (arr_11 [i_2]);
    }
    #pragma endscop
}
