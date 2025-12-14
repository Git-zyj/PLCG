/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_1] [i_0] |= ((var_14 >= (arr_2 [i_0 + 1])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [7] [i_2] [i_3] [i_2] = var_3;
                            arr_14 [i_0] [0] [i_1] [i_2] [i_2] [i_3] [i_4] &= (((arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 + 3] [i_0 - 1]) ? var_18 : var_17));
                            var_20 = (max(var_20, (!0)));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_18 [i_5] [i_0] [i_1] [i_5] = 0;

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_23 [i_1] [i_1] [i_1] |= ((-8076132600077912695 == (arr_11 [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1] [5] [i_6] [i_6])));
                    var_21 -= (-5706790352206952219 == -2097);
                    var_22 = ((5656482056168526612 ? 1 : -106));
                }
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    var_23 = (min(var_23, var_11));
                    arr_26 [i_0] [i_1] [i_5] [i_7] [i_7] = var_12;

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_24 = (min(var_24, -1915804969));
                        var_25 = (max(var_25, 1));
                    }
                    for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        var_26 = var_8;
                        arr_32 [i_9] [i_5] [i_5] [i_1] = -19730;
                    }
                    for (int i_10 = 2; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_27 = var_15;
                        var_28 = var_1;
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_29 = var_17;
                        var_30 |= var_7;
                        var_31 = var_19;
                        arr_39 [i_5] = (~var_12);
                    }
                    var_32 ^= var_8;
                    arr_40 [i_5] = -var_7;
                }

                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    arr_44 [i_5] [i_1] = var_15;
                    var_33 = (min(var_33, ((-21 ? (((arr_25 [6] [i_1] [2] [i_5]) ^ (arr_21 [i_0] [i_0] [i_1] [i_5] [i_12] [12]))) : 8345195303717018242))));
                }
                for (int i_13 = 4; i_13 < 12;i_13 += 1)
                {
                    arr_47 [0] [i_5] [i_5] = 1915804970;

                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        arr_51 [i_0] [2] [1] [i_5] [i_14] = -2916064830560938586;
                        arr_52 [i_13] [i_1] [i_5] [i_13] [10] = ((!(arr_35 [i_5] [i_13 - 2])));
                        var_34 = (~var_10);
                    }
                    for (int i_15 = 1; i_15 < 11;i_15 += 1)
                    {
                        arr_57 [i_0] [i_1] [i_5] [i_13] = ((var_15 ? 61 : 1));
                        var_35 = var_13;
                    }
                    for (int i_16 = 2; i_16 < 10;i_16 += 1)
                    {
                        arr_60 [i_5] [i_13] [10] [i_1] [i_5] = 1;
                        arr_61 [i_0] [i_5] [12] [1] [i_16] = (-32767 - 1);
                        arr_62 [1] [i_5] [8] = (~var_6);
                        arr_63 [i_0] [i_1] [i_1] [i_5] [i_5] [i_16] = var_7;
                    }
                }
            }
            for (int i_17 = 2; i_17 < 13;i_17 += 1)
            {
                arr_67 [i_0] [i_1] [i_17] = -var_11;

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_36 = 228743074;
                    var_37 = 3495307283255696081;
                }
            }
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                var_38 = 30;
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 0;i_21 += 1)
                    {
                        {
                            var_39 &= (arr_3 [1]);
                            arr_78 [i_0] [i_1] |= (~var_19);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 11;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        {
                            arr_84 [i_0] [11] = ((((((-32767 - 1) ? -7190734456691615255 : -98))) % var_8));
                            var_40 = (max(var_40, (((-7190734456691615249 ? -12691 : var_10)))));
                            arr_85 [i_0] [9] [i_1] [i_19] [i_22] [i_23] [i_23] = (((!8345195303717018259) ? (arr_54 [i_22] [i_22 + 2] [i_22] [i_22] [i_22] [i_22] [i_22]) : var_17));
                        }
                    }
                }
            }
        }
        for (int i_24 = 4; i_24 < 11;i_24 += 1)
        {
            arr_90 [i_0] [11] = (!-26144);
            var_41 = var_12;
            arr_91 [i_0] [i_24] [7] = ((204 ? 14288105247507461656 : 3974194257));
            /* LoopNest 2 */
            for (int i_25 = 2; i_25 < 10;i_25 += 1)
            {
                for (int i_26 = 2; i_26 < 13;i_26 += 1)
                {
                    {
                        var_42 = 14288105247507461674;
                        arr_96 [i_26] [i_25] [i_24] [i_0] &= 8345195303717018242;
                    }
                }
            }
            arr_97 [i_24] = 1;
        }
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 14;i_27 += 1)
        {
            for (int i_28 = 3; i_28 < 13;i_28 += 1)
            {
                for (int i_29 = 2; i_29 < 13;i_29 += 1)
                {
                    {
                        var_43 += 33;
                        arr_105 [i_0] [i_0] [i_0] [i_28] = (~229);
                        arr_106 [i_0] [i_27] [i_28] [2] [i_29] [i_28] |= (!124);
                        var_44 = (min(var_44, -7876166305542469267));
                        arr_107 [3] [i_28] [i_28] = ((!(arr_24 [i_29 + 1] [i_27] [i_0] [i_28 + 1] [12] [i_0 - 2])));
                    }
                }
            }
        }
        var_45 = 1;
    }
    for (int i_30 = 2; i_30 < 11;i_30 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_31 = 0; i_31 < 14;i_31 += 1)
        {
            for (int i_32 = 0; i_32 < 14;i_32 += 1)
            {
                {
                    arr_118 [i_30] [i_31] [i_31] &= ((-(!-38)));
                    arr_119 [i_30] [i_31] [i_32] [i_32] = (min(var_10, var_13));

                    /* vectorizable */
                    for (int i_33 = 0; i_33 < 14;i_33 += 1)
                    {
                        var_46 = var_4;
                        var_47 &= -5169087732716967;
                    }
                }
            }
        }
        arr_122 [2] [i_30] |= (839088345 == -1220347351);
        arr_123 [i_30] = (((var_17 ? (((arr_73 [i_30] [i_30] [i_30] [i_30]) ? 234 : (arr_20 [13] [i_30] [i_30]))) : ((min((arr_65 [i_30] [i_30] [i_30] [i_30]), var_14))))));
        var_48 = (--14341047292944062422);
    }
    var_49 = max(var_0, (!-21563));
    var_50 = var_13;
    #pragma endscop
}
