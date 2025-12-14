/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_14 -= ((((arr_0 [i_0] [i_0 - 3]) * (!-17))));
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] [i_1 - 2] = (arr_1 [i_1 + 3]);
        var_15 *= (min((((arr_1 [i_1 - 1]) ? 57188 : ((-(arr_1 [i_1]))))), (((arr_4 [i_1 + 2]) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 - 2])))));
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_16 = (min(var_16, ((max(-17, (((var_7 ? -17 : 23))))))));
        var_17 = ((((((arr_3 [i_2]) ? (arr_3 [i_2]) : (arr_1 [i_2 + 2])))) ? -24 : 1));
        var_18 = (min(var_18, 16));
    }
    var_19 = ((var_4 ? (((var_2 * var_12) ? (((var_9 ? var_5 : var_0))) : -var_6)) : ((((((var_5 ? var_6 : var_7))) ? var_10 : ((var_10 ? var_7 : var_12)))))));
    var_20 ^= var_11;
    #pragma endscop
}
