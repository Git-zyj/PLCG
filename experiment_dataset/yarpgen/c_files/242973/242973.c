/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((var_1 ? ((var_6 ? var_15 : var_14)) : (var_16 <= var_5)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_18 = -var_11;

                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = ((var_15 ? (~var_5) : var_2));
                    var_19 = ((64 ? var_0 : var_7));

                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_20 = (!20376);
                        var_21 = var_11;
                        var_22 = (min(var_22, var_9));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_20 [i_0] [i_3] [i_3] = (20376 && 20386);
                        var_23 = ((2145667572 ? 52 : 45150));
                        var_24 = ((65535 ? 45136 : ((10 >> (-1 + 10)))));
                    }
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_25 -= (!(var_4 + var_13));
                    arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_14;
                    arr_24 [i_0] |= var_5;
                    arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                }
                var_26 = 150366391;
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_27 = (~var_10);
                arr_29 [i_0] [i_0] [i_7] [i_0] = (!var_4);
                var_28 = ((var_2 ? var_13 : var_9));
                var_29 = (max(var_29, (!var_10)));
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_30 = (-51 / var_10);
                var_31 = var_5;
            }
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                arr_37 [i_0] [i_0] [i_0] [i_0] = (!var_11);
                var_32 = (-3014383345230983091 != (20387 * var_7));

                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_33 -= var_16;
                        arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_15;
                        var_34 = (~var_4);
                    }
                    var_35 = -var_8;
                    var_36 = ((73 ? 61 : var_12));
                    arr_44 [i_1] [i_1] = var_11;
                    var_37 = var_0;
                }
            }
            arr_45 [i_0] [i_0] = 2767398232;
        }

        for (int i_12 = 3; i_12 < 16;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_38 = ((1527569076 - (65531 * var_3)));
                        var_39 -= (((!10596403458421689509) - 1));

                        for (int i_15 = 2; i_15 < 14;i_15 += 1)
                        {
                            var_40 = (((((10 ? -1685871113824270432 : 65535))) ? var_12 : (var_2 * var_12)));
                            var_41 |= (((var_15 ? var_4 : -67)));
                            arr_56 [i_0] [i_15] = 2448684684;
                            var_42 = 1708686096;
                        }
                        var_43 = var_8;

                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            var_44 = 45154;
                            arr_59 [i_0] [i_16] [i_0] [i_16] [i_0] = 511;
                            var_45 = (((4294967295 ? var_10 : 511)));
                        }
                    }
                }
            }
            arr_60 [i_0] [i_0] [i_0] = var_11;
            var_46 = var_14;
            var_47 = (min(var_47, ((var_13 ? (~1686908323) : (~var_1)))));
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                {
                    arr_70 [i_18] [i_18] [i_18] = 162;
                    var_48 = 0;
                }
            }
        }
        arr_71 [i_17] = (~193);
        arr_72 [i_17] = ((var_10 ? (2147483647 + 150366391) : var_11));
        arr_73 [i_17] = (var_0 >= 4144600904);
        arr_74 [i_17] = var_9;
    }
    for (int i_20 = 0; i_20 < 17;i_20 += 1) /* same iter space */
    {
        var_49 = (max(var_49, (((((!(((65518 ? 2147483626 : 0))))) ? var_12 : ((min((var_8 | 5317228012990340468), 1))))))));
        var_50 = var_4;
        var_51 = (((var_0 == -5317228012990340453) > var_5));
        arr_77 [i_20] = (min((2037180676 > 0), var_16));
    }
    for (int i_21 = 0; i_21 < 17;i_21 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_22 = 0; i_22 < 17;i_22 += 1)
        {
            /* LoopNest 2 */
            for (int i_23 = 1; i_23 < 1;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 17;i_24 += 1)
                {
                    {
                        arr_90 [i_21] [i_21] [i_21] [i_21] [i_21] = -115;
                        arr_91 [i_23] = (var_14 ? -5317228012990340484 : var_2);
                        arr_92 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((!(82 - var_11)));
                        var_52 = var_6;
                        arr_93 [i_22] [i_22] = (9223372036854775786 ^ 46);
                    }
                }
            }
            var_53 = (max(var_53, (65535 - var_5)));
            /* LoopNest 2 */
            for (int i_25 = 1; i_25 < 16;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 17;i_26 += 1)
                {
                    {
                        var_54 = ((var_0 ? 0 : -46));
                        var_55 = var_8;
                    }
                }
            }
        }
        arr_99 [i_21] = (((!311497514) ? (!2566351563) : -var_11));
    }
    var_56 |= var_15;
    #pragma endscop
}
