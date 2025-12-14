/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((~(min(var_14, var_13)))) << ((125 ? var_7 : ((var_11 ? 1 : var_5))))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (!-4);
        var_16 = -var_3;
        arr_3 [i_0] = ((~(~-119)));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 = (max(var_17, -var_9));

            /* vectorizable */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                var_18 = (min(var_18, (((((var_3 ? var_8 : var_5)) >> ((((var_13 ? var_12 : var_14)) - 19)))))));
                var_19 -= var_0;

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_20 = (!194);

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_21 = (max(var_21, (((var_5 ? ((var_12 ? var_10 : var_6)) : var_7)))));
                        var_22 = -var_2;
                        var_23 = var_10;
                        var_24 = -118;
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_25 = (min(var_25, var_6));
                        var_26 = var_11;
                        var_27 = (160795876 ? var_6 : var_3);
                    }
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_20 [i_6] [i_2] [i_2] [i_0] [i_1] [i_0] = -var_1;
                    var_28 = (~-120);
                    arr_21 [i_2] [i_0] [i_0] = var_6;

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_1] [i_7] = -var_6;
                        var_29 = ((var_5 ? var_13 : var_2));
                    }
                }
                arr_25 [i_1] [i_1] [i_1] [i_2] = var_12;
            }
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                arr_31 [i_8] = (~-var_10);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_30 = (max(var_30, var_0));
                            arr_37 [i_8] = (min(459250552783772986, -1));
                            var_31 = (max(var_31, var_12));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 9;i_13 += 1)
                    {
                        {
                            var_32 ^= ((7 ? ((((var_13 > var_13) << (var_12 - 16)))) : var_10));
                            var_33 = ((~(var_7 << var_9)));
                            var_34 |= ((((((var_8 ? var_12 : var_0)) + 9223372036854775807)) >> ((((32 ? var_3 : var_12)) - 2786677451))));
                        }
                    }
                }
            }
            arr_42 [i_0] [3] [i_8] = (((((var_14 ? var_9 : -7396))) ? ((~(!-4))) : -var_8));
            arr_43 [i_8] = ((-(~var_14)));
        }
    }
    var_35 = ((~((var_2 ? ((11608059196499982387 ? 26 : -122)) : ((33 ? 1 : var_13))))));
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 20;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 21;i_15 += 1)
        {
            {

                /* vectorizable */
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {

                        for (int i_18 = 4; i_18 < 20;i_18 += 1)
                        {
                            var_36 = var_3;
                            var_37 *= (((var_3 ? var_11 : var_0)));
                            var_38 = var_10;
                        }
                        arr_58 [1] [i_14] [i_16] [i_14] [i_14] = var_3;

                        for (int i_19 = 4; i_19 < 20;i_19 += 1)
                        {
                            arr_62 [i_14] [4] [i_16] [i_17] [19] = (!var_9);
                            var_39 |= (var_6 & var_13);
                            arr_63 [i_14] [i_15] [i_16] [i_14] [i_16] = 42;
                        }
                        arr_64 [i_14 + 1] [i_15] [i_17] [19] [i_14] [i_14 + 1] = (var_8 * var_5);
                    }
                    var_40 = var_9;
                    arr_65 [i_14] [i_14 - 1] [i_15] [i_14 - 1] = var_7;
                }
                var_41 *= var_11;
                arr_66 [14] [i_14] = ((~(!var_5)));
            }
        }
    }
    var_42 = var_5;
    #pragma endscop
}
