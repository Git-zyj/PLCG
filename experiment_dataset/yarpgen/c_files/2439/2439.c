/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((var_2 ? ((min(889, var_3))) : (~889)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_16 = ((((!(arr_0 [18]))) ? (var_1 ^ var_0) : (arr_0 [i_0 - 3])));
        arr_2 [i_0] = 64646;
        arr_3 [i_0 + 1] = (!-3817);
        arr_4 [i_0 - 2] = (arr_1 [i_0 - 1]);
        var_17 = 64646;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 6;i_1 += 1)
    {
        var_18 = ((~(arr_1 [i_1])));
        var_19 *= ((-(arr_5 [i_1 + 2])));
        var_20 = (((arr_8 [i_1 + 1] [i_1 + 4]) ? var_3 : -var_10));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_1 + 1] [i_1 + 1] = ((-((var_13 ? 28404 : var_7))));
            var_21 *= (((arr_7 [i_2]) == var_1));
            var_22 = ((var_13 ? (arr_0 [i_1 + 3]) : 889));
        }
        var_23 = (~(arr_8 [i_1] [i_1]));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_24 = var_8;
        arr_15 [11] = (((arr_0 [i_3]) > (arr_0 [i_3])));
        var_25 &= ((-(((var_8 || (arr_0 [i_3]))))));
    }
    #pragma endscop
}
