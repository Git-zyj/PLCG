/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_13 = ((48 ? (((max(-5, 0)))) : 9223372036854775807));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_14 = (max(var_14, (arr_1 [i_0] [15])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_15 += ((~(-3 * 18)));
        arr_5 [i_1] = (max(((((max(var_2, var_6))) >> 0)), ((max(var_5, (arr_3 [i_1] [i_1]))))));
        var_16 += -35;
        var_17 = ((((var_11 + (((arr_3 [i_1] [i_1]) / var_5)))) << (arr_4 [i_1] [i_1])));
        var_18 = (!-6750);
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = var_9;
        arr_9 [i_2] = -var_4;
        arr_10 [i_2] [i_2] = (max(6749, ((((var_7 ? (arr_7 [i_2]) : var_10)) * (48 / var_11)))));
        var_19 = (max(18446744073709551615, (arr_7 [i_2])));
        arr_11 [i_2] = ((~(arr_6 [i_2])));
    }
    var_20 = var_1;
    #pragma endscop
}
