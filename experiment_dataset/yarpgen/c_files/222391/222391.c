/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((0 ^ 24791) ? ((max(6479537098527796949, 2253215849))) : 9110369364027535700));
    var_13 = ((var_10 & ((((var_11 || (((var_11 ? var_5 : var_8)))))))));
    var_14 = ((~((((var_3 + var_1) || var_2)))));
    var_15 = (((max((var_11 <= var_1), ((var_6 ? var_3 : var_1)))) & var_1));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((((-(arr_0 [i_0])))) ? (min(-5099804355324027735, 24791)) : (arr_0 [i_0]));
        var_17 += (((((arr_0 [i_0]) ? var_9 : (arr_1 [i_0])))));
        arr_4 [i_0] = (((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_7))));
        var_18 = (-6283835181136611632 <= var_10);
        var_19 = (((((~(~5099804355324027735)))) ? ((((arr_1 [i_0]) ? ((min((arr_2 [i_0]), (arr_2 [i_0])))) : (24770 || 0)))) : (max((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_10)), (min(var_10, var_5))))));
    }
    #pragma endscop
}
