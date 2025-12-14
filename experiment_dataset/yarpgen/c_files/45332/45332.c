/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_21 ^= ((var_10 ? (arr_3 [i_1 - 1] [i_1] [i_1 + 1]) : (arr_2 [i_0 + 1] [3])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_13 [i_2] [15] [i_4] [8] [i_0 + 1] = (arr_2 [i_3] [i_3]);
                            var_22 = var_3;
                            var_23 = (((((255 ? var_6 : var_0))) ? var_18 : 1421539553));
                            arr_14 [i_2] [i_4] [1] [i_3] [i_4] [1] [i_1] = (~255);
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_21 [i_7] [i_6] [i_7] [i_1] [13] = (~(arr_3 [i_0] [i_1 + 1] [i_6]));
                            var_24 = (max(var_24, (arr_8 [i_1] [i_1 + 1] [i_1 + 1])));
                        }
                    }
                }
                arr_22 [i_0] [i_0] [i_1] [i_5] = (((arr_3 [i_0] [i_0 + 1] [i_1 + 1]) ? (arr_3 [i_0] [i_0 + 1] [i_1]) : 243));
                var_25 *= ((!(arr_15 [i_1 - 1])));
                var_26 = var_6;
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 2; i_9 < 22;i_9 += 1)
                {
                    var_27 = (!var_10);
                    arr_28 [i_0] [i_8] [i_8] [i_8] = 1421539553;
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_32 [i_8] [i_8] [i_8] = (((~var_14) ? (((arr_23 [i_10] [i_8] [i_8] [i_0]) ? var_7 : var_13)) : (((!(arr_26 [i_10] [i_10] [i_8] [i_1] [i_0] [i_0]))))));
                    arr_33 [i_1] [i_1] [i_8] = ((arr_8 [i_1 - 1] [11] [i_0]) ? (arr_8 [i_1 - 1] [i_1] [11]) : (arr_0 [i_1 + 1]));
                    arr_34 [i_8] = (~670268086230906732);
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_38 [i_8] [i_1 - 1] = arr_4 [i_1] [i_1 + 1] [i_1 + 1];
                    arr_39 [i_0] [i_1] [i_0] [i_8] = ((255 & (var_7 < var_6)));
                    arr_40 [i_8] = (((((1023 ? var_7 : 881122008))) ? (arr_15 [i_1 + 1]) : ((var_13 ? (arr_5 [i_0] [i_1] [i_8] [i_1]) : -1))));
                    var_28 -= (var_1 < var_1);
                    arr_41 [i_0] [i_0] [i_8] [i_0] = (((((var_17 ? var_6 : var_12))) ? 18599 : 18446744073709551615));
                }
                var_29 = -1;
                arr_42 [i_8] [i_1] [i_0] [i_8] = (arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_1 - 1] [i_1 + 1]);
                arr_43 [i_8] [i_8] [i_0] [i_8] = ((var_18 ? var_7 : 137));
            }
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 0;i_15 += 1)
                    {
                        {
                            var_30 |= (arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]);
                            var_31 = (!var_0);
                            arr_58 [i_0] [i_0] [i_0] [1] = var_13;
                            arr_59 [i_0] [i_12] [i_12] [i_14] [i_15] = var_11;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 4; i_16 < 21;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 23;i_17 += 1)
                    {
                        {
                            arr_64 [i_12] [i_12] [i_16] [i_12] [i_12] [i_16] [i_16] = (((arr_27 [i_17 - 2] [i_16 - 1] [i_16 - 2] [i_0 + 1]) >= var_18));
                            var_32 *= var_4;
                            var_33 = (arr_25 [i_12] [i_16] [i_13]);
                        }
                    }
                }
                arr_65 [i_0] [1] [0] = ((var_9 ? var_13 : (~0)));
                var_34 -= ((((((arr_61 [i_12] [i_12] [i_13]) ? var_7 : var_19))) ? var_12 : (((881121996 ? var_3 : var_1)))));
                var_35 = ((-(((-1 + 2147483647) << (12 - 12)))));
            }
            arr_66 [i_0] = -1;
            arr_67 [i_0] = (!var_6);
            var_36 += 1987085112028252367;
        }
        for (int i_18 = 1; i_18 < 21;i_18 += 1)
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 23;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {
                        {
                            arr_80 [i_19] [i_20] [i_19] [i_18] [i_19] [i_19] = var_4;
                            arr_81 [i_0] [i_19] [i_19] [3] = var_4;
                            arr_82 [i_0] [i_19] [i_0] [i_18] [i_19] [i_20] [11] = ((-(arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])));
                        }
                    }
                }
            }
            var_37 = (~var_5);
            arr_83 [5] [i_18 + 1] [1] = (-28561 * (!var_17));
        }
        /* LoopNest 2 */
        for (int i_22 = 3; i_22 < 23;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 24;i_23 += 1)
            {
                {
                    var_38 *= -1;
                    arr_88 [4] [4] [i_23] [i_23] |= ((!(arr_2 [i_0] [0])));
                }
            }
        }
        var_39 ^= (var_17 || var_19);
    }
    var_40 = (15 <= 511);
    /* LoopNest 3 */
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        for (int i_25 = 3; i_25 < 22;i_25 += 1)
        {
            for (int i_26 = 2; i_26 < 23;i_26 += 1)
            {
                {
                    var_41 *= 13;
                    var_42 = -243;
                }
            }
        }
    }
    #pragma endscop
}
