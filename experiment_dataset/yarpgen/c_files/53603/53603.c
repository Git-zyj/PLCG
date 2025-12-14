/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((24 ? (((min(var_15, var_4)) - (var_15 && var_7))) : var_13));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? var_3 : (arr_0 [i_0] [i_0])));
        var_21 = (max(var_21, ((-1 ? (min((((arr_1 [i_0]) << (((var_17 + 27360) - 19)))), (arr_0 [i_0] [i_0]))) : var_17))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [12] [i_1] [i_2] [i_3] = (((-(arr_5 [i_2 - 4] [i_2 - 3]))));
                        arr_11 [i_0] [i_1] [4] [4] [i_3 - 1] = var_10;
                        arr_12 [i_0] [16] [15] [i_0] [i_0] = ((var_9 ? (arr_4 [i_2 - 3] [i_2 - 3] [i_3 - 1]) : (arr_1 [i_2])));
                        arr_13 [i_0] [i_1] [i_2] = (min((min((arr_0 [17] [i_1]), (min((arr_4 [17] [17] [i_3]), (arr_9 [i_3] [i_0] [i_1] [i_0]))))), var_4));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_22 ^= ((-(min((((-22015 ? 20468 : 127))), (min((arr_15 [i_1] [i_1] [i_1] [i_1]), 197))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [0] = (((((arr_9 [i_2 - 1] [i_4] [i_4] [i_4]) ? (arr_9 [i_2 - 1] [1] [i_2] [i_4]) : var_1)) % ((var_8 ? (var_17 + 232) : (var_3 > 195)))));
                        arr_19 [i_0] [i_1] [19] [i_4] = -17988459404079937933;
                    }
                    arr_20 [i_0] [i_0] = ((13272264697015046920 / ((((arr_4 [8] [i_2 - 2] [i_2 + 1]) ? -12766 : ((min((arr_8 [i_0] [i_0] [i_1] [i_2]), 1))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_25 [i_5] = (((arr_23 [i_6] [i_6] [i_6]) != -458284669629613663));
            var_23 = var_3;
            arr_26 [i_5] [i_5] [3] = -0;
            var_24 = 0;
        }
        var_25 = 1158693064;
        var_26 = (min(var_26, (arr_24 [i_5] [i_5] [i_5])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_27 = (max(var_27, ((((arr_14 [i_7] [i_7] [i_7] [i_7]) ? (arr_5 [i_7] [i_7]) : (arr_14 [i_7] [i_7] [i_7] [i_7]))))));
        arr_29 [i_7] = (arr_8 [i_7] [i_7] [i_7] [i_7]);
        arr_30 [i_7] = ((~(((arr_0 [i_7] [i_7]) / (arr_27 [i_7])))));
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_33 [i_8] = ((((((arr_15 [i_8] [i_8] [i_8 + 1] [i_8]) * var_11))) ? (arr_0 [1] [i_8 + 1]) : (1152921504606846976 | 107)));
        arr_34 [9] [i_8] = (arr_0 [i_8] [i_8]);
    }
    #pragma endscop
}
