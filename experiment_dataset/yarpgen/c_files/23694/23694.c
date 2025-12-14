/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_16;
    var_19 = (max(var_19, 614681035));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = arr_2 [i_0];
        var_20 = (max(var_20, ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_13)))));
        arr_5 [i_0] = arr_2 [i_0];

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 &= var_11;
            var_22 -= ((var_4 && var_3) / (arr_0 [i_0]));
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            arr_12 [i_0] = (arr_6 [i_0] [i_0]);
            var_23 = -614681054;
            var_24 ^= (arr_7 [i_0] [3] [i_2]);
            var_25 = (arr_10 [i_2 - 2] [i_2 + 3] [i_2 + 3]);
            arr_13 [i_0] [i_0] [i_2 + 2] = ((arr_6 [i_2] [i_2]) ? var_3 : (arr_6 [i_0] [i_0]));
        }
    }
    #pragma endscop
}
