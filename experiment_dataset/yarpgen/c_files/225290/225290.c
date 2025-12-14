/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_20 = (((~((var_19 ? 50249 : 14)))));
        arr_2 [1] = ((~((~(arr_1 [i_0 - 1] [i_0 - 1])))));
        arr_3 [i_0] = (arr_0 [6]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = ((~(!var_3)));
        arr_8 [i_1] = (!(arr_4 [i_1]));
        arr_9 [i_1] = ((var_13 ? (~24488) : (max(((~(arr_4 [i_1]))), ((max((arr_6 [i_1] [18]), (arr_5 [i_1] [i_1]))))))));
        arr_10 [i_1] [i_1] = (max((min((~var_8), (arr_6 [19] [i_1]))), (((arr_6 [i_1] [i_1]) ? 15299 : (arr_6 [i_1] [i_1])))));
        var_21 = 211;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_15 [i_2] [i_2] = min((((117 ? var_16 : (arr_6 [i_2] [i_2])))), (max(((5602984070859905013 ? var_8 : var_2)), ((var_18 ? (arr_14 [i_2]) : var_17)))));
        arr_16 [i_2] [i_2] = var_16;
        arr_17 [7] = (((!var_11) ? (((arr_11 [i_2]) ? (arr_11 [i_2]) : (arr_11 [i_2]))) : (!var_8)));
    }
    var_22 = (min(((var_8 ? (~var_16) : ((var_18 ? var_1 : var_14)))), var_13));
    #pragma endscop
}
