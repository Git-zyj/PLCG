/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((((var_10 ? var_6 : 1))) ? ((3092250284 ? var_10 : var_2)) : (((3173624109 ? var_9 : var_1)))))) ? (((((var_1 ? var_2 : var_6))) ? ((var_6 ? 1202716988 : 72057594037927935)) : (((var_0 ? 1 : 982364348))))) : ((1 ? 1 : 2763415307944831691))));
    var_14 = ((1 ? 1 : 982364348));
    var_15 = (min(var_15, (((((((((1 ? var_10 : 32257))) ? (((-7095676392880432360 ? 219 : var_5))) : ((var_3 ? var_7 : 1202716962))))) ? ((((((var_5 ? 1 : 32257))) ? ((var_10 ? var_5 : 888910199303643584)) : ((var_2 ? -8531901928443763375 : var_3))))) : (((((3543 ? 60377 : 81))) ? (((-27323 ? var_0 : 18743))) : ((var_5 ? var_12 : var_11)))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((((((((arr_1 [i_0]) ? 0 : (arr_1 [i_0])))) ? (((var_1 ? var_9 : 53788))) : (((arr_1 [i_0]) ? var_3 : 8155841029364800403))))) ? (((((var_11 ? (arr_1 [i_0]) : var_2))) ? ((0 ? var_4 : var_3)) : (((8531901928443763358 ? 40232 : 1))))) : (((((((arr_0 [i_0] [i_0]) ? 13894 : var_8))) ? ((0 ? 1 : var_6)) : ((var_6 ? 1 : var_0)))))));
        var_16 = ((((((((var_9 ? var_4 : (arr_1 [i_0])))) ? (((var_3 ? (arr_1 [i_0]) : 1529676453))) : ((12160 ? var_6 : var_10))))) ? (((((248 ? 1 : var_8))) ? (((arr_1 [i_0]) ? var_1 : 3294210150111512546)) : (((1 ? 104 : 1))))) : (((((((arr_0 [0] [i_0]) ? (arr_1 [i_0]) : var_4))) ? (((arr_1 [i_0]) ? 167 : (arr_0 [i_0] [i_0]))) : ((77 ? var_5 : var_0)))))));
    }
    #pragma endscop
}
