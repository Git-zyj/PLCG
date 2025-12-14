/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (max((arr_0 [i_1 + 1]), var_15));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] = var_7;
                            }
                        }
                    }
                    var_20 = (((((17611960806659600012 ? (((var_5 == (arr_5 [i_1] [i_1 + 1])))) : (min(-7965, (arr_7 [i_1] [i_1 + 2] [i_1] [i_1 - 1])))))) && var_13));
                    var_21 = (arr_11 [i_1 - 1] [i_0] [i_1 + 2] [i_2 + 1] [i_2]);
                    arr_14 [i_1] [i_1] [i_1] = 4512;
                }
            }
        }
        var_22 = (max(var_22, (((~((var_7 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((-(arr_7 [i_0] [14] [0] [i_0]))))))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_23 = (((~4512) * (-1 == 834783267049951616)));
                    var_24 = (~1);
                }
            }
        }
    }

    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        var_25 = (min(var_25, (((65521 ? (min((arr_23 [i_8 + 1]), (arr_23 [i_8 + 1]))) : (arr_23 [i_8 + 1]))))));
        var_26 += (((max((arr_23 [i_8]), var_15)) * (~6582544246280464104)));
        var_27 *= arr_9 [i_8] [i_8 + 2];
        arr_26 [4] [i_8 - 1] &= ((((((11055483399570771468 != var_1) ? (arr_6 [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 - 1]) : 834783267049951621))) || (((((min((arr_19 [i_8]), -5326655101938543300))) ? (((min((arr_11 [i_8] [10] [i_8 + 2] [i_8 + 2] [i_8]), var_4)))) : (arr_20 [i_8 - 1]))))));
        var_28 = (min(var_28, ((((((17611960806659600000 ? 403377415 : -4512))) ? (arr_12 [19] [i_8 + 2] [19] [i_8 + 1] [i_8] [i_8] [i_8 - 1]) : ((((arr_23 [i_8]) >= (arr_24 [i_8 + 3])))))))));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_29 = 9145657287409553462;
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {
                        var_30 = min(((max(var_9, (arr_30 [i_10] [i_10])))), (((((11891 & (arr_28 [i_9] [i_9])))) ? 1 : (arr_30 [i_10] [i_10]))));
                        arr_37 [i_10] [i_10] = (i_10 % 2 == 0) ? (((max((((var_10 + 9223372036854775807) << (((arr_29 [i_9] [i_10] [i_10]) - 4313137435923049014)))), 403377415)))) : (((max((((var_10 + 9223372036854775807) << (((((((arr_29 [i_9] [i_10] [i_10]) - 4313137435923049014)) + 1600906279935866801)) - 7)))), 403377415))));
                    }
                }
            }
        }
        var_31 ^= var_11;
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            {
                var_32 = var_9;
                var_33 = var_12;
                var_34 = 25157;
            }
        }
    }
    #pragma endscop
}
