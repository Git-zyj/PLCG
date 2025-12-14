/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_19 = 637100157;
                        arr_12 [i_3] [i_1] [i_1] [i_3] = max((max(((-(arr_7 [i_0] [i_1] [11] [i_1]))), (!var_13))), (max(((1619187187 ? 1564763530 : (arr_10 [i_0] [i_1] [i_2] [i_3]))), var_2)));
                        arr_13 [i_0] [i_3] [i_3] [i_3] = (((((((max((arr_0 [i_1] [i_3]), 12))) / var_2))) ? var_3 : var_7));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_16 [i_4] [i_1] [i_3] [i_3] [i_1] [i_0] = ((-(((arr_9 [i_1] [i_1] [5] [i_4]) ? (arr_3 [i_0] [i_0]) : (arr_15 [i_0] [i_1] [i_1] [6] [6])))));
                            var_20 = (min((arr_11 [i_3] [i_3]), var_9));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_20 [i_0] [11] [i_3] [i_3] [6] [i_5] = (((arr_2 [i_2]) ? (arr_2 [i_2]) : (arr_2 [i_3])));
                            var_21 = (((((var_2 ? var_0 : var_2))) ? ((var_14 ? (arr_14 [i_0] [i_3] [i_3] [i_3] [i_5]) : (arr_14 [i_3] [i_3] [i_3] [6] [i_3]))) : (arr_6 [i_0] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_23 [i_3] [i_0] [i_3] [3] [3] [3] [i_3] = (((((arr_11 [i_3] [i_2]) ? (arr_11 [i_3] [i_1]) : 178)) <= (((!var_13) ? (arr_8 [9] [i_0] [i_1] [i_0]) : (arr_8 [i_0] [i_3] [i_0] [i_3])))));
                            arr_24 [i_3] [i_2] [i_3] = (max((((arr_14 [i_0] [i_3] [1] [i_0] [i_3]) ? (arr_11 [i_3] [i_2]) : 0)), (14704339752299749404 > -1749632057)));
                            var_22 = max(((((1619187187 ? var_11 : 1184)) % (arr_19 [i_0] [i_1] [i_3] [i_3] [i_6]))), ((max((arr_6 [i_0] [i_1]), 37901))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_23 = (((~var_15) >= 3271));
                        var_24 = (((arr_4 [i_1] [10]) ? (arr_4 [i_2] [i_2]) : var_15));

                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_25 = ((117 ? (arr_18 [i_0] [i_0] [i_2] [i_7] [i_8]) : (arr_19 [0] [i_7] [i_0] [i_1] [i_0])));
                            var_26 = (((arr_10 [i_0] [i_1] [i_2] [i_0]) ? var_11 : (arr_10 [i_1] [i_2] [i_7] [i_0])));
                            arr_30 [9] [11] [i_2] [9] [i_8] = var_15;
                            arr_31 [i_0] = (((arr_11 [i_0] [i_7]) ? (arr_11 [i_0] [i_1]) : (arr_11 [i_0] [i_7])));
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_27 = (((((arr_10 [8] [8] [i_7] [i_0]) < (arr_25 [0] [i_7] [i_2] [i_1] [i_0] [i_0]))) ? ((((arr_3 [i_0] [i_0]) <= var_9))) : (arr_7 [i_0] [i_1] [i_2] [i_7])));
                            var_28 = var_7;
                            arr_35 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [9] = -4817733787611580384;
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_29 = (((((arr_7 [i_10] [i_2] [5] [8]) <= 7)) ? (((arr_10 [4] [i_1] [i_1] [i_0]) ? (arr_1 [i_2]) : 7)) : -23));
                        var_30 = ((-100 ? (arr_11 [i_0] [i_0]) : (arr_11 [i_10] [i_2])));
                        var_31 = (((var_13 / 65534) <= (~1174)));
                        var_32 = (((arr_26 [0] [0] [i_2] [0]) * (arr_26 [0] [4] [i_1] [i_0])));
                    }
                    var_33 = (-2147483647 - 1);
                }
            }
        }
    }
    var_34 = 0;
    #pragma endscop
}
