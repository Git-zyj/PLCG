/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((~(arr_0 [i_0 - 1]))), -1));
        var_16 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_17 = var_9;
        arr_5 [i_1] [i_1 - 1] = ((((max(2113929216, (arr_4 [i_1 - 1])))) ? (((~((min((arr_3 [8]), var_5)))))) : ((-(max((arr_0 [i_1 - 1]), (arr_1 [i_1 - 1])))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_18 *= (((((((arr_7 [i_2] [i_2] [4]) || var_14)))) != (((arr_7 [i_1] [i_2] [i_1]) ? (arr_0 [i_1]) : -1))));
            var_19 = (((((0 ? 227854235204775429 : 2113929216))) || 5));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_20 *= ((~((1 + (arr_0 [i_1 - 1])))));
            var_21 = (((min(1711507929, 5)) > (max(26, ((((arr_9 [i_1] [i_1 - 1] [i_1 - 1]) || (arr_8 [i_1]))))))));
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_22 -= ((227854235204775433 ? 227854235204775429 : -5));
        arr_14 [i_4] = min((((arr_3 [i_4]) & (arr_3 [i_4]))), (((arr_3 [i_4]) ^ (arr_3 [i_4]))));
        var_23 = (((-((2734261616 ? var_1 : var_13)))));
        var_24 = (-127 - 1);
        var_25 = var_11;
    }
    #pragma endscop
}
