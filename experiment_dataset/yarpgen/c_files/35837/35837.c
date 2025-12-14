/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = arr_3 [i_0] [i_0];

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 = var_7;
            arr_6 [i_0] [i_1] [i_0] = (arr_2 [3]);
            arr_7 [i_0] = ((5416 ? (arr_1 [i_0] [6]) : (arr_1 [i_0] [i_1])));
            var_20 -= (arr_0 [i_1]);
        }
        arr_8 [i_0] = var_12;
        var_21 *= (((arr_5 [i_0] [i_0]) | (arr_5 [5] [5])));
    }
    var_22 = ((var_5 ? (min(-var_7, var_12)) : (((((min(1204283843, var_11)) >= var_13))))));
    #pragma endscop
}
