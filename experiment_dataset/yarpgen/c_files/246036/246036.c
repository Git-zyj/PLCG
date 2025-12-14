/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (~1);
        var_15 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((max((arr_1 [i_0]), 1))) : (((arr_1 [i_0]) ? 61297 : 118))));
        arr_3 [i_0] [i_0] = (min((max(1, -717986045)), var_11));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_10 [i_1] [i_1] = -85;
            arr_11 [i_1] [i_2] [i_2] = ((((6381 % (arr_0 [i_1]))) << (13198 - 13198)));
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_16 = (arr_1 [i_3]);
            arr_15 [i_1] = 3;
        }
        arr_16 [i_1] = var_9;
        var_17 += 52857;
    }
    var_18 = ((var_8 * (((-46 == 13225) & (((-5714 + 2147483647) << (1 - 1)))))));
    #pragma endscop
}
