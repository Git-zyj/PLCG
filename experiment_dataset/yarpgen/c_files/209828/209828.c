/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((max(var_5, var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_13 *= (!9223372036854775807);
                var_14 = var_1;
                var_15 += -9223372036854775807;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((~(!var_3))))));
                            arr_10 [i_0] = var_2;
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_17 |= 2507594031402354238;
                        var_18 &= var_9;
                        var_19 = (((var_7 ? var_1 : var_11)));
                        arr_22 [i_7] [i_7] [i_7] [i_7] = ((-(~164)));
                    }
                }
            }
        }
        var_20 = (9223372036854775803 == var_5);

        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            var_21 += ((((min(18446744073709551603, 2147483647))) ? var_3 : var_1));
            arr_25 [i_8] = 32362;

            /* vectorizable */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_22 = var_7;
                var_23 -= var_3;
                var_24 = (var_4 <= var_10);
            }
            /* vectorizable */
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                var_25 = (max(var_25, (((var_9 ? 0 : var_3)))));
                var_26 = (max(var_26, 255));
                arr_30 [i_8] [i_8] [i_10 + 3] = ((!(!var_11)));
                var_27 += 40307;
            }
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        {
                            arr_37 [i_4] [i_8 - 1] [i_4] [i_12] [i_12] [i_8 - 1] &= (max((-1948 < var_1), var_8));
                            var_28 = (max(var_28, (~0)));
                            arr_38 [i_4] [i_8 + 2] [i_11] [i_8] [i_12] [1] [i_13] = -3268322337;
                        }
                    }
                }
                arr_39 [i_11] [i_8] [i_8] [i_4] = -31;

                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    arr_43 [13] [i_8] [13] [i_8] [i_8] [i_8] = 1;
                    var_29 *= (max(1, 18446744073709551615));
                    var_30 = (min(var_30, (((((min(var_1, 1655964817))) ? (min(var_9, var_5)) : 31)))));

                    for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        arr_46 [i_4] [i_8] [i_11] [8] [i_8] [i_15] = var_11;
                        var_31 = (max(var_31, var_2));
                        arr_47 [i_4] [7] [i_8] [7] = (1 ^ var_10);
                        var_32 = -2090448994;
                    }
                    /* vectorizable */
                    for (int i_16 = 1; i_16 < 14;i_16 += 1) /* same iter space */
                    {
                        arr_50 [i_4] [i_8] [0] &= -18748;
                        var_33 = ((var_5 ? var_9 : var_3));
                        arr_51 [i_4] [4] [0] [i_4] [i_16] &= ((~(-2147483647 - 1)));
                        var_34 *= ((var_7 ? 911247308512027690 : var_2));
                    }
                }
                arr_52 [i_8] = -8544958271498422984;
                var_35 = ((!((max(var_11, var_5)))));
            }
        }
    }
    var_36 = (-32767 - 1);
    #pragma endscop
}
