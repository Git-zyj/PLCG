/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min(var_15, 9223372036854775807));
    var_17 = (~(((var_4 + 2147483647) >> (((max(var_1, var_9)) - 18446744073709545528)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min((max(var_4, var_1)), var_7));
                var_19 = (((((-9223372036854775807 - 1) >= (-9223372036854775807 - 1))) ? (max(1274395973, 3020571335)) : ((max(((3731951616 ? 2147483622 : 127)), (!var_15))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, 48153));
                    var_21 = (max(var_21, var_3));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        arr_12 [i_0] [i_4] = 9223372036854775807;
                        var_22 = (max(var_22, var_5));
                    }
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        var_23 = var_12;
                        arr_16 [i_0] [i_1] [i_3] [i_0] = ((var_8 <= 2147483647) ? (((-1758691245459278987 + 9223372036854775807) << var_15)) : var_10);
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_24 *= var_9;
                        arr_21 [4] [i_1] [i_1] [2] [i_1] |= (((-9223372036854775807 - 1) / 9223372036854775807));
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 = 13546;
                        var_26 = (var_3 - var_12);
                    }
                    arr_26 [i_0] = (!1278013924);
                    arr_27 [12] [i_0 - 1] [i_1] [i_3] &= ((~((var_12 ? var_11 : var_0))));
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 16;i_10 += 1)
                        {
                            arr_36 [i_0] [i_1] [i_8] [i_0] [i_10] = (120 && 0);
                            var_27 = ((-var_0 ? var_7 : 238));
                            arr_37 [i_0] [i_0] [i_8] [i_9 + 1] [i_10] = -27908;
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            arr_41 [i_0] [i_1] [i_8] [i_9] [i_11] [i_0] [i_0 - 1] = -var_15;
                            var_28 = ((~(1 + var_9)));
                            arr_42 [i_0] [i_11] [i_8] [i_9] [i_11] |= var_5;
                            var_29 = 495;
                        }
                        for (int i_12 = 4; i_12 < 14;i_12 += 1)
                        {
                            arr_45 [i_0 - 1] [i_1] [i_0] [i_9 - 1] [i_12] = ((10 ? -1934289973 : 65535));
                            arr_46 [5] [i_1] [i_0] [i_9] [i_12 + 2] = var_2;
                        }
                        var_30 = var_8;
                    }
                    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            var_31 = 498;
                            var_32 *= var_11;
                        }
                        for (int i_15 = 2; i_15 < 16;i_15 += 1)
                        {
                            arr_55 [i_0 + 1] [i_1] [i_0] = (max(var_6, (min(1934289973, 0))));
                            arr_56 [i_13] [i_1] [i_1] [i_13] [i_15] [i_0] |= var_8;
                        }
                        arr_57 [i_0] [i_1] [i_8] [i_0] = (!var_8);
                        arr_58 [i_0] [i_0] [i_8] [i_13] = (-((1 ? 1 : var_5)));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
                    {
                        arr_63 [i_0] [i_0] [i_8] = 65525;

                        for (int i_17 = 2; i_17 < 15;i_17 += 1)
                        {
                            var_33 = 0;
                            arr_66 [i_17 - 1] [i_0] [i_0] = (((18446744073709551615 >> (1702542346 - 1702542342))));
                            arr_67 [i_0] [i_1] [i_8] [i_0] [i_17] = ((13546 ? 65535 : (((var_13 ? 1 : 35879)))));
                            var_34 = 16776192;
                            var_35 = 17754450979707392592;
                        }
                        arr_68 [i_0] [i_16] = 7019;
                    }
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        arr_72 [i_0] [i_1] [i_8] [i_18] = -518;
                        var_36 = ((max(65529, var_4)));
                        var_37 = (((~12) ? 6402 : (((!var_14) ? 7019 : var_8))));
                        var_38 = (min(var_38, ((var_4 + (((8192 ? var_0 : var_5)))))));
                        var_39 = -var_7;
                    }
                    var_40 *= min(((max(var_15, 32746))), var_11);
                }
            }
        }
    }
    var_41 *= (((min(-1159479199573007485, var_1))));
    #pragma endscop
}
