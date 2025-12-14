/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((-9176305507401555695 && (((6118748115268855573 ? 100647780 : 4030637683)))))), (min(-6543506612228366930, 10745729150252665764))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 22;i_4 += 1)
                            {
                                arr_11 [i_4 - 1] [i_2] [i_2] [i_2] [i_0] = var_4;
                                var_15 = var_3;
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_0] = (((~-126) ? ((7 ? 10745729150252665764 : 4194319526)) : (((-9176305507401555711 ? 2227388213 : 241)))));
                                var_16 = (1 ? 125249775424525127 : 0);
                                var_17 = ((arr_3 [i_0] [i_0 + 2] [i_0 + 2]) >= 11308435794787545515);
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                var_18 = (min(var_18, ((min(10745729150252665764, -10745729150252665764)))));
                                var_19 = (((1136717526 ? (((arr_16 [i_2] [17] [5] [i_1 - 2] [i_2]) ? (arr_0 [i_3]) : var_10)) : var_7)));
                                var_20 = (min(var_20, ((-(~100647779)))));
                                var_21 = ((-8305514950753909085 ? (((1 << (((~2067579069) - 2227388226))))) : ((946533214825162128 ? 673937678 : 2067579067))));
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                arr_19 [i_2] [i_3] = (~(min(-94, 3409073413473338935)));
                                var_22 = (((((1 ? var_2 : -7658121578474670001))) ? (((!var_8) ? (((var_5 ? 154 : 2227388214))) : (arr_5 [i_0] [i_2]))) : -5));
                                var_23 = (min(((min(((var_12 ? (arr_0 [i_0]) : var_7)), var_9))), (min((((1 ? 15080 : 0))), (arr_1 [i_0 + 2])))));
                                var_24 = (--1);
                            }
                            var_25 = (var_7 || var_2);
                        }
                    }
                }
                arr_20 [i_1 + 1] = (--1);
                var_26 = (max(var_26, (arr_0 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                var_27 = (max(var_27, ((min(((((var_12 ^ -3) ? var_6 : (arr_16 [i_7] [i_7] [i_8] [i_8] [6])))), (min(-5855028699585716722, 1)))))));
                var_28 *= (((var_2 ? (((arr_14 [i_8] [i_8] [i_8] [i_8] [i_8] [i_7] [i_7]) ? 2067579081 : var_12)) : (((min((arr_16 [16] [10] [20] [i_7] [2]), var_0)))))));
            }
        }
    }
    #pragma endscop
}
