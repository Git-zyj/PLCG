/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (!var_7);

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = var_10;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_11 = (((571338468 ? 571338458 : 31)));
                            arr_13 [i_3] [i_2] [i_2] = ((~(((!(!var_2))))));
                            var_12 = var_0;
                            var_13 &= ((var_9 ? ((~(~var_4))) : ((((var_0 ? var_4 : var_10))))));
                        }
                    }
                }
            }
            var_14 = (((var_3 ? (((var_9 ? 0 : 3723628850))) : ((var_5 ? var_1 : var_9)))));
            var_15 = -65530;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_16 = (!-var_10);
            arr_18 [i_5] = (~12);
            var_17 += -var_9;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_18 = (((~var_3) ? var_3 : ((var_5 ? var_1 : var_10))));
                            arr_29 [i_0] [i_5] [i_6] [i_7] [i_8] = var_1;
                            var_19 = (~-var_4);
                        }
                    }
                }
            }
        }
        var_20 = (max(var_20, (((var_4 ? var_5 : 5)))));
        var_21 = (min(var_21, var_3));
    }
    var_22 &= var_1;
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 4; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_23 = var_9;
                                var_24 = (var_3 ? ((var_6 ? var_1 : -var_5)) : -var_7);
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_25 = (~var_5);
                        var_26 &= ((!var_6) ? ((var_0 ? var_4 : var_8)) : (~var_4));

                        for (int i_15 = 3; i_15 < 20;i_15 += 1)
                        {
                            arr_50 [i_14] [i_14] [i_14] [i_14] = var_9;
                            var_27 = (min(var_27, var_9));
                        }

                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            var_28 = ((((var_3 ? var_3 : var_3))) ? ((var_0 ? var_8 : var_8)) : ((var_5 ? var_8 : var_3)));
                            var_29 = var_3;
                            var_30 = (min(var_30, (((-6 ? (~var_1) : (!var_4))))));
                        }
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            arr_57 [i_17] [i_14] [i_14] [i_11] [i_10] [i_9] = ((~(~var_8)));
                            var_31 = (min(var_31, ((((var_0 ? var_2 : var_2))))));
                        }
                        arr_58 [i_9] [i_9] [i_9] [i_9] [i_11] [i_9] = var_2;
                    }
                }
            }
        }
    }
    var_32 = (!var_8);
    #pragma endscop
}
