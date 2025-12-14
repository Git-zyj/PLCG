/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_15 = (max(var_15, (((((!(arr_0 [1] [1]))) ? (((max((arr_2 [0]), var_1)))) : (((((-(arr_0 [12] [i_0])))) ? (max((arr_0 [6] [i_0]), (arr_2 [22]))) : (arr_0 [6] [i_0]))))))));
        arr_3 [i_0] [i_0] = (~((-(min((arr_1 [i_0]), var_2)))));
        var_16 = (!var_0);
        var_17 = ((~(min((arr_0 [i_0] [i_0]), var_9))));
        var_18 = (((((~(((arr_0 [i_0] [i_0 - 1]) ? var_8 : var_7))))) ? (arr_1 [i_0]) : (!var_12)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = ((+((+(((arr_4 [i_1] [i_1]) ? var_0 : (arr_2 [i_1])))))));
        var_20 = ((!((max((arr_5 [i_1]), (((-(arr_2 [i_1])))))))));
    }
    var_21 = (~(((((var_9 ? var_13 : var_7))) ? (min(var_11, var_1)) : (~var_9))));
    #pragma endscop
}
