/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 *= (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = ((16 || (((9 ? 255 : 148)))));
            arr_9 [i_0] = ((~(arr_6 [i_1] [i_0] [i_0])));
            var_13 = var_4;
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_14 = ((~(arr_13 [i_0] [i_2 - 1] [i_2])));
            arr_14 [i_0] [i_0] = 16;
            arr_15 [i_0] [i_0] [i_2] = var_3;
        }

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            arr_20 [i_0] = (arr_13 [i_0] [i_0] [i_3]);
            var_15 = (var_6 * var_3);
            var_16 = (((arr_7 [i_0] [i_0] [i_3]) ? var_4 : ((((arr_11 [i_3 - 1] [i_0]) == var_5)))));
            arr_21 [i_0] = var_9;
            var_17 -= (arr_11 [i_3] [i_3 + 3]);
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_24 [i_4] = (max((((arr_23 [i_4]) << (((18446744073709551615 - -2441797491452623655) - 2441797491452623612)))), ((((~181) && (arr_23 [i_4]))))));
        arr_25 [i_4] = (min(((min(112, var_10))), (((arr_23 [i_4]) & (arr_23 [i_4])))));
        arr_26 [i_4] = ((((arr_23 [i_4]) / 112)));
    }
    var_18 = var_8;
    var_19 = -var_9;
    var_20 |= var_4;
    #pragma endscop
}
