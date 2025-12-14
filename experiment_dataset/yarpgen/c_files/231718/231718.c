/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (~var_12);
        var_14 = ((var_6 ? ((~(~var_10))) : (~var_5)));
        arr_5 [i_0] [i_0] = var_11;
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_13 [i_1] [i_2] [i_1] = var_2;
            arr_14 [i_2] [i_1] = var_12;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_20 [i_3] [i_2] [i_3] [i_4] = ((1 ? -var_6 : (((var_11 ? var_7 : var_9)))));
                        arr_21 [i_3] [i_3] [i_2] [i_3] = (~18446744073709551615);
                        var_15 -= ((((((~var_5) ? var_11 : ((var_2 ? var_8 : var_11))))) ? (((((var_7 ? var_12 : var_4))))) : (~var_8)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                var_16 = ((var_3 ? var_2 : var_7));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_32 [i_5] = var_0;
                            arr_33 [i_1] [i_1] [i_6] [i_7] [i_5] = ((var_11 ? var_9 : var_1));
                        }
                    }
                }
                var_17 = (max(var_17, ((((~var_12) ? ((var_11 ? var_8 : var_3)) : var_12)))));
                arr_34 [i_1] [i_5] [i_6] [i_6] = var_11;
            }
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                var_18 = ((1 ? 1 : 1));

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_19 = (max(var_19, (~var_3)));
                    var_20 = (~-107);
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_1] [i_5] [i_9] [i_1] [i_5] [i_9 + 1] = ((var_7 ? var_5 : var_7));
                        var_21 = ((~((var_7 ? var_9 : var_12))));
                        arr_47 [i_1] [i_5] [i_1 + 1] [i_1 - 3] [i_1] = (var_1 ? var_10 : var_1);
                        arr_48 [i_1] [i_5] [i_1] [i_1] [i_12] = (~var_7);
                        arr_49 [i_5] [i_12] [i_9] = (~-1);
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        arr_52 [i_1] [i_5] [i_9] [i_11] [i_13] = (~var_4);
                        var_22 = (max(var_22, 1));
                    }
                    var_23 = var_1;
                    var_24 = ((var_1 ? var_7 : var_11));
                }
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_25 = ((var_4 ? var_10 : (~var_4)));
                        var_26 *= ((var_5 ? ((0 ? 2953477993 : 42584)) : var_9));
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        arr_62 [i_1 + 1] [i_9] [i_5] [i_14] = (((~var_4) ? ((var_0 ? var_11 : var_6)) : var_8));
                        var_27 -= (~var_10);
                        var_28 = ((var_6 ? var_0 : var_3));
                        var_29 = ((~((var_1 ? var_11 : var_0))));
                        var_30 = (~var_5);
                    }
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        var_31 = (max(var_31, var_6));
                        arr_65 [i_17] [i_14] [i_5] [13] [i_1] = var_12;
                        arr_66 [i_1 + 2] [i_1 + 2] [i_5] [i_14] [13] = 4;
                    }
                    arr_67 [i_1] [i_5] [i_14] = ((~((var_2 ? var_7 : var_11))));
                }
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    var_32 += (((~var_4) ? (~var_11) : (~var_3)));
                    var_33 = (max(var_33, -60223));
                }
                var_34 = var_3;
                var_35 = ((var_10 ? var_3 : var_8));
            }
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                var_36 = (max(var_36, (~var_12)));

                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    var_37 = ((~(~var_0)));

                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        arr_76 [i_20] [2] [i_5] |= ((~((var_2 ? var_0 : var_11))));
                        arr_77 [i_5] [i_5] [i_5] [i_5] [i_5] = var_1;
                        arr_78 [i_19] [i_5] [i_19] [i_5] [i_1] = ((var_4 ? var_12 : var_1));
                        arr_79 [i_1] [i_5] [i_5] [i_20] [9] = (~var_9);
                    }
                    for (int i_22 = 4; i_22 < 12;i_22 += 1)
                    {
                        var_38 ^= (~var_12);
                        arr_84 [i_22] [i_5] [i_19] [i_20] |= ((~((var_5 ? var_4 : var_12))));
                    }
                    for (int i_23 = 3; i_23 < 12;i_23 += 1)
                    {
                        var_39 = var_8;
                        var_40 = (~var_9);
                        arr_88 [i_23 - 1] [i_5] [1] [i_5] [i_1] = (((var_8 ? var_0 : var_1)));
                        var_41 = (max(var_41, (((var_9 ? var_1 : var_8)))));
                    }
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        var_42 -= ((~((1 ? 1 : 13061195))));
                        arr_91 [i_5] = var_9;
                        arr_92 [i_1 + 2] [i_5] [i_1 + 2] [i_5] [i_24] = var_10;
                        var_43 &= 1;
                        var_44 = ((var_4 ? var_6 : var_9));
                    }
                    var_45 = (max(var_45, ((((~var_12) ? var_12 : var_12)))));
                }
            }
            for (int i_25 = 0; i_25 < 14;i_25 += 1)
            {
                arr_96 [i_5] [i_5] = (((((var_6 ? var_12 : var_0))) ? var_11 : (~var_2)));
                var_46 *= ((var_4 ? var_11 : var_5));
            }
            var_47 -= var_4;
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 14;i_26 += 1)
            {
                for (int i_27 = 1; i_27 < 13;i_27 += 1)
                {
                    {
                        arr_103 [i_1] [i_5] [i_26] [i_27] = (((~var_8) ? var_4 : var_0));

                        for (int i_28 = 1; i_28 < 11;i_28 += 1) /* same iter space */
                        {
                            var_48 = (max(var_48, (((~(~var_11))))));
                            arr_106 [i_1] [i_26] [i_5] [11] [i_28] [i_5] = (((((4088 ? 65524 : var_7))) ? var_9 : ((var_8 ? var_4 : var_5))));
                            arr_107 [i_1] [i_5] [i_27 + 1] = var_7;
                            arr_108 [i_1] [i_5] [i_26] [i_27 + 1] [i_28] = ((var_12 ? var_7 : (~var_3)));
                            var_49 = ((7 ? 11047982639898505035 : 65524));
                        }
                        for (int i_29 = 1; i_29 < 11;i_29 += 1) /* same iter space */
                        {
                            arr_111 [i_5] [i_27] [i_26] [i_26] [i_5] [i_5] [i_5] = (((~var_5) ? var_7 : (~var_4)));
                            arr_112 [i_1] [i_29] [i_26] [5] [i_5] [i_26] [i_1] = (~var_10);
                            arr_113 [i_5] [i_1] = var_12;
                            arr_114 [i_5] [i_26] [i_27 + 1] [i_5] = var_4;
                            arr_115 [i_1] [i_5] [i_5] [i_27] [7] = var_7;
                        }
                    }
                }
            }
        }

        for (int i_30 = 0; i_30 < 0;i_30 += 1)
        {
            var_50 = ((((((((var_5 ? var_8 : var_3))) ? (~var_9) : var_12))) ? ((~(~var_12))) : var_8));
            var_51 -= ((~(~var_5)));
        }
    }
    var_52 &= var_7;
    #pragma endscop
}
