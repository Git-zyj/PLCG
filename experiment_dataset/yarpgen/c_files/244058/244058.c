/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(((var_8 ? var_4 : 58)), var_14))) ? (min(var_11, (var_11 ^ var_9))) : ((var_13 ? var_9 : ((max(var_0, var_7)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((min((arr_1 [i_0]), (arr_1 [i_0])))), var_5));
        var_20 += ((-(((arr_1 [i_0]) & (arr_0 [i_0] [1])))));
        var_21 = var_10;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_22 = (((arr_3 [i_1] [i_1]) ? var_0 : var_8));
        var_23 += arr_3 [i_1] [i_1 + 1];
        var_24 = (((((var_7 ? var_14 : (arr_1 [i_1])))) ? 0 : (arr_0 [i_1 + 1] [i_1 + 1])));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_25 &= (((var_12 / (arr_3 [i_1] [i_1]))));
            var_26 = var_9;
            var_27 = (arr_4 [i_1 + 1]);
            var_28 = (((arr_3 [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_1 + 1] [i_1 + 1])));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_10 [i_1] [0] [i_1] = (arr_9 [i_1 + 1]);
            arr_11 [1] [i_1] [i_1] = (((var_8 ? var_3 : var_15)));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_29 = (((arr_5 [i_4] [i_4]) ? (arr_13 [i_1 + 1] [i_1]) : 1));
            var_30 = (arr_9 [6]);
            arr_14 [i_1 + 1] [i_4] = (((arr_13 [i_1] [i_1 + 1]) ? (arr_6 [i_1]) : 52));
            var_31 = (arr_7 [i_1 + 1] [i_4] [2]);
            arr_15 [i_1] [i_4] = arr_13 [i_1 + 1] [i_4];
        }
    }
    #pragma endscop
}
