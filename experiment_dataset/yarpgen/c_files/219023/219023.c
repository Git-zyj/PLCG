/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = ((((((((var_9 ? 425382182 : -16776))) ? ((var_0 ? var_15 : var_13)) : ((25015 ? var_13 : var_11))))) ? var_2 : var_10));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 ^= ((var_3 & ((-(var_11 * var_8)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = var_16;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((min((max(var_12, var_3)), 43948)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] = (((((((((arr_16 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0]) | -26123))) ? var_4 : (~var_13)))) ? ((-(max(233, var_4)))) : (arr_12 [i_0] [i_1] [i_0] [i_1] [i_4] [i_4])));
                                arr_20 [i_0] [i_2] [i_4] = ((var_4 < (arr_16 [i_3 + 1] [i_0] [i_3 + 1] [i_0] [i_0] [i_0])));
                                arr_21 [i_0] [i_0] [i_0] = (arr_16 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] [i_3]);
                                var_20 = ((max(var_1, var_13)));
                                var_21 = 43948;
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                arr_28 [i_0] [i_5] [i_6] = arr_18 [i_6] [i_6] [i_6] [i_6] [i_0] [i_0];
                var_22 = arr_14 [i_6] [i_5] [i_0];
            }
            arr_29 [i_0] [i_5] [i_0] = var_9;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_32 [i_0] [i_0] = (((arr_0 [i_0] [i_7]) - (arr_24 [i_0] [i_7])));
            arr_33 [i_0] = -122;
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_36 [i_8] [i_8] = max((arr_34 [i_8]), (min((arr_13 [i_8] [i_8] [i_8]), 25)));
        var_23 = (max(((var_2 ? (~8086789660729485715) : (arr_4 [i_8]))), ((((arr_27 [i_8] [9] [i_8] [i_8]) <= ((((!(arr_30 [i_8]))))))))));
        var_24 = ((((-(arr_0 [i_8] [i_8]))) > (((arr_0 [i_8] [i_8]) / (arr_0 [i_8] [i_8])))));
    }
    var_25 = (~var_3);
    #pragma endscop
}
