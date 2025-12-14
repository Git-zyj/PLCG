/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 & (min((~var_1), 3109587032))));
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (max((max((!1185380284), (arr_1 [i_0]))), (((!(arr_1 [i_0]))))));
        arr_2 [i_0] = (112 & (arr_1 [i_0]));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_13 = (!-1);
        arr_5 [i_1] [i_1] = ((-(((arr_4 [i_1 - 1]) ? (arr_3 [i_1] [i_1]) : (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_3 [i_1 - 2] [i_1 + 1])))))));
        var_14 = (((!((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_3 [i_1] [i_1 - 1])))))) ? (~2771217274701812359) : (((min((arr_4 [i_1 - 1]), 0)))));
        var_15 += -114;
        arr_6 [i_1] = min(21, 1);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] = (max((((!(~-113)))), (max(((2488877597 * (arr_4 [i_2]))), (arr_0 [i_2] [i_2])))));
        var_16 -= ((((min((arr_0 [i_2] [i_2]), (arr_8 [i_2] [8])))) ? (min((min((arr_7 [i_2]), (arr_1 [i_2]))), (arr_4 [i_2]))) : (arr_4 [i_2])));
    }
    var_17 = (min(((max(var_5, 5048773020154898454))), var_4));
    var_18 = 55;
    #pragma endscop
}
