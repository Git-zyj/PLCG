/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0 + 2]) / (max(((((-3226 + 2147483647) << (((-7081371490752820184 + 7081371490752820197) - 13))))), (max(7081371490752820170, 7081371490752820159))))));
        var_12 = ((!(((((((arr_1 [i_0]) ? 16777215 : var_3))) ? ((1 ? -7081371490752820200 : (arr_0 [i_0]))) : (max(var_3, (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_5 [4] [i_1] = (((arr_3 [i_1]) ^ (((arr_3 [i_1]) ? var_6 : -7081371490752820154))));
        arr_6 [i_1] = ((11905490397681680059 > (((arr_3 [i_1]) ? (arr_4 [i_1]) : 18446744073692774418))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (((((((max((arr_3 [i_2]), (arr_8 [i_2])))) ? ((((arr_3 [i_2]) >> (var_2 - 3443654101)))) : (max(1125899906842623, (arr_7 [i_2])))))) ? (max(((-1 ? -7081371490752820146 : 3841517916)), (arr_7 [i_2]))) : (((16777193 ? (arr_3 [i_2]) : (arr_3 [i_2]))))));
        var_13 = ((+(max((3841517925 != 2585559801348041630), (((arr_8 [i_2]) ? (arr_4 [i_2]) : var_6))))));
        arr_10 [i_2] [i_2] = (((((arr_4 [i_2]) - (arr_4 [i_2])))) ? ((((((arr_3 [i_2]) ? 4294967295 : (arr_7 [i_2])))) ? (((3811673421 ? (arr_7 [i_2]) : var_9))) : ((var_8 + (arr_3 [i_2]))))) : (((-(((!(arr_7 [5]))))))));
        arr_11 [i_2] = (max((arr_8 [i_2]), (((arr_8 [i_2]) / (arr_3 [i_2])))));
    }
    var_14 = (((((((var_3 ? var_2 : var_3))))) > var_8));
    #pragma endscop
}
