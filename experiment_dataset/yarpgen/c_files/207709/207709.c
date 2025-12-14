/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((-8589934591 ? ((var_5 ? 8589934615 : var_5)) : ((8589934615 ? var_9 : 734782588149971558))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        var_15 *= ((-((1 ? var_2 : -8589934591))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = 1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_13 [i_2] [i_2] [i_2] = (arr_8 [i_2] [i_2]);
                        arr_14 [i_1] [i_1] [i_1] [3] [i_1] [i_2] = (((8589934591 != -8589934591) >> (var_6 + 51)));
                        var_17 = (arr_12 [i_4] [i_2] [i_1] [i_2] [i_1]);
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_18 = (min(var_18, var_11));
                        var_19 = (((arr_9 [i_2]) ? (arr_1 [i_2]) : 104));
                        arr_17 [i_1] [i_2] [1] &= ((-8589934592 ? -8589934616 : (arr_3 [i_1])));
                    }
                    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_1] [i_2] [i_3] = ((((0 ? 8589934591 : 4294967295)) < (arr_8 [i_2] [i_3 + 1])));
                        arr_23 [i_6] [i_2] [i_1] [i_2] [i_1] = (arr_0 [i_3 + 1] [i_6 + 3]);
                        arr_24 [i_2] [9] [i_3] [i_1] [i_1] [i_3] = (8589934610 ? (arr_9 [i_2]) : (arr_6 [i_1] [i_6]));
                    }
                    for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_20 *= (arr_27 [i_1]);
                            arr_30 [i_1] [i_2] [i_3 - 1] [i_2] = (!var_9);
                            var_21 |= var_6;
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_22 = 73;
                            arr_34 [i_2] [i_2] [i_3] [i_2] [i_2] = var_6;
                        }
                        arr_35 [i_1] [i_3] [i_2] [i_2] [i_1] = ((+((-8589934600 ? (arr_5 [i_1] [i_3]) : -8727634839841928695))));
                        arr_36 [i_7 - 1] [i_2] [i_2] = (((arr_1 [i_3 + 1]) ? -9 : (arr_1 [i_3 - 1])));
                        var_23 = (((arr_9 [i_2]) | 93));
                        arr_37 [i_1] [i_2] [10] = ((-63 ? -2847522795564784028 : (arr_19 [i_3] [i_2] [i_3])));
                    }
                    var_24 += 76;
                    var_25 = (min(var_25, (arr_5 [i_3] [i_1])));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_26 = 8589934610;
                                arr_44 [i_1] [i_2] = ((~(arr_41 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_10 - 1] [i_10] [i_10 + 1])));
                                arr_45 [i_3] [i_3] [i_3 - 1] [i_2] [i_3] [i_1] [i_1] = 8727634839841928694;
                                var_27 = (min(var_27, var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_2;
    var_29 = (min(var_8, var_1));
    #pragma endscop
}
