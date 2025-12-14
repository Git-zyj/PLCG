/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 18446744073709551615;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = var_9;
        var_19 = (min(234, (min(var_10, -8369991839964356727))));
        var_20 = var_13;
        arr_5 [i_0] = 256500394427048720;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 = (+(((arr_6 [i_1] [i_1]) ? var_11 : 6699336446037742570)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_22 = var_2;
                        var_23 = (max(var_23, var_16));
                    }
                }
            }
        }
        var_24 = (((2147483647 ? -6295 : var_5)));

        for (int i_5 = 4; i_5 < 13;i_5 += 1)
        {
            var_25 = (max(var_25, 15));

            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
            {
                var_26 = (min(var_26, ((((((var_4 ? 1162915819974985496 : (arr_23 [2])))) ? ((2047 ? -32751 : 61440)) : 1)))));
                var_27 = 201;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_29 [i_1] [i_7] [i_7] [i_6] [i_5 - 3] [i_1] = var_16;
                            var_28 -= var_14;
                        }
                    }
                }

                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    var_29 *= (var_9 ? ((((!(arr_9 [6] [i_5] [6]))))) : var_9);
                    var_30 &= 275215391;
                    var_31 = var_12;
                    var_32 = var_11;
                }
            }
            for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
            {
                var_33 -= var_8;

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    arr_37 [i_11] [i_1] [i_1] [i_1] = ((var_15 ? (~var_10) : var_12));
                    var_34 = arr_10 [i_1] [15];
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_35 *= ((((arr_20 [0]) ? (arr_27 [i_1] [i_12] [i_10] [i_10] [i_5 + 3]) : var_6)));
                    arr_40 [i_5 + 3] [i_5] [i_5] [i_5] [i_1] = ((!(((var_2 ? var_6 : var_9)))));
                    var_36 = (min(var_36, (((1371752027 ? var_15 : (arr_19 [0] [i_5 - 1] [i_5]))))));
                }
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    var_37 = 0;

                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        arr_46 [13] [i_5] [i_10] [i_10] [i_1] [15] = (~18190243679282502872);
                        var_38 = 281474976710655;
                    }
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        var_39 *= var_11;
                        arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] = (var_3 ? ((179 ? 1 : 1686106369488069982)) : (~var_13));
                    }
                    var_40 = var_9;
                }
                var_41 = 55595;
                var_42 &= ((9986416184818814472 ? ((-(arr_16 [14] [2] [2] [i_1]))) : 254));
                var_43 &= var_17;
            }
            for (int i_16 = 2; i_16 < 12;i_16 += 1)
            {
                var_44 = 214;
                var_45 = var_8;
                var_46 = var_17;
            }
        }
    }
    #pragma endscop
}
