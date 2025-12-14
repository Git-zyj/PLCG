/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = ((((var_6 ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 12878624342737539229)) : 127)) > ((min((((!(arr_1 [i_0] [i_0])))), -127)))));
        arr_4 [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 = ((((((max((arr_5 [i_1]), var_15)) / (arr_6 [i_1] [i_1])))) ? (((((arr_6 [i_1] [i_1]) && (arr_6 [i_1] [i_1]))))) : (max((((arr_5 [i_1]) ? var_16 : var_11)), var_10))));
        var_19 &= ((12878624342737539217 * ((6308 / (518457269 | var_0)))));
        arr_7 [i_1] [i_1] = (!-127);
        var_20 = (min(12878624342737539221, (arr_6 [i_1] [i_1])));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = ((min(239, -1)));
        arr_11 [24] &= ((((-(arr_9 [i_2] [i_2]))) * (((arr_9 [i_2] [i_2]) / var_13))));
    }
    #pragma endscop
}
