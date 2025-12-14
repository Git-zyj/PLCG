/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = -0;
                    var_20 += (max(((var_17 ? (max(131071, -16)) : (((var_8 ? var_10 : var_6))))), (((!(((var_13 ? var_1 : var_10))))))));
                    var_21 = (min(var_21, (((~(((var_16 ? var_4 : var_8))))))));
                }
            }
        }
    }
    var_22 = ((((((var_5 ? var_12 : var_9)))) + (var_5 <= var_8)));
    var_23 = ((min(((max(var_14, var_4))), ((var_12 ? var_7 : var_3)))));

    /* vectorizable */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                {
                    var_24 = (((11507736683236498278 ? 2810593087 : 112)));
                    var_25 = (((var_12 ? var_0 : var_3)));
                    var_26 = (max(var_26, (~var_12)));
                }
            }
        }

        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_27 = (min(var_27, var_6));
            arr_17 [i_3] = var_4;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_20 [i_3] = var_8;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 10;i_9 += 1)
                {
                    {
                        var_28 = (min(var_28, (!-1)));
                        var_29 = (min(var_29, (((~((var_17 ? var_2 : var_16)))))));

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_30 = ((var_7 ? var_6 : (~var_7)));
                            var_31 = (max(var_31, (((-((var_17 ? var_13 : var_14)))))));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_31 [i_3] [i_7] [i_8] [0] = (!1);
                            var_32 = (65535 == 63);
                            arr_32 [0] [1] [i_8] [i_3] = var_11;
                            var_33 = (((((var_2 ? var_0 : var_3))) ? (((var_3 ? var_13 : var_2))) : -var_5));
                            var_34 = ((((var_15 ? var_11 : var_4))) ? ((var_2 ? var_12 : var_1)) : var_9);
                        }
                        var_35 = (min(var_35, (((~(!var_5))))));
                    }
                }
            }
            var_36 = var_4;
            var_37 = (((((var_6 ? var_12 : var_5))) ? (((var_3 ? var_2 : var_6))) : ((var_4 ? var_7 : var_9))));
        }
        var_38 = ((var_11 ? var_4 : (!var_0)));
        var_39 = (max(var_39, (~var_18)));
        var_40 += (((var_0 ? var_15 : var_17)));
    }
    /* vectorizable */
    for (int i_12 = 4; i_12 < 9;i_12 += 1) /* same iter space */
    {
        arr_35 [i_12] = ((1 ? 2147483647 : 118));

        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            arr_39 [i_12 - 3] [i_12] [i_13] = (((((var_18 ? var_12 : var_1))) ? var_11 : var_9));

            for (int i_14 = 3; i_14 < 9;i_14 += 1)
            {
                var_41 += (((~var_11) ? var_2 : ((var_13 ? var_15 : var_5))));
                var_42 = var_16;
                var_43 = var_14;
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_44 += var_10;
                var_45 = (((((var_4 ? var_17 : var_17))) | ((var_8 ? var_16 : var_15))));
                var_46 = (((((var_1 ? var_6 : var_16))) ? var_4 : ((var_7 ? var_13 : var_12))));
                arr_46 [i_12] [i_15] [i_12] = -1;

                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_47 = (~var_1);
                        var_48 = ((var_5 ? var_16 : var_7));
                    }
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        var_49 += var_6;
                        var_50 += (!var_12);
                    }
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        var_51 += (((((0 ? 35 : -54))) ? -126 : ((-124 ? 440645287 : 48577))));
                        var_52 = 0;
                        var_53 = (((~var_8) * var_0));
                    }
                    for (int i_20 = 0; i_20 < 10;i_20 += 1)
                    {
                        arr_61 [i_12 - 2] [1] [1] [i_13] [i_13] [3] [i_12] = (var_7 >= var_6);
                        arr_62 [i_12] [i_13] [6] [i_16] [i_12] = ((1 ? 0 : 15492656505647882893));
                        var_54 += (((~var_12) ? ((10460742800277574508 ? 18446744073709551615 : 43)) : var_8));
                    }
                    arr_63 [i_12 - 3] [i_12] [i_12] [i_12] [i_12] [i_12 - 3] = ((0 + ((var_13 >> (var_11 + 2347278093101232704)))));
                }
            }
            arr_64 [1] [i_12] [i_12 - 2] = (var_13 / var_2);
        }
    }
    for (int i_21 = 4; i_21 < 9;i_21 += 1) /* same iter space */
    {
        arr_68 [i_21] = (((max(2850566009, 8)) <= ((min((~var_17), ((var_18 ? var_1 : var_5)))))));
        var_55 = ((((var_13 >= (min(var_1, var_16)))) ? (((var_16 ? ((var_2 >> (var_2 - 221))) : var_10))) : ((~((var_9 ? var_0 : var_11))))));
    }
    #pragma endscop
}
