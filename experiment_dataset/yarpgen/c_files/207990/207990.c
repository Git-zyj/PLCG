/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((33 * var_10) ? var_15 : var_3)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 -= ((var_12 ? var_12 : var_8));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 = ((-(arr_1 [i_0])));
            var_19 = (min(var_19, (((33 ? 1395814062 : ((var_15 ? (arr_2 [i_0]) : var_0)))))));
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_0] = 15487944255858535496;

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_20 = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [8] [i_0] = (((!var_13) * var_11));
                            var_21 = var_0;
                            var_22 = ((-14257 ? 65534 : -33));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_19 [i_0] [i_0] [i_0] [1] = ((var_14 ? (arr_12 [i_6] [i_0] [i_2] [i_0 + 1] [i_0] [i_0]) : 24));
                    var_23 = (max(var_23, -var_13));
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] [i_3] [i_3] [i_3] [8] = ((-13 > ((217 ? 255 : var_2))));
                        var_24 = ((var_14 ? (14306737609475239671 * 13) : (((var_9 ? var_15 : var_15)))));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_0] [6] [i_0] [7] = var_2;
                        var_25 = (((arr_13 [i_0] [2] [2] [i_0]) ? (30314 * var_7) : var_7));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_7] [i_7] [i_0] [i_7] [i_7] = (arr_21 [i_0] [5] [5] [15] [i_0]);
                        var_26 = ((~(arr_32 [i_0] [i_2 + 2])));
                        arr_35 [i_0 - 1] [i_0] [i_2] [i_3] [i_0] [13] [i_0] = (((-2 < var_5) | var_15));
                    }

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_27 = (max(var_27, (((((((arr_29 [i_0 + 1] [i_0 + 1] [i_7] [i_0 + 1] [i_11]) ^ var_6))) ? var_9 : 4294967295)))));
                        arr_39 [i_0] [i_2] [i_0] [i_7] [i_11] [i_11] = (((arr_22 [i_0] [i_2] [i_3] [i_2 + 3]) ? -92 : -13));
                        var_28 *= var_14;
                    }

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_29 = ((!(((1821260394 ? 287111098489403258 : 9893788289869472812)))));
                        arr_42 [i_0 - 1] [i_0 - 1] [i_3] [i_0] [i_12] = ((5305883547331729360 ? (65 * 13) : 8));
                    }
                }
            }
        }
        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            arr_46 [i_0] [i_0] = ((15078167571488014591 ? 98 : 287111098489403258));

            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                var_30 = ((41 < var_3) ^ ((var_0 ? 0 : (arr_9 [i_14] [i_13] [i_14]))));
                arr_49 [i_0] [i_0] [i_14] = 1769438164689155970;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 14;i_16 += 1)
                    {
                        {
                            var_31 = ((4294967274 ^ 17819688376798689801) ? ((-13 ? 12 : var_4)) : (((-75 ? var_1 : 29))));
                            var_32 += (((~(arr_12 [14] [i_15] [6] [i_16] [14] [i_15]))));
                        }
                    }
                }
            }
            arr_56 [i_0] [i_0] [i_0] = var_6;
            var_33 *= (var_9 ? (arr_18 [i_13] [i_13 + 2] [i_13] [15]) : 11);
            var_34 = -30314;
        }
        var_35 = var_4;
    }
    #pragma endscop
}
