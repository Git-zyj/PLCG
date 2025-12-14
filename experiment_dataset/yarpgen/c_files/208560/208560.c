/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_15 = (var_9 < var_6);

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_16 = var_8;
            var_17 = (((!var_4) || var_6));
            var_18 = var_5;

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_19 = var_1;
                var_20 = var_10;
                arr_8 [7] [i_2] = (~var_2);

                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_21 = var_8;
                    var_22 = var_3;

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_23 = ((var_9 % ((var_1 ? var_7 : var_12))));
                        var_24 = (var_1 / var_11);
                    }
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        var_25 = var_10;
                        var_26 = var_2;
                        var_27 = (var_9 - var_2);
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_28 &= ((var_5 ? (var_6 > var_5) : var_7));
                        var_29 = var_6;
                    }
                    var_30 = ((var_9 ? var_2 : var_1));
                    var_31 = (var_3 * var_10);
                }
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_22 [i_0 + 2] [i_0 + 2] [i_7] [i_7] = var_6;
                var_32 &= var_5;
            }
        }
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            var_33 = (var_4 + var_6);
            arr_25 [6] = var_5;
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        var_34 |= var_11;
                        var_35 = var_2;
                    }
                }
            }
            var_36 = var_11;
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 13;i_12 += 1)
                {
                    {
                        var_37 = var_2;
                        var_38 |= (var_12 >= var_5);
                        var_39 = (~-var_8);
                    }
                }
            }
        }
        for (int i_13 = 2; i_13 < 13;i_13 += 1)
        {
            var_40 = ((var_4 ? -var_2 : ((var_6 ? var_13 : var_13))));
            var_41 = (~var_2);
            var_42 = (((var_1 ? var_4 : var_8)));
            var_43 = var_1;
            var_44 = var_14;
        }

        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            var_45 = ((var_12 ? var_7 : var_2));
            var_46 = ((var_14 ? ((var_10 ? var_12 : var_6)) : var_8));
            var_47 -= var_14;
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            {
                                var_48 += (~var_8);
                                arr_53 [i_19] [i_15] [i_17] [i_17] [i_17] [i_16] [i_15] = (min(var_10, (max((min(var_3, var_7)), var_0))));
                            }
                        }
                    }
                    var_49 = ((var_2 ? (((min(var_14, var_5)))) : (max(var_4, var_8))));
                    var_50 = (((((min(var_7, var_7)))) ? (((((var_1 ? var_0 : var_9))))) : var_12));
                }
            }
        }
    }
    #pragma endscop
}
