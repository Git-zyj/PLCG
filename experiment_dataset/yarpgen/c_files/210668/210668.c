/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (-(((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 37)));
        var_21 = (max(var_21, 815648310));
        var_22 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = ((!(((61440 ? 255 : -6218367064955732316)))));
        var_23 = (min((((((-5 ? (arr_3 [i_1] [i_1]) : 127))) ? 246 : var_16)), (arr_3 [i_1] [i_1])));
        var_24 = (min((((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : var_1)), (arr_4 [i_1] [i_1])));
        var_25 = (!201556228);
        arr_6 [i_1] [i_1] = (max((arr_3 [i_1] [i_1]), 32767));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_26 -= (arr_4 [i_2] [i_2]);
        var_27 = (min(var_27, (((max((arr_8 [i_2]), (arr_8 [i_2])))))));

        /* vectorizable */
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            arr_13 [2] [i_3] [i_3] = (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (((-112 + 116) - 4))));
            var_28 *= ((-(arr_3 [i_2] [i_3 + 1])));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_16 [i_2] [i_2] [i_4] &= ((((max((0 + 32735), (max(-2047393594, (arr_11 [i_2] [i_2] [i_2])))))) ? (arr_14 [i_2]) : (((-((-127 & (arr_11 [i_2] [i_4] [i_4]))))))));
            arr_17 [i_4] [i_4] [i_2] = var_17;
        }
        var_29 += (arr_10 [i_2] [i_2] [i_2]);
    }
    #pragma endscop
}
