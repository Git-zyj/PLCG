/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_12 = -1367074752;
                        var_13 = (min(var_13, (((((var_11 ? var_5 : (var_0 - var_3))) & 150)))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_14 = ((-((-2 - (~var_7)))));
                            var_15 = ((((var_4 ? 16368012453584521237 : var_5))));
                        }
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            var_16 -= ((~(min(var_0, (var_4 == 150)))));
                            var_17 = (158 <= 255);
                            var_18 = var_7;
                            var_19 = var_8;
                        }
                        var_20 = var_3;
                        var_21 |= ((((var_10 <= (max(7784367971254714335, var_7)))) ? var_7 : ((((((4194304 ? var_10 : var_11))) ? (~255) : ((min(var_4, var_8))))))));
                        var_22 ^= 127;
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_23 |= var_4;
                            var_24 = 1669586415;
                            var_25 = (~var_11);
                        }
                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            var_26 = var_6;
                            var_27 = ((min((min(var_0, 94)), var_0)));
                            var_28 = var_0;
                        }
                        var_29 = (min(18446744073709551615, 237));
                        var_30 = (max((max(((var_6 ? 65535 : 162)), 801666396)), var_10));
                        var_31 = ((var_10 ? var_9 : (((~((-24768 ? var_7 : var_9)))))));
                    }
                    var_32 = (min(var_11, 164));
                    var_33 = ((var_8 ? var_0 : var_1));
                    var_34 = ((+(min((!117), (min(var_6, var_2))))));
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_35 = (var_9 + var_7);
            var_36 = (max(var_36, var_6));
            var_37 &= var_0;
            var_38 = (min(var_38, var_8));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 19;i_14 += 1)
                {
                    {
                        var_39 = (0 == var_6);
                        var_40 ^= var_10;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    {
                        var_41 = 44737;
                        var_42 = (min(var_42, 127));
                        var_43 &= ((((var_1 ? 106 : var_0)) / var_5));
                    }
                }
            }
            var_44 = -57918;
        }
        var_45 = 65524;

        for (int i_17 = 1; i_17 < 21;i_17 += 1)
        {
            var_46 += (!var_7);

            /* vectorizable */
            for (int i_18 = 2; i_18 < 18;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 21;i_20 += 1)
                    {
                        {
                            var_47 = ((-((var_6 >> (var_5 - 1139633372)))));
                            var_48 = var_11;
                            var_49 = -7784367971254714336;
                            var_50 = var_1;
                        }
                    }
                }
                var_51 &= (1 % var_3);
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 21;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 22;i_22 += 1)
                    {
                        {
                            var_52 = (--65535);
                            var_53 = (var_1 || 12149);
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_23 = 1; i_23 < 19;i_23 += 1)
            {
                var_54 = (min(var_54, 7784367971254714336));
                /* LoopNest 2 */
                for (int i_24 = 3; i_24 < 18;i_24 += 1)
                {
                    for (int i_25 = 2; i_25 < 21;i_25 += 1)
                    {
                        {
                            var_55 &= -var_1;
                            var_56 *= var_4;
                            var_57 = (((~var_3) ? (~-20878) : var_0));
                            var_58 = (~var_7);
                        }
                    }
                }

                for (int i_26 = 1; i_26 < 21;i_26 += 1)
                {
                    var_59 &= ((~(!var_6)));

                    for (int i_27 = 0; i_27 < 22;i_27 += 1)
                    {
                        var_60 = (min(var_60, ((var_6 ? (var_7 == var_3) : var_1))));
                        var_61 = 801666398;
                    }
                    var_62 = ((var_8 ? 801666397 : (12149 + 32764)));
                }
                for (int i_28 = 2; i_28 < 19;i_28 += 1)
                {
                    var_63 -= (1057396127 * 4294967295);
                    var_64 = (-9223372036854775807 - 1);
                    var_65 = (((((126 ? 10 : 65531))) ? 65535 : 237));
                }
                var_66 = (7 * var_6);

                for (int i_29 = 0; i_29 < 22;i_29 += 1)
                {
                    var_67 = (!var_1);
                    var_68 = ((var_2 ? var_1 : 10));
                    var_69 = ((var_7 ? 250 : 12300));
                }
            }
        }
        for (int i_30 = 0; i_30 < 22;i_30 += 1)
        {

            for (int i_31 = 0; i_31 < 22;i_31 += 1)
            {
                var_70 = (min(var_70, (127 || 19)));
                var_71 &= var_1;
            }
            for (int i_32 = 0; i_32 < 22;i_32 += 1)
            {
                /* LoopNest 2 */
                for (int i_33 = 1; i_33 < 19;i_33 += 1)
                {
                    for (int i_34 = 3; i_34 < 21;i_34 += 1)
                    {
                        {
                            var_72 &= 4;
                            var_73 *= (min(((var_1 * (((0 ? var_8 : var_9))))), var_1));
                            var_74 &= ((!var_3) % 524032);
                            var_75 += 26;
                        }
                    }
                }

                for (int i_35 = 0; i_35 < 22;i_35 += 1)
                {
                    var_76 &= var_0;
                    var_77 = ((max(-1, 230)));
                }
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 22;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 22;i_37 += 1)
                    {
                        {
                            var_78 *= (min(((max(-27407, var_3))), 33434));
                            var_79 = min((min(((var_10 ? var_10 : var_0)), 65535)), ((-var_9 ? var_8 : var_7)));
                        }
                    }
                }
                var_80 = (min(var_80, (((-(max(((min(4008876957, 241))), ((var_11 ? 4077849954116728018 : 1097461819)))))))));
            }
            /* vectorizable */
            for (int i_38 = 0; i_38 < 22;i_38 += 1)
            {
                var_81 = 32901;
                var_82 = ((17625 ? ((21 ? var_4 : 65532)) : var_3));
            }
            var_83 &= var_11;
            var_84 = ((var_8 ? ((max(var_6, var_5))) : var_6));
        }
    }
    /* vectorizable */
    for (int i_39 = 3; i_39 < 18;i_39 += 1)
    {
        var_85 = 18446744073709551615;
        var_86 = ((-((0 ? 2097088 : var_11))));
        var_87 = var_8;
    }
    #pragma endscop
}
