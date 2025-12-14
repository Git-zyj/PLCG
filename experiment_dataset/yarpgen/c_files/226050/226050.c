/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                var_13 ^= -1;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_14 = (((arr_5 [i_4] [i_3] [i_2]) | -112));
                            var_15 = (arr_1 [i_0]);
                            var_16 = var_3;
                        }
                    }
                }
            }
            var_17 *= ((min(-4908742794067309351, ((var_4 ? 6 : var_7)))));
        }
        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
        {
            arr_15 [1] [i_5] = (((((arr_11 [i_5]) ? 12 : var_9)) != ((((arr_11 [i_5]) <= var_6)))));
            var_18 = (min((arr_11 [i_5]), ((max(var_9, var_6)))));

            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                var_19 = (65535 * 6);
                arr_18 [i_0] [i_5] = ((1 ? (arr_17 [i_0] [i_5 - 2] [i_6]) : ((72 ? 6296933854951749664 : -82))));
                arr_19 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_6] [i_0]);
                var_20 = (min(var_20, (((((((((var_10 ? var_8 : -24193))) ? -6296933854951749664 : (arr_10 [i_0] [i_0] [i_5 + 2] [i_5] [i_6 - 1] [7])))) ? 1 : ((min(91, 1))))))));
            }
        }
        var_21 = ((-1681553382 - (arr_17 [7] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_22 = (min(var_22, 3));
                                var_23 = ((arr_29 [i_7]) & (arr_29 [i_7]));
                            }
                        }
                    }
                    var_24 = ((var_11 ? (arr_22 [i_8]) : (arr_22 [i_8])));

                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_38 [1] [i_7] [i_9] = var_4;
                        var_25 |= (((-89 + 2147483647) >> (9223372036854775807 - 9223372036854775792)));
                        var_26 = var_8;
                    }

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_27 = 65512;
                        var_28 &= (var_9 > var_8);
                        arr_41 [i_13] &= ((arr_37 [i_7]) ? 65535 : (arr_30 [i_13] [i_9] [i_7] [i_13]));
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_29 |= (arr_28 [18] [i_8] [1]);
                        arr_45 [i_7] [i_7] [i_9] [i_14] = var_12;
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        arr_48 [i_8] [i_7] [i_8] [i_8] [i_7] [i_7] = (((((var_6 ? var_7 : 6))) - var_2));
                        var_30 = var_4;
                        var_31 = (((((-89 % (arr_20 [i_7])))) % var_5));
                        var_32 = (arr_40 [8] [i_8] [i_8] [i_8]);
                    }
                }
            }
        }
        var_33 = ((var_6 && var_8) || 1);
    }
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 4; i_18 < 11;i_18 += 1)
            {
                {
                    arr_58 [i_18 + 1] [i_16] [i_16] = (1 >= 183);
                    var_34 = 1;
                    var_35 = (max(var_35, (((((6296933854951749664 ? 1 : 155)) | -78)))));
                }
            }
        }
        var_36 = 4;
        var_37 = -66;
    }
    var_38 &= (var_8 % var_3);
    var_39 = 1;
    #pragma endscop
}
