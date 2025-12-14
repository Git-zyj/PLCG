/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [14] &= var_0;
        var_12 = arr_1 [i_0];
        var_13 = (((arr_2 [i_0] [i_0]) ? var_3 : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_14 = ((!(((0 ? 2123250986778909316 : 8657600199638989203)))));
        var_15 = (arr_0 [i_1]);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = (max(var_16, var_11));
        var_17 ^= (var_10 ? (min((min(var_11, (arr_1 [23]))), (((arr_1 [i_2]) / (arr_1 [i_2]))))) : var_6);
        var_18 = (max(var_18, -var_5));
        var_19 = (max(var_19, ((var_10 ? var_10 : (((arr_0 [i_2]) ? (arr_2 [i_2] [i_2]) : (max(8883141307140591044, 4220284282450451959))))))));
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        var_20 = var_8;
        arr_12 [i_3] = (min((arr_10 [i_3 - 2]), (((arr_10 [i_3 - 1]) ? (arr_10 [i_3 + 1]) : var_10))));
        var_21 = ((!(arr_9 [i_3])));
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = min(((((arr_8 [i_4]) < (arr_8 [i_4])))), var_10);

        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            var_22 = var_6;
            var_23 += (!var_9);
            arr_19 [i_4] [9] = ((arr_17 [i_5]) ? ((-((var_11 ? var_10 : (arr_11 [i_4] [i_4]))))) : (((arr_4 [i_5 - 2] [i_5]) ? -0 : (((arr_10 [i_5]) ? var_9 : (arr_2 [16] [i_5 - 3]))))));
            arr_20 [i_4] [i_4] = (((((var_2 ? var_0 : (arr_5 [i_5 - 2] [i_5 - 2])))) ? ((((arr_14 [i_5 - 3]) ? (arr_14 [i_5 + 1]) : (arr_14 [i_5 - 4])))) : (min(var_8, (arr_16 [i_4])))));
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_23 [i_6] = ((-((~((min((arr_0 [i_6]), (arr_7 [i_6]))))))));
        var_24 = ((var_9 || var_10) ? ((-((-(arr_9 [i_6]))))) : var_6);
        var_25 = arr_2 [i_6] [i_6];
    }
    var_26 = var_5;
    var_27 = var_3;
    #pragma endscop
}
