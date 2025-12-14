/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = (var_9 & (((((var_8 ? var_2 : var_12))) ? ((var_5 ? var_15 : 5540670281974979644)) : var_2)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        var_20 = (((arr_2 [i_0]) / (~6187054500342058778)));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_21 = ((!(arr_3 [i_0] [0])));
            var_22 = (arr_2 [i_1]);
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_23 = ((-(arr_6 [i_0] [i_0] [i_0])));
            var_24 = ((var_14 | (arr_4 [i_0])));
            var_25 = (((((arr_1 [i_0]) ? var_1 : (arr_5 [7] [i_2] [i_0]))) >= (~12259689573367492830)));
            arr_9 [i_0] [i_0] = ((13856979850443935860 ? var_1 : 0));
        }
    }
    #pragma endscop
}
