/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (arr_0 [i_0] [i_0]);
        arr_2 [1] &= (max((!87), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((((arr_5 [i_1]) ? (arr_4 [i_1]) : var_2))) ? ((((min(var_2, (arr_5 [20])))) ? var_5 : var_6)) : ((((arr_3 [i_1] [i_1]) ? 3322556870 : (arr_3 [i_1] [i_1]))))));
        var_11 = ((((((((arr_3 [i_1] [13]) ? (arr_5 [12]) : var_1))) ? (!var_0) : var_8)) - ((min(168, var_3)))));
        arr_7 [i_1] = (((((max(var_3, var_8)))) ? ((min((16 || var_9), (((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])))))) : ((var_7 ? var_4 : var_2))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_12 = (arr_8 [i_2] [i_2]);
        var_13 = ((var_3 ? (var_2 & var_8) : ((var_0 ? var_9 : var_0))));
        arr_10 [i_2] = (((((arr_5 [i_2]) || var_8)) ? (((min(var_9, 3)))) : (min(var_0, var_7))));
    }
    var_14 = (((var_5 ? var_9 : ((var_1 ? var_1 : -17)))));
    #pragma endscop
}
