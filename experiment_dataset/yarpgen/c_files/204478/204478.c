/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_3));
    var_11 = var_9;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((((arr_0 [i_0 + 3]) ? var_0 : (arr_0 [i_0 + 1]))));
        arr_3 [i_0] = ((((arr_1 [i_0 + 3]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1]))));
        var_12 *= (min((min(((34679 ? (arr_0 [i_0 + 3]) : (arr_1 [i_0 - 2]))), (min(var_0, (arr_1 [i_0]))))), (((arr_1 [i_0 + 1]) ? (var_4 / var_4) : ((-(arr_1 [i_0 - 2])))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (((!-var_7) % 1));
        var_13 *= (((arr_0 [i_1]) << (arr_5 [i_1])));
        var_14 = (max(var_14, (((!(arr_0 [i_1]))))));
    }
    #pragma endscop
}
