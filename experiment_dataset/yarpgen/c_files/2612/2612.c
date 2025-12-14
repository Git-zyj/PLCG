/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = ((((((((arr_2 [i_0] [i_1]) ? var_12 : -1)) / ((max((arr_1 [10] [10]), 1)))))) ? (((((arr_4 [i_0] [i_0]) || (arr_1 [i_0] [i_1 + 1]))) ? ((var_14 ? var_1 : var_3)) : (((-2 ? var_8 : var_14))))) : 2));
                var_20 = (min(var_20, ((max(-1, var_16)))));
                var_21 = ((var_9 * (((arr_2 [23] [i_1 - 1]) ? (arr_0 [i_1]) : (arr_0 [i_1 - 1])))));
                arr_6 [i_0] = ((!((((1 + (arr_5 [i_0] [i_0])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_22 = (((min(var_11, -8)) << var_18));
                                var_23 = ((+((2 ? -var_0 : (max((arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] [i_3 - 1]), (arr_0 [i_2])))))));
                                var_24 = ((((min(var_3, var_11))) ? (arr_10 [i_0] [i_1] [i_1] [i_1]) : (max((arr_4 [i_4] [i_3 - 1]), (((arr_7 [i_2] [i_1] [i_0]) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_1]) : var_18))))));
                                arr_17 [i_0] [i_0] [i_2] [i_0] [8] [i_3] [12] |= ((((((-83614578 & (arr_3 [16] [16]))) >> (((~var_4) - 2157925023))))) ? (((((var_5 ? var_2 : (arr_1 [i_3] [i_1 - 1])))) ? ((((arr_4 [i_3 - 1] [i_2]) ? (arr_4 [i_3] [i_3]) : (arr_11 [i_2] [i_3 - 1] [i_2] [2])))) : (max((arr_4 [i_0] [i_1]), var_3)))) : (((((((arr_8 [12] [4] [12]) ? (arr_14 [i_1 + 1] [i_2] [i_2] [1]) : (arr_1 [i_0] [i_1])))) ? ((83614565 ? -1 : -3233314247259682765)) : (((arr_16 [24] [i_3 - 1] [i_2] [i_1] [24]) ? (arr_5 [6] [6]) : (arr_15 [8] [i_1])))))));
                                arr_18 [i_0] [i_2] [i_0] = ((36 ? ((max(-1, (!var_18)))) : -379386659581963831));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_23 [i_5] = var_7;
        var_25 = (((min((min((arr_8 [i_5] [i_5] [i_5]), (arr_3 [i_5] [i_5]))), ((((arr_3 [i_5] [i_5]) ? -1854059821305928098 : 26)))))) ? ((((arr_21 [i_5] [i_5]) ? (arr_21 [i_5] [i_5]) : (arr_21 [i_5] [i_5])))) : ((1854059821305928102 ? ((min(1, (arr_12 [i_5] [i_5] [i_5] [i_5])))) : var_5)));
        var_26 = ((((min(116, 127))) ? (((max((arr_0 [i_5]), (arr_0 [i_5]))))) : (max(var_5, (arr_0 [i_5])))));
        var_27 = (max((arr_20 [i_5] [i_5]), ((-2 ? (arr_7 [i_5] [1] [i_5]) : (arr_19 [i_5] [i_5])))));
        var_28 += var_4;
    }
    var_29 = ((-((-1 ? var_2 : (~var_6)))));
    var_30 = (var_11 <= var_8);
    #pragma endscop
}
