/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max(17, 61263)))));
        arr_3 [i_0] = var_4;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_3] = var_5;
                            var_10 = ((var_3 << (var_4 - 8241)));
                            arr_16 [i_4] [i_3] [i_2] [i_3] [i_0] = var_3;
                            arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_3] [i_0] [i_0] = var_2;
                            arr_18 [i_3] [i_3] [i_3] [i_4] [i_4] [i_4] [i_4] = var_8;
                        }
                        arr_19 [i_0 - 3] [i_2] [i_3] = var_3;
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_11 *= (arr_20 [i_5]);

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_24 [i_6] = (arr_20 [i_5]);

            for (int i_7 = 4; i_7 < 15;i_7 += 1)
            {
                var_12 = var_6;
                var_13 = var_4;
                var_14 = var_3;
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_15 = var_5;
                            arr_34 [i_6] [i_9] [i_8] [i_6] [i_6] = ((max((arr_28 [i_6]), var_8)));
                            var_16 -= (arr_26 [i_10] [i_10] [i_5]);
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    arr_38 [i_6] [i_6] [i_6] [i_8] [i_11] = (((!((((arr_35 [i_5]) >> (var_4 - 8231)))))));
                    arr_39 [i_6] [i_5] [i_6] [i_11] [i_11] [i_8] = (min(var_1, (arr_37 [i_5] [i_5] [i_5] [i_11])));
                }
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_17 = (max(var_17, var_7));
                        arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] = ((!(((((((arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) >= var_1))) >> ((((max(-17, var_5))) - 76)))))));
                    }
                    for (int i_14 = 2; i_14 < 13;i_14 += 1)
                    {
                        var_18 = (max(var_18, (!var_3)));
                        arr_48 [i_6] [i_12] [i_6] = (((min(((-17 ? 42022 : -10)), (arr_21 [i_5] [i_12]))) * (((arr_22 [i_5]) * -var_2))));
                        arr_49 [i_6] = (min((((var_3 & var_1) ? -17 : (arr_47 [i_5] [i_6] [i_8] [1] [i_6] [i_6]))), var_9));
                        var_19 = (min((arr_32 [i_5] [i_5] [i_5] [i_12] [i_5]), var_6));
                        var_20 *= 6740256027111358542;
                    }
                    var_21 += ((!(((var_1 & (arr_33 [i_5] [i_5] [i_6] [i_6] [i_8] [i_6]))))));
                }
            }
            arr_50 [i_6] = var_0;
        }
        arr_51 [i_5] = (!23513);
        var_22 = ((((arr_20 [i_5]) + ((42051 ? 0 : 3482109993)))));
    }
    for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
    {
        arr_54 [i_15] = var_5;
        var_23 -= var_7;
        /* LoopNest 3 */
        for (int i_16 = 4; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 20;i_18 += 1)
                {
                    {
                        var_24 ^= (((-32767 - 1) ? var_3 : (~var_0)));

                        for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
                        {
                            arr_63 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [3] = (32750 ? var_3 : (42022 ^ var_5));
                            var_25 = (max(var_25, (arr_58 [i_18] [i_17] [i_15])));
                            var_26 = (max(var_26, (~var_6)));
                            arr_64 [i_19] [5] [i_17] [i_18] [i_16] = ((-(arr_58 [1] [i_16] [i_16])));
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 22;i_20 += 1) /* same iter space */
                        {
                            arr_67 [i_18] [i_18] [i_17] [i_17] [i_20] = var_1;
                            arr_68 [i_20] [i_15] [8] [i_16] [i_15] = (arr_52 [20]);
                            arr_69 [i_15] [i_16 + 1] [i_17] [i_18] [i_20] = ((var_2 ? var_7 : var_6));
                            arr_70 [i_15] |= 16;
                        }
                        arr_71 [i_18] [i_17] [11] [i_15] |= ((max(var_5, (min(var_9, var_6)))));
                        arr_72 [i_15] [i_15] [i_15] [i_15] [16] = var_7;
                    }
                }
            }
        }
    }
    for (int i_21 = 0; i_21 < 22;i_21 += 1) /* same iter space */
    {
        var_27 = ((-76 ? (var_7 / var_3) : var_7));

        for (int i_22 = 1; i_22 < 21;i_22 += 1)
        {
            /* LoopNest 3 */
            for (int i_23 = 1; i_23 < 19;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 22;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 22;i_25 += 1)
                    {
                        {
                            arr_84 [i_21] = (max(((((!var_9) || var_4))), var_4));
                            arr_85 [i_21] [1] [i_21] [i_21] [1] [i_21] [i_21] = max(((38 ? 80 : -2136759959136562051)), (((~((var_8 ? 76 : var_4))))));
                        }
                    }
                }
            }
            var_28 = (((arr_76 [i_21]) ? var_3 : ((((0 ? var_3 : 91)) % var_5))));
        }
        arr_86 [i_21] = (arr_53 [i_21]);
    }

    for (int i_26 = 0; i_26 < 23;i_26 += 1)
    {
        arr_89 [i_26] = var_5;

        for (int i_27 = 1; i_27 < 19;i_27 += 1)
        {
            arr_92 [i_26] [i_27] = var_4;
            var_29 ^= var_1;
        }
        for (int i_28 = 0; i_28 < 23;i_28 += 1)
        {
            var_30 -= (1 / 1777506349810271707);
            var_31 = -var_5;
            arr_96 [i_26] &= ((((max(-32, 4065167565))) ? var_9 : (((255 * (-32767 - 1))))));
        }
    }
    for (int i_29 = 1; i_29 < 17;i_29 += 1)
    {
        var_32 = ((((((((arr_56 [i_29] [i_29]) ? var_6 : var_8)) <= (((var_3 * (arr_76 [i_29]))))))) << 26));
        var_33 = ((min(-86, var_1)));
        arr_100 [i_29] [i_29] = var_5;
        var_34 = 23513;
    }
    /* vectorizable */
    for (int i_30 = 0; i_30 < 21;i_30 += 1)
    {
        arr_104 [i_30] [i_30] = var_1;
        var_35 = ((var_0 ? var_9 : (arr_82 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30] [i_30])));

        for (int i_31 = 4; i_31 < 20;i_31 += 1) /* same iter space */
        {
            arr_108 [i_30] [i_31] = var_2;
            arr_109 [i_30] [i_30] &= var_2;
        }
        for (int i_32 = 4; i_32 < 20;i_32 += 1) /* same iter space */
        {
            arr_112 [i_30] = (((arr_88 [i_30]) ? -var_3 : var_2));
            arr_113 [i_30] [i_30] = ((var_7 ? (((1733894844596517482 ? (-32767 - 1) : 142))) : var_1));
        }
        var_36 += var_6;
    }
    var_37 *= var_4;
    var_38 = max(((((var_3 / 44) == ((var_9 ? var_7 : var_6))))), var_3);
    #pragma endscop
}
