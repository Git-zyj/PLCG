/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 = (((((((min(var_9, var_7))) ? var_0 : ((var_1 ? var_12 : var_4))))) ? var_1 : (((((var_12 ? var_6 : var_14))) ? (~var_0) : var_3))));
            arr_7 [i_0] [i_0] [i_1] = (((!var_5) ? (-10 | 10965) : ((~((max(var_7, var_3)))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = ((var_10 ? (var_11 >= var_14) : var_2));
            var_17 = (var_13 >= var_3);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_18 = min(((((min(var_11, var_7))) ? ((var_0 ? var_13 : var_14)) : ((min(var_7, var_12))))), (min(var_6, (~var_0))));
            var_19 &= ((((var_7 ? var_10 : var_7))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_20 [i_0] [i_0] [i_3] [i_5] = (~(~var_6));
                        var_20 -= (max(var_11, (((((max(var_1, var_6)))) & ((var_5 ? var_11 : var_8))))));
                        var_21 = (min(var_21, (((-var_1 < (((((var_3 ? var_13 : var_11))) ? (var_4 & var_1) : var_13)))))));
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_22 = (((max(-var_7, var_6)) + ((-2147483646 + (max(var_5, var_9))))));
            arr_23 [i_0] [i_0] = ((((((((min(var_14, var_13)) + 2147483647)) >> ((((var_13 ? var_11 : var_9)) - 1791683356))))) ? (max(var_11, (var_4 - var_9))) : (var_5 < var_1)));
            arr_24 [i_0] [i_0] = ((((max(32766, 32744))) ? 32767 : -1));

            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_7] [i_6] = var_8;
                            var_23 = ((-(max(((var_3 ? var_9 : var_3)), var_0))));
                        }
                    }
                }
                var_24 = (min(var_24, ((max(((max(var_14, var_4))), ((max((max(var_9, var_13)), var_6))))))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_40 [i_0 + 1] [i_6 + 1] [i_6 + 1] [i_0] [i_11] [i_11] = (-32754 <= 2147483647);
                            var_25 = min(var_4, (((var_0 * var_2) / var_11)));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                arr_43 [i_0 + 1] [i_6] [i_0] [4] = (((((((var_12 ? var_10 : var_9))) ? (!var_1) : -var_5)) > (((((var_11 ? var_8 : var_1))) ? (!var_14) : (var_3 / var_6)))));
                arr_44 [i_0] [i_0] [i_6 + 1] [i_12] = (max((-32767 - 1), 60628));
            }
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_26 = (max(var_26, -var_11));
                            var_27 = (min(var_27, ((max(-var_13, var_12)))));
                        }
                    }
                }
                arr_53 [i_0] [i_6] [i_0] [i_0] = ((var_8 ? (max(var_10, var_4)) : (min(var_11, var_7))));
                var_28 = (min(var_28, ((((((((max(var_10, var_0))) || (var_8 & var_4)))) * (((min(var_10, var_12)) & (!var_5))))))));
                var_29 = (max((((var_10 && (var_0 ^ var_0)))), (((884784580 ? -884784565 : 884784560)))));
                arr_54 [i_0] = var_9;
            }
        }

        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            arr_57 [i_0] [14] = (((((((max(var_3, var_3))) - (var_10 + var_11)))) ? (((max(var_8, var_6)) - -var_8)) : ((max((var_14 + var_9), var_1)))));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    {
                        var_30 &= var_5;
                        arr_63 [i_0] [i_16] [14] |= ((((((var_4 % var_3) + 2147483647)) << (var_6 + 22463))));
                        var_31 = var_8;
                    }
                }
            }
            var_32 = (min(var_32, ((((var_14 | var_10) ^ ((11 ? -64 : 65535)))))));

            /* vectorizable */
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 23;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        {
                            var_33 &= var_5;
                            var_34 = var_4;
                        }
                    }
                }
                var_35 += (var_10 % var_2);
                var_36 = var_10;
                var_37 = ((55 % ((255 ? 1 : 2016))));
            }
        }
        var_38 = (min(((4908 ? -2147483647 : -var_11)), -2035));
        var_39 = (max((~var_7), var_13));
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 20;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            {
                var_40 += (max(((var_12 ? var_12 : var_5)), (max(var_9, var_11))));
                arr_79 [i_22] [i_22] [i_22] = ((~var_9) ? (var_9 <= var_1) : ((var_12 ? var_5 : var_11)));

                for (int i_24 = 0; i_24 < 20;i_24 += 1)
                {
                    arr_83 [i_24] [i_23] [i_24] = (var_6 << var_0);
                    var_41 = (max(var_41, var_8));
                    var_42 = -1;
                }
            }
        }
    }
    #pragma endscop
}
