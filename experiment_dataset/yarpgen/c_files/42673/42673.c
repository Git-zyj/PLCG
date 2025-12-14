/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_11 = var_9;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 = (max((max((min(0, -877371929)), ((min(1, 1))))), (max(-166, (min(-992067903, var_4))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_13 = (min(var_13, ((max(992067903, 13734)))));
                        var_14 = var_2;
                        var_15 = ((!(((-((max(0, 1))))))));
                        var_16 = (max(536870911, var_8));
                        arr_11 [i_0] [4] [4] [i_3] = 13734;
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        var_17 = (~(min(951596359, var_8)));
                        var_18 += 1183770211;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_19 = var_1;
                            var_20 = 23884;
                            var_21 = (max(var_21, (!var_7)));
                        }
                        var_22 = (min(var_22, 46531));
                        arr_20 [i_0 - 1] = 9223372036854775807;
                        var_23 -= 13733;

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_24 [i_2] [i_1] [i_1] [9] [i_1] [i_5] = (~var_3);
                            arr_25 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_7] [i_7] = var_1;
                        }
                        for (int i_8 = 4; i_8 < 10;i_8 += 1)
                        {
                            var_24 = var_1;
                            arr_30 [i_0] [i_1] [i_2] [i_5] [i_8] = -1;
                            var_25 = (!var_8);
                        }
                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            var_26 = var_10;
                            arr_35 [i_9] [i_5] [i_0] [i_1] [i_0] = var_1;
                        }
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {

                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 10;i_11 += 1)
                        {
                            var_27 = (~var_9);
                            arr_41 [i_0] [i_10] [i_2] = var_0;
                            arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_2;
                        }
                        var_28 = 127;
                        arr_43 [i_0 + 1] [i_0 + 1] [1] [i_0 + 1] [i_1] = var_4;
                        arr_44 [i_0] [i_0] = 4294967295;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 3; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    {
                        var_29 = var_2;

                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            arr_54 [i_13] [i_13] = var_1;
                            arr_55 [i_13] = var_2;
                            var_30 = 127;
                            arr_56 [i_0] [i_13] [i_13] [i_14] [i_15] = (max((!4294967295), ((max(var_10, var_0)))));
                            var_31 = -1748680966;
                        }
                        for (int i_16 = 0; i_16 < 12;i_16 += 1)
                        {
                            var_32 = -127;
                            var_33 = (max(var_1, var_6));
                        }
                        /* vectorizable */
                        for (int i_17 = 2; i_17 < 9;i_17 += 1)
                        {
                            var_34 = (max(var_34, -921026542));
                            var_35 = 51802;
                            var_36 = (max(var_36, -5));
                            var_37 &= 13734;
                            var_38 = -5903379621203692403;
                        }
                        var_39 = (min(var_5, (!-2090845169664892653)));
                        arr_63 [i_0] [i_13] [i_13] [i_13] = ((max(-4394487168536466060, ((max(4294967287, 4586))))));
                    }
                }
            }
        }
        var_40 = (!-var_3);
    }
    for (int i_18 = 2; i_18 < 15;i_18 += 1)
    {
        arr_66 [i_18 - 2] = ((max((max(1, var_6)), (min(571572736, var_2)))));
        var_41 = 1;
        arr_67 [i_18] = (~-9799);
        var_42 = -var_9;
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 0;i_19 += 1)
    {

        for (int i_20 = 3; i_20 < 16;i_20 += 1) /* same iter space */
        {
            var_43 = (~var_10);
            arr_72 [i_19] [i_19] = -var_2;
        }
        for (int i_21 = 3; i_21 < 16;i_21 += 1) /* same iter space */
        {
            var_44 = (--3723394560);
            var_45 = -1;
            arr_75 [i_21] = (~214);
            var_46 = (~3723394530);
            var_47 = 3639143264;
        }
        for (int i_22 = 0; i_22 < 18;i_22 += 1)
        {
            var_48 = -1313826738;

            for (int i_23 = 2; i_23 < 17;i_23 += 1)
            {
                var_49 = 4294967287;

                for (int i_24 = 3; i_24 < 17;i_24 += 1)
                {
                    arr_83 [i_19] [i_22] [i_23] [i_23] = -var_4;
                    var_50 = 3343335917;
                    var_51 = -22;

                    for (int i_25 = 2; i_25 < 15;i_25 += 1)
                    {
                        var_52 = (min(var_52, 255));
                        arr_87 [i_19] [i_19 + 1] [i_19] = 0;
                        var_53 = var_0;
                        var_54 = var_0;
                    }
                    for (int i_26 = 0; i_26 < 18;i_26 += 1)
                    {
                        var_55 = var_2;
                        var_56 = 1;
                        arr_91 [i_19] [i_22] [i_23] [i_24] [i_24] [10] = var_1;
                        var_57 = (~571572757);
                        arr_92 [i_19] [13] [i_23 + 1] [13] [11] = var_6;
                    }
                }
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 18;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        {
                            var_58 = 13715;
                            arr_98 [i_19 + 1] [i_22] [10] [i_27] [i_27] = var_4;
                            var_59 = (~(~var_6));
                        }
                    }
                }
            }
            for (int i_29 = 0; i_29 < 18;i_29 += 1) /* same iter space */
            {

                for (int i_30 = 0; i_30 < 18;i_30 += 1)
                {
                    arr_104 [i_30] [i_29] [i_22] [i_19 + 1] [i_19 + 1] = 544551909;

                    for (int i_31 = 0; i_31 < 18;i_31 += 1)
                    {
                        arr_109 [i_31] [i_30] [17] [14] [i_19] = (~0);
                        var_60 = (~var_5);
                        arr_110 [i_31] [i_30] [i_29] [i_22] [i_19 + 1] = 1042;
                    }
                }
                var_61 = var_0;
            }
            for (int i_32 = 0; i_32 < 18;i_32 += 1) /* same iter space */
            {

                for (int i_33 = 4; i_33 < 16;i_33 += 1)
                {
                    var_62 = ((-(!var_1)));

                    for (int i_34 = 4; i_34 < 17;i_34 += 1)
                    {
                        var_63 = var_5;
                        arr_117 [12] = var_6;
                        var_64 = (min(var_64, var_4));
                    }
                    var_65 = var_9;
                    var_66 = var_2;
                    var_67 = 536870912;
                }
                var_68 = var_8;
                var_69 = 42357198;
                var_70 = 9223372036854775807;
            }
        }
        arr_118 [i_19] [5] = (!17299);
    }
    var_71 = 4294967295;
    var_72 = var_2;
    var_73 = (~-6137624756674430388);
    #pragma endscop
}
