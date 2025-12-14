/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (max(9223372036854775807, -7792))));
                    var_12 = (144115187538984960 >= 52);
                }
            }
        }
        var_13 = ((4 ? -1891251274490452855 : 1328623808295387479));
        var_14 = arr_4 [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        arr_10 [i_3] = -1;
        arr_11 [i_3] [i_3] = ((10 ? 16 : 1));
        var_15 = (8206710384904745706 || 3950177089);
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((-268435456 ? 1406655725695129439 : -486668109));

                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            arr_26 [i_7] [i_7] [i_7] [i_7] = ((2473312309 ? 249 : 2841756671770464456));
                            var_16 = (arr_25 [i_4] [i_7]);
                        }
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            arr_29 [i_9] [i_7] [i_6] [i_4] [i_4] [i_9] = (!18);
                            arr_30 [i_4] [i_9] [i_9] = (-1943081125 & 915750586132271658);
                        }

                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            var_17 = ((1 ? 9326 : -1));
                            var_18 = (46 && 2996533132);
                            arr_33 [i_10] [i_6] = -1751394310;
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_15 [i_6 - 1]);
                            var_19 = var_5;
                            arr_39 [i_11] [i_11] [i_11] [i_11] [i_11] |= 0;
                        }
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            var_20 = (max(var_20, var_8));
                            var_21 = ((-1 ? 120 : 18014398509481983));
                            var_22 = 9223372036854775807;
                        }
                        for (int i_13 = 2; i_13 < 13;i_13 += 1)
                        {
                            arr_47 [i_4] [i_4] [i_6] [i_6] [i_6] [i_7] [i_13 + 1] = arr_19 [i_5] [i_13];
                            var_23 = -32747;
                            arr_48 [i_5] = ((2084784572 ? -1450 : 19));
                        }
                        var_24 &= (~16383);
                        arr_49 [i_4] [i_5] [i_6] [i_5] = -69;
                    }
                }
            }
        }
        var_25 = (~-1812451653);
    }
    var_26 += var_6;
    #pragma endscop
}
