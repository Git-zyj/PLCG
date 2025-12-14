/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (max(131, 93));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 &= var_8;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_18 = (~-var_15);
            var_19 = ((~((var_6 ? (arr_3 [i_1] [i_1] [i_1]) : 83))));
        }
        var_20 = (arr_1 [i_0]);
    }

    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        arr_6 [i_2] = (arr_5 [i_2]);
        var_21 = (min(var_21, (((((-(3658257827057737885 - var_7)))) ? var_8 : (arr_5 [i_2])))));
    }
    var_22 = var_13;
    #pragma endscop
}
