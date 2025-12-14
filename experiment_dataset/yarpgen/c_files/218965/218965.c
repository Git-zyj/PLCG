/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(var_17, ((((max(((~(arr_1 [i_0] [i_0]))), var_9)) / (min((arr_1 [i_0] [1]), (~var_0))))))));
        var_18 = ((max((arr_1 [i_0 - 3] [i_0]), (arr_1 [i_0 - 1] [i_0]))) & (min(var_15, var_0)));
        var_19 = (max(var_19, ((((~(var_10 / var_0)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (max(var_20, (((2692913690959314230 & ((~(arr_1 [i_1] [i_1]))))))));
        arr_5 [i_1] = (((arr_0 [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_3 [i_1])));
        var_21 = (max((((arr_4 [i_1] [i_1]) ^ (arr_4 [i_1] [i_1]))), (min(254, (~126)))));
        arr_6 [i_1] [i_1] = (~var_3);
    }
    var_22 = (~var_7);
    var_23 = ((((~var_4) ^ ((var_9 ? 3 : 1)))));
    var_24 *= (((((max(-84, 5229274121640071120)) / var_0)) * (((var_1 ? var_1 : var_13)))));
    #pragma endscop
}
