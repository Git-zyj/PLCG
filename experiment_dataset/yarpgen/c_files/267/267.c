/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 -= (((((var_1 ? var_11 : var_1)) + var_10)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_14 = var_10;
                        var_15 = (arr_1 [i_3]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_16 = ((-(arr_6 [i_0] [i_1] [i_1 - 2] [i_1 - 2] [7] [i_3 + 1])));
                            arr_12 [i_1] [i_1] [i_4] [i_2] [i_4] [i_1] [i_0] = (arr_1 [10]);
                            var_17 = ((var_7 ? var_8 : var_9));
                            arr_13 [i_0] [i_1] = var_9;
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_18 = var_5;
                            var_19 = var_7;
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_20 [i_6] [i_1] = ((var_11 ? (arr_1 [i_0]) : ((var_4 % (arr_7 [i_0] [i_0] [i_1])))));
                            var_20 += (max(((((arr_3 [i_2] [i_6]) <= (!var_0)))), ((((((arr_8 [i_0] [i_0]) ? var_8 : (arr_8 [i_0] [i_1])))) ? (arr_4 [i_2]) : (arr_0 [3])))));
                        }

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_24 [i_1] = (min(var_2, var_3));
                            var_21 = ((var_3 ? (var_7 && var_10) : ((var_9 & (arr_3 [i_1 + 1] [i_3 + 2])))));
                            var_22 |= (arr_15 [13] [i_1] [i_1 + 2] [i_3] [i_3 + 1]);
                        }
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_23 = var_9;
                        arr_28 [i_1] = ((var_1 & (min(var_1, 46))));
                        var_24 *= (arr_1 [i_8]);
                        arr_29 [i_0] [i_1] [i_1] [i_8] [i_2] [i_0] = (min((arr_11 [i_1] [12] [i_1 + 1] [i_8] [12] [i_8]), ((min((arr_15 [16] [i_1] [i_1 + 1] [9] [i_2]), var_3)))));
                        var_25 = ((255 ? (((var_5 ? var_12 : var_6))) : (((arr_17 [i_0] [i_0] [11] [i_1] [11] [3]) * (arr_26 [i_8])))));
                    }
                    arr_30 [i_0] [i_1] [i_1] = var_3;
                    var_26 = ((var_9 > (((arr_26 [i_0]) ? (arr_21 [i_0] [i_0]) : var_10))));
                }
            }
        }
        var_27 = ((((min(var_8, (var_0 & var_8)))) ? (arr_3 [i_0] [i_0]) : ((var_12 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_31 [15] [i_0] = var_3;
    }
    var_28 = var_6;
    var_29 = ((var_4 > (max(1, 9223372036854775807))));
    var_30 = var_1;
    #pragma endscop
}
