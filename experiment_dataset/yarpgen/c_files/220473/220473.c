/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max((!-451468238), (max(9, var_14)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((451468238 * (((((arr_1 [i_0]) * var_2)) / var_11))));
        var_17 = (((((var_11 && var_9) > 448)) ? var_3 : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = 5388099509200762989;
        var_18 = (max(var_18, ((((((((max((arr_4 [10]), var_8))) >= ((((arr_3 [i_1] [10]) == var_4)))))) <= ((~((~(arr_3 [i_1] [0]))))))))));
        var_19 = ((((((-(arr_5 [i_1]))))) ? 5388099509200762990 : (((~(arr_3 [i_1] [i_1]))))));
    }
    #pragma endscop
}
