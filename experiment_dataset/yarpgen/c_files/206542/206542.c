/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = ((0 && ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_6)))));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        var_18 ^= ((17854 ? (((((47681 ? 48 : var_10)) / ((max(var_15, var_5)))))) : (max((var_14 & 255), (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_19 *= -45;
        var_20 = ((((max((arr_4 [i_1] [i_1]), (arr_1 [i_1])))) ? (max(48, (arr_4 [i_1] [i_1]))) : 17841));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = var_13;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_21 = (max(var_21, (max((var_16 == var_1), (max(((max((arr_10 [i_2]), 1))), var_4))))));
            var_22 = (max(var_22, var_12));
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_23 = (max(((((((arr_3 [i_2] [i_2]) ? (arr_14 [i_4]) : (arr_5 [i_4] [i_4]))) > (arr_1 [i_2])))), ((-((max(var_16, var_0)))))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_24 = 255;
                            arr_26 [i_5] [8] &= (min((max((max(-32762, 3117881960)), ((max(0, var_1))))), ((((min(var_11, var_15)) ? (var_9 == var_5) : (~47671))))));
                            var_25 = (min(var_25, var_12));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_26 *= var_6;
                            var_27 = 0;
                            var_28 += var_14;
                        }
                        var_29 = var_0;
                    }
                }
            }

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_30 = (max(var_30, -var_5));
                var_31 = 4294967295;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_37 [i_2] [i_4] [i_2] = (1 % var_16);
                            var_32 |= (((((var_2 ^ ((1 ? (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2]) : 1))))) && 1));
                            var_33 = (((((((min(1, var_5))) ? (arr_20 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 1]) : (1240557950 / 7449)))) | 0));
                        }
                    }
                }
            }
            var_34 = ((1 ? 47673 : ((min(0, -5605)))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_35 = var_13;
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_36 = ((var_15 ? ((var_2 ? var_3 : (arr_7 [i_2] [i_2]))) : (arr_42 [i_14] [i_14] [i_14 - 1] [i_14 + 1])));
                            var_37 = var_0;
                            var_38 = ((var_15 ? (arr_28 [i_2] [i_15]) : ((((arr_6 [i_2] [i_2]) * var_9)))));
                        }
                    }
                }
            }
        }
        var_39 = (min(var_39, (((((((arr_6 [i_2] [i_2]) ? var_3 : (arr_6 [i_2] [i_2])))) ? (((arr_6 [i_2] [i_2]) & var_7)) : (arr_6 [i_2] [i_2]))))));

        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            var_40 = (~6144);
            var_41 = ((((1 ? (max(0, 1273897305669251622)) : (~104))) <= ((((122 <= var_12) ? (var_15 | -38) : 1)))));
            arr_48 [i_16] [i_16] [i_16] = ((((44 << (54 - 38))) > var_12));
            var_42 = (min(var_4, (((((min((arr_9 [i_2]), var_14))) ? (max(var_3, (arr_9 [i_2]))) : var_2)))));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_43 = var_14;
            arr_51 [i_17] = ((6 - (arr_23 [i_2] [i_2] [i_2] [i_17] [i_2] [i_2] [i_2])));
            var_44 = (max(var_44, 1));
        }
        /* vectorizable */
        for (int i_18 = 1; i_18 < 12;i_18 += 1)
        {
            var_45 = var_7;

            for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
            {

                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    var_46 = ((!(arr_24 [i_18 + 1] [i_18 + 1] [i_2] [i_2] [i_2])));
                    var_47 &= (arr_49 [i_20]);
                    var_48 = var_3;
                    var_49 |= var_4;
                }
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    var_50 *= -35;
                    var_51 = (min(var_51, (((((var_4 ? var_14 : (arr_24 [i_2] [i_2] [i_2] [i_2] [i_2]))) <= var_14)))));

                    for (int i_22 = 0; i_22 < 14;i_22 += 1)
                    {
                        var_52 = (~-45);
                        var_53 = ((54948 || (((var_2 ? var_0 : -3942439353142034498)))));
                        var_54 = var_0;
                    }
                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        var_55 = (-32767 - 1);
                        var_56 = (max(var_56, (((0 | (~47673))))));
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 3; i_24 < 13;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 14;i_25 += 1)
                    {
                        {
                            arr_74 [i_2] [i_2] [i_2] [i_2] [i_18] = -95;
                            arr_75 [i_18] [i_18] [i_2] [i_18] [i_2] = (((arr_47 [i_24 - 2] [i_18 + 2] [i_24 - 2]) ? var_8 : (arr_73 [i_2] [i_2] [i_2] [i_2] [i_2])));
                            arr_76 [i_18] [i_18] [i_18] [i_18] = (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2]);
                        }
                    }
                }
                var_57 = var_13;
            }
            for (int i_26 = 0; i_26 < 14;i_26 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_27 = 4; i_27 < 11;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        {
                            var_58 = (var_2 <= (arr_49 [i_26]));
                            var_59 = ((55038 ? ((~(arr_64 [i_2] [i_2] [i_2] [i_2] [i_18] [i_18] [i_2]))) : ((((arr_64 [i_2] [i_2] [i_2] [i_2] [i_18] [i_2] [i_2]) ? var_8 : (arr_63 [i_26] [i_26] [i_26] [i_26]))))));
                            var_60 = var_8;
                            arr_85 [i_2] [i_18] [i_2] [i_2] = (!var_8);
                        }
                    }
                }
                var_61 -= (4294967290 != (arr_6 [i_18 + 1] [i_18 + 2]));
                var_62 = (~var_8);
                arr_86 [i_18] [i_18] [i_18] = 14;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_29 = 0; i_29 < 16;i_29 += 1)
    {
        for (int i_30 = 2; i_30 < 13;i_30 += 1)
        {
            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                {
                    arr_95 [i_29] [i_29] [i_29] = ((((var_2 ? 0 : (arr_92 [i_30 - 1] [i_30 - 1]))) != ((var_15 ? (arr_92 [i_30 + 3] [i_30 + 3]) : var_15))));
                    var_63 &= ((max(1, 4294967294)));

                    for (int i_32 = 0; i_32 < 16;i_32 += 1)
                    {
                        var_64 = (arr_94 [i_29] [i_29] [i_29] [i_29]);
                        arr_98 [i_30] [i_29] [i_29] [i_29] [i_29] = (~var_11);
                    }
                }
            }
        }
    }
    #pragma endscop
}
