/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_17 = (min(var_17, ((!(((((var_4 ? var_15 : var_6)) | ((40257 ? (arr_2 [i_0] [i_0 + 2]) : var_5)))))))));
        var_18 = (max(var_18, ((max(((-(((!(arr_2 [i_0] [i_0])))))), (!-119))))));
        arr_3 [i_0] = ((((((arr_0 [i_0 + 2] [i_0 + 4]) ? var_3 : (arr_2 [i_0] [i_0 + 3])))) && (((1 ? 1408 : 1)))));
        var_19 = ((-(arr_2 [i_0 - 2] [i_0 - 2])));
        arr_4 [4] [i_0] = ((var_15 ? (((arr_2 [i_0] [i_0 + 3]) ? -9 : 1)) : ((~(0 + 66)))));
    }
    var_20 = (min(var_20, var_14));
    var_21 = var_1;
    #pragma endscop
}
