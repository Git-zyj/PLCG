/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_19 = ((((0 ? var_8 : var_8)) - var_7));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [10] [i_2] [i_3] = (~var_0);
                        var_20 ^= (-var_14 ? -36 : var_4);
                        var_21 *= -39;
                        var_22 |= 47;
                    }
                }
            }
            var_23 = (arr_1 [i_1 - 1]);
            var_24 = (min(var_24, -65));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_25 = (((var_16 + 2147483647) << (11499 - 11499)));
            arr_17 [i_0] = 18446744073709551605;
            arr_18 [i_0] [i_0] [i_0] = ((arr_6 [i_0] [i_4] [i_0]) ? var_8 : var_11);
            arr_19 [7] [i_4] = -var_2;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_24 [i_0] [i_0] [i_0] = (~32429);

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_29 [i_0] = (arr_4 [11] [i_5] [i_6]);
                arr_30 [9] [i_5] [10] [10] = ((var_17 & (arr_10 [i_0] [i_0] [i_0] [4] [8] [9])));
                arr_31 [8] [i_5] [i_6] [i_6] = -18446744073709551605;
            }
        }
        arr_32 [i_0] [7] = var_5;
        arr_33 [i_0] = (~9223372036854775807);
    }

    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_26 -= ((((var_12 << (((arr_38 [i_9] [i_9] [i_7] [i_7]) - 156)))) != ((max((-8635632952463835340 / -11500), var_1)))));
                    arr_40 [i_7] = (min(-3410109032653601642, var_13));
                }
            }
        }
        var_27 = (max(var_27, 2147483647));

        for (int i_10 = 3; i_10 < 17;i_10 += 1)
        {
            arr_43 [i_7] = ((((var_11 ? (arr_39 [i_7 - 1] [i_7]) : var_12)) != (((min((1 > var_8), 43))))));
            var_28 = ((min((22 & var_14), var_13)));
            arr_44 [i_10] [i_10 - 2] [i_7] = 2147483636;
        }
        arr_45 [i_7] = 2147483632;
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            arr_53 [i_11] [4] [i_12] = (-2147483637 || var_6);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    {

                        for (int i_15 = 1; i_15 < 17;i_15 += 1)
                        {
                            arr_62 [i_11] [i_12] [i_13] [7] [i_12] = (((((var_6 ? var_15 : -32757))) || (arr_56 [i_15] [i_14] [i_13] [7] [i_11])));
                            arr_63 [i_11] [i_12] [i_13] [i_14] [i_15 + 1] = (arr_55 [i_11 + 1] [i_14] [i_15 - 1] [12]);
                            var_29 = (((((arr_37 [i_11] [i_11]) ? 11480 : var_6)) & var_16));
                        }
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            arr_67 [i_16] [1] [i_13] [i_13] [i_13] [i_11] = var_14;
                            var_30 = (max(var_30, ((((11480 ? var_12 : var_5))))));
                            var_31 = -var_16;
                            var_32 = ((1 ? (arr_48 [3]) : var_7));
                        }
                        var_33 = 8925340366066733486;
                    }
                }
            }
            arr_68 [i_11 + 1] [i_11] [15] = (((arr_59 [i_12] [i_12] [i_11] [i_12] [i_11 - 1] [i_12]) < (arr_59 [i_11] [1] [i_11] [1] [i_11 - 1] [i_11])));
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            arr_72 [i_11] [i_11] [1] = 50;
            var_34 = -31;
            arr_73 [i_11] [i_11] [14] = var_0;
        }
        var_35 = ((((arr_41 [i_11] [i_11] [i_11 - 1]) ? var_7 : var_16)));
        var_36 &= -7125052342216824798;
    }
    /* vectorizable */
    for (int i_18 = 1; i_18 < 16;i_18 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 18;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 18;i_20 += 1)
            {
                {

                    for (int i_21 = 2; i_21 < 17;i_21 += 1) /* same iter space */
                    {
                        var_37 = (~(-22738 | var_10));
                        var_38 = (((arr_58 [i_18 + 1] [i_18 + 1] [1] [i_21 + 1] [i_18 + 1] [1]) >= (arr_50 [i_18 + 2] [i_21 - 2])));
                        arr_83 [i_20] [i_18] [i_20] [i_21] = (((arr_54 [i_18 + 2] [i_21 + 1] [i_21]) - var_11));
                        arr_84 [i_18] [i_19] [i_18] [8] = ((arr_75 [i_18 + 1]) | var_5);
                    }
                    for (int i_22 = 2; i_22 < 17;i_22 += 1) /* same iter space */
                    {
                        arr_88 [i_18] [i_18] [i_20] = var_7;
                        var_39 ^= 41073;
                    }
                    for (int i_23 = 2; i_23 < 17;i_23 += 1) /* same iter space */
                    {
                        arr_92 [i_18] [i_18] [i_18] = var_14;
                        var_40 = (~var_3);
                        var_41 = 39;
                    }
                    var_42 = 18446744073709551615;
                    var_43 = (var_6 > var_5);
                }
            }
        }
        arr_93 [i_18] = 13558759140055571596;
    }
    /* vectorizable */
    for (int i_24 = 1; i_24 < 16;i_24 += 1) /* same iter space */
    {
        var_44 = (((((var_12 ? 1 : 1))) ? -var_3 : 8038954000196458116));
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 18;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 18;i_26 += 1)
            {
                {
                    arr_103 [i_24] [1] = ((var_0 && (((var_12 ? var_5 : -7125052342216824796)))));
                    var_45 = ((13675401937828077595 ? var_12 : (arr_74 [i_24 + 1])));
                    arr_104 [i_24] [i_24] = var_13;
                }
            }
        }
        arr_105 [i_24] [1] = var_1;
        arr_106 [i_24] = ((0 ? 11878650597362121520 : var_0));
    }
    #pragma endscop
}
