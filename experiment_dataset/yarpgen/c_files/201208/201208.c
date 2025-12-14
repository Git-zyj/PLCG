/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_15;
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((267911168 ? ((max((arr_2 [i_0] [i_0]), var_14))) : var_6))) ? (((267911160 & (max(var_18, var_0))))) : (max((((arr_1 [i_0]) ? 267911168 : (arr_0 [i_0]))), ((min((arr_1 [7]), (arr_1 [i_0]))))))));
        var_21 = (~var_6);
        arr_4 [i_0] [i_0] = ((var_18 ? (((var_4 ? var_0 : var_5))) : (max((arr_1 [i_0]), var_7))));
        var_22 = ((~(~var_6)));
        var_23 = (((arr_2 [i_0] [0]) ? (((~(var_2 - var_15)))) : (arr_1 [i_0])));
    }
    var_24 = ((var_17 ? 200 : ((-(min(19, 499078003))))));
    #pragma endscop
}
