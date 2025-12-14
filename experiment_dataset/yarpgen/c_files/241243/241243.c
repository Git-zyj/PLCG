/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_13 & (((min(-28574, 0))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_2] = (!537216100);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (max(var_18, ((min((2709846883 - 9223372036854775807), (max(var_6, 1585120413)))))));
                        var_19 = (min(var_19, var_6));
                    }
                    for (int i_4 = 4; i_4 < 14;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_4 - 4] [i_1] = ((1585120413 ? ((max((max(var_9, 1)), 1585120413))) : var_16));
                        var_20 = (max(var_20, (40458 + 2709846879)));
                        var_21 = (min((1585120413 < 11730012699800149129), (min(var_3, var_0))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 ^= -3797664433;
                        var_23 ^= var_6;
                        var_24 ^= -2709846883;
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_1] [12] [i_6] |= 40458;
                        var_25 += (min(15413752578107579257, (min(var_12, -581177080))));
                        var_26 = (max((var_5 + var_10), (max(var_3, 1585120413))));
                    }
                }
            }
        }
        var_27 = (((max(15413752578107579257, 25077)) << (((min(29655, -29656)) - 29653))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_28 = (max(var_28, 3032991495601972358));

                            for (int i_11 = 4; i_11 < 16;i_11 += 1)
                            {
                                var_29 = (max(var_29, ((max(3672401037, var_6)))));
                                var_30 = (min(var_30, ((((2709846879 / var_12) ^ (min(622566258, 0)))))));
                                arr_41 [i_8] = -16777216;
                            }
                            /* vectorizable */
                            for (int i_12 = 2; i_12 < 18;i_12 += 1)
                            {
                                var_31 = (min(var_31, (var_7 * 0)));
                                var_32 &= 2709846879;
                                arr_44 [i_12 + 1] [i_12 + 1] [i_10 - 1] [i_8] [i_8] [i_8] [i_7] = 0;
                                var_33 = 0;
                                var_34 |= var_11;
                            }
                            for (int i_13 = 0; i_13 < 1;i_13 += 1)
                            {
                                arr_47 [i_7] [i_8] [i_10 - 1] = ((var_5 ? 25050 : (((!4099961973754994788) ? var_6 : ((min(3672401038, var_10)))))));
                                var_35 = (max(4099961973754994788, (((((min(0, 29655))) * var_10)))));
                            }
                            arr_48 [i_7] [i_8] [i_8] [i_8] [i_10 + 2] = (min((!4099961973754994788), var_10));
                        }
                    }
                }

                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    var_36 -= (min((min((min(3032991495601972358, var_12)), (((47525 ? 1791328914 : var_15))))), ((max((min(var_2, 26979)), -26979)))));
                    var_37 = 3672401038;
                }
                var_38 |= ((((((var_14 / 235) ? ((min(134209536, 3672401038))) : -9223372036854775800))) ? ((var_1 ? -1075799482 : 66)) : (var_4 / 66)));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        {
                            var_39 = (min(-48, 4095));
                            var_40 = (min(((var_4 ? var_12 : (((var_14 + 9223372036854775807) << var_2)))), ((min(((235 ? -1075799458 : 38379)), -27132)))));
                        }
                    }
                }
            }
        }
    }
    var_41 = var_13;
    /* LoopNest 3 */
    for (int i_17 = 3; i_17 < 24;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                {
                    arr_64 [i_17 + 1] [i_18] [i_17] = (((((min(var_1, var_6)))) ? (max((7976432157176877108 / 199), var_6)) : ((max(-var_12, 21)))));
                    /* LoopNest 2 */
                    for (int i_20 = 3; i_20 < 23;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 1;i_21 += 1)
                        {
                            {
                                var_42 = (max(var_42, ((max(202, ((((var_6 ? var_2 : var_0)))))))));
                                var_43 = var_8;
                                var_44 = (max(var_44, (((+(min((-125 / 3672401038), (min(622566257, 23865)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 25;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 25;i_23 += 1)
                        {
                            {
                                var_45 = (((max(3, var_14)) >= (92 != var_14)));
                                var_46 = 1734743356290669923;
                            }
                        }
                    }
                    var_47 = (min(var_47, (((var_13 + (max(((min(var_16, var_10))), ((-68 ? var_0 : 622566257)))))))));
                    arr_77 [i_17] [i_18] = (~(((~-1129193062) + 125)));
                }
            }
        }
    }
    #pragma endscop
}
