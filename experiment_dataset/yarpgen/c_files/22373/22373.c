/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(var_16, var_13)) * var_2));
    var_20 = (((((!(var_16 > var_8)))) | (!var_3)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] = (((((0 ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])))) ? (arr_2 [i_0] [i_1 - 2]) : ((-(arr_1 [16])))));
            var_21 = var_4;
            arr_5 [i_1 + 1] = -2020178215640039614;
            var_22 = var_8;
        }
        arr_6 [i_0] [3] = (((((arr_3 [i_0]) ^ 117)) ^ (((0 ? 1 : 1)))));
        var_23 = ((71 ? (arr_2 [i_0] [i_0]) : (8192 | 1)));
        arr_7 [i_0] = 8192;
    }
    var_24 = (((((var_17 / (~0)))) ? var_1 : ((0 ? (~var_1) : var_3))));
    #pragma endscop
}
