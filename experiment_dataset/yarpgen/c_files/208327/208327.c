/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] |= (arr_6 [i_0] [i_1] [i_2 + 2] [i_3]);
                            arr_11 [i_0] |= (max(((((((var_8 ? (arr_0 [i_0]) : (arr_6 [i_3] [i_2 - 1] [i_1] [10])))) ? 10124 : 10123))), ((((min(1, (arr_6 [1] [i_1] [i_2] [i_3])))) ? 10132 : (~var_19)))));
                        }
                    }
                }
                arr_12 [11] = var_16;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_5] = (((arr_7 [i_5] [9] [i_1] [i_0]) ? (((max(var_3, -21294)))) : ((var_11 ? var_18 : (arr_4 [i_0] [i_0] [i_5])))));

                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_21 = ((-(max(-10133, 376479485))));
                                var_22 = (max(var_1, (((((var_12 ? (arr_9 [i_0] [i_0] [i_0]) : var_3)) * -10133)))));
                                var_23 = (max((arr_22 [i_0] [i_1] [i_1] [i_5] [i_4]), ((~((~(arr_24 [i_0])))))));
                                var_24 = (max(var_24, ((max(((((179 ? var_13 : var_8)) * (((arr_0 [i_0]) ? -112 : var_0)))), 111)))));
                            }

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_25 = ((58258 ? 3559539564 : 10115));
                                var_26 = ((-6393804524193989059 ? (arr_14 [i_1 + 1] [i_1 + 2] [i_1]) : 10140));
                                var_27 = var_10;
                                var_28 = ((((var_10 ^ ((1 * (arr_19 [i_0] [i_1]))))) / (max(var_15, var_8))));
                            }
                            for (int i_8 = 1; i_8 < 14;i_8 += 1)
                            {
                                var_29 = (max(var_29, var_7));
                                var_30 &= var_15;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        var_31 = ((!(~var_19)));
        var_32 = (((max(-25985, 6393804524193989063)) / (arr_30 [i_9])));
        var_33 &= (max(1, (max((1 ^ -6393804524193989059), var_18))));
        arr_31 [i_9] [i_9] = ((((((arr_29 [i_9]) ? (arr_29 [i_9]) : var_11))) ? var_16 : (((arr_30 [i_9]) / var_11))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_35 [i_10] = var_19;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {
                    var_34 = (min((-4063945551583654220 * -25991), ((max(-60, 7)))));
                    arr_43 [i_10] [i_11] = 19;

                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        var_35 = ((max(7, (arr_17 [i_10] [i_11] [i_12] [i_13 + 1]))));
                        var_36 = 6679349776186006131;
                        var_37 *= var_19;
                    }
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        var_38 = 15;

                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            var_39 = var_14;
                            var_40 = var_5;
                        }
                        var_41 |= var_1;
                    }
                    var_42 = ((((((6393804524193989051 / 6315) ? (arr_1 [1]) : (min(-6393804524193989070, 1009307206))))) ? (arr_49 [i_10] [i_10] [i_12] [i_12] [i_12]) : ((((!(arr_14 [i_12] [i_11] [i_10]))) ? 10 : (max(var_10, 9223372036854775783))))));
                }
            }
        }
    }
    var_43 = (!var_1);
    var_44 = var_13;
    #pragma endscop
}
