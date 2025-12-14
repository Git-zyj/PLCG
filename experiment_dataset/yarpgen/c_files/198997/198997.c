/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = (max(var_18, (((var_7 ? var_7 : ((var_8 ? ((var_13 ? var_7 : var_2)) : var_16)))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_19 = var_8;
            var_20 = (~1);
        }
        arr_4 [i_0] = ((!((((var_7 ? var_16 : var_16))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_21 = ((var_12 ? (!var_0) : ((var_6 ? var_0 : var_4))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_22 = var_1;
                    arr_12 [i_2] [i_2] [10] = ((var_10 ? var_8 : -18446744073709551591));
                    var_23 -= var_14;
                    arr_13 [i_4] [5] [5] = ((var_1 ? var_7 : var_0));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_24 = -var_9;
                    var_25 = (min(var_25, (((var_14 ? var_0 : var_5)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_25 [i_6] [i_5] [i_6] [i_7] [i_8] = (~var_2);
                                var_26 = (max(var_26, (((var_17 ? var_5 : var_15)))));
                                var_27 += -var_0;
                                arr_26 [i_6] [i_5] [i_6] [i_7] [i_8] = ((var_1 ? var_5 : var_1));
                                var_28 = (!var_0);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                arr_32 [i_10] = var_1;
                arr_33 [i_10] [i_10] [i_10] = (!-var_13);
                var_29 = (((~(~4294967295))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 18;i_12 += 1)
        {
            {
                arr_39 [i_11] [i_11] [i_12] = var_15;
                arr_40 [i_11] = var_2;
                arr_41 [2] [2] &= (((-((var_12 ? var_7 : var_2)))));
            }
        }
    }
    #pragma endscop
}
