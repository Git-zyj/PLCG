/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-82 || ((max(var_9, ((var_1 ? var_17 : var_1))))));
    var_19 = (~var_12);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = var_8;
        arr_2 [i_0] = var_0;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] &= ((((min((arr_3 [i_1]), -152))) ? var_3 : -173));
        var_21 = (arr_3 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (var_13 || 7253);

        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            arr_13 [i_2] [i_3] [i_2] = (((arr_1 [i_3 + 1] [i_3 - 2]) ? (arr_1 [i_3 + 1] [i_3 - 2]) : (arr_1 [i_3 + 1] [i_3 - 2])));
            var_22 = var_5;
        }
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            var_23 = (arr_12 [i_2]);
            var_24 -= var_3;
            arr_16 [i_4] [i_2] [i_4] = var_12;
        }
        arr_17 [i_2] = (arr_9 [i_2]);
        var_25 |= ((-(arr_0 [i_2])));
        var_26 = var_5;
    }
    #pragma endscop
}
