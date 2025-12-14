/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [9] [9] = (((((var_13 ? var_12 : var_4))) ? (var_0 + var_11) : -var_2));
        arr_4 [i_0] = (((var_4 < var_13) <= ((var_13 ? var_1 : var_5))));
        var_14 = (((var_4 / var_0) <= (((((var_13 ? var_11 : var_9))) ? var_2 : ((var_6 ? var_11 : var_0))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 = ((var_13 ? var_1 : var_2));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_16 = ((!(!var_0)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        var_17 = (~var_8);
                        var_18 ^= ((-((var_5 ? var_8 : var_8))));
                        arr_15 [i_1] = var_13;
                        arr_16 [i_1] [i_4] [i_4] = var_8;
                        var_19 ^= var_5;
                    }
                }
            }
            var_20 = (min(var_20, ((((((var_12 ? var_6 : var_6))) * (var_6 / var_0))))));
            var_21 |= var_0;

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                arr_19 [i_1] = (-6747489064755023033 ? 0 : 116823537);
                var_22 = (143 && 8829480653752250811);

                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    var_23 = (min(var_23, (~var_10)));
                    arr_22 [i_1] [i_2] [i_1] [i_5] [i_6 + 2] = (var_1 >= -var_4);
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_24 = (max(var_24, (var_13 ^ var_13)));
                    var_25 = -9617263419957300809;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            {
                arr_32 [i_8] [i_9] [i_9] = (~var_9);
                var_26 = var_12;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    var_27 = (max(var_27, -var_9));
                    var_28 = (!-var_1);
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_29 = var_10;
                                var_30 &= ((12 ? -89 : 16));
                                var_31 -= (((~var_11) != (!var_8)));
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        var_32 = (((((var_5 ? var_10 : (var_7 < var_13)))) ? ((-((var_8 ? var_3 : var_12)))) : (var_6 / var_7)));

                        /* vectorizable */
                        for (int i_16 = 3; i_16 < 23;i_16 += 1)
                        {
                            var_33 = (var_7 ? (((-3773844715656007957 ? 0 : -24))) : (var_0 % var_3));
                            arr_49 [i_12] [i_15] [i_12] [1] [i_10] = (var_1 ? var_2 : var_7);
                            var_34 = ((9617263419957300809 ? 41 : 1809407696181501655));
                            var_35 = (min(var_35, (((var_5 ? -var_9 : (var_11 - var_12))))));
                        }
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            arr_53 [i_10 + 2] [i_11] [i_12] [i_15] [i_17] |= ((~(!127)));
                            var_36 += (770043262 ? -89 : 14613314493194397449);
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_37 = ((((var_8 ? var_4 : var_10)) - ((var_0 ? var_1 : var_4))));
                            arr_57 [i_18] [i_18] [i_12] [i_15] [i_12] = (-(!var_11));
                        }
                        arr_58 [i_10] [i_10] [i_10] [i_10] [13] [i_10] = (((((var_7 ? var_0 : var_6))) ? var_11 : ((var_12 ? var_0 : var_2))));
                    }
                    arr_59 [2] [i_11] [2] [13] = ((var_2 * ((-(var_11 / var_13)))));
                }
            }
        }
    }
    var_38 = var_3;
    #pragma endscop
}
