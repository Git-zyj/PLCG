/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((var_13 | var_10) & var_11))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, var_3));
        arr_2 [i_0] = ((2901805418 / (((((max(6956432802002937268, -1))) ? (arr_1 [i_0]) : 1)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = (max(var_19, (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_1 [i_1])))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_0] = -var_0;
                arr_10 [i_0] [i_0] [i_2] [i_0] = 56;
                arr_11 [i_0] [i_1] [i_0] = 2901805421;
            }
            arr_12 [i_0] [i_1] [i_1] = (((arr_1 [i_0]) || ((1 > (arr_3 [i_0])))));
            arr_13 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_20 += (arr_7 [i_3]);
            arr_16 [i_0] [i_3] = (((arr_8 [i_0] [i_3] [i_3]) << (((arr_5 [i_3] [i_0] [i_0] [i_0]) - 13839248335157109230))));
        }
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_21 = var_4;
        arr_20 [i_4] = (max(12096, 147));
        var_22 = -1;
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_23 += (min(var_6, (max(var_2, (((arr_23 [i_5]) ? (arr_22 [i_5 - 2]) : var_12))))));
        arr_24 [i_5] = (max((((arr_22 [i_5 - 1]) / (arr_22 [i_5 + 1]))), ((~(arr_22 [i_5 - 2])))));
    }
    var_24 = (((((((1 ? 1393161878 : 9455845557972233309)) - 12466813916874183447))) ? ((var_15 ? 2049333126 : -var_2)) : 3772781594));
    #pragma endscop
}
