/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_18 = (!15);
                            var_19 = var_6;
                            var_20 |= (~0);
                            var_21 *= (var_9 | var_15);
                            arr_14 [i_0] = ((4313 < ((var_1 ? 0 : var_13))));
                        }
                        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [5] [i_1] [i_1] [i_1] = ((!(((var_11 ? var_16 : var_0)))));
                            var_22 = (73 != 576460752303423487);
                            arr_18 [i_1] [i_1] [i_0] = ((1003 ? 4794 : 60752));
                            var_23 ^= ((((var_3 ? 127 : 4194303))) ? 33554431 : (((var_12 ? -12 : (-2147483647 - 1)))));
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_3] [i_6] = 1524218833;
                            var_24 = (!1);
                        }
                        arr_23 [i_0] [i_1] [i_0] [i_1] [i_3] = ((var_17 ? var_1 : 16855711468125322964));
                    }
                }
            }
            arr_24 [i_1] [i_1] = ((1 ? 4629808010635985886 : var_8));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    {
                        var_25 = (max(var_25, ((((var_9 == 89) >= 48324)))));
                        var_26 = (var_11 ^ -7);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    {
                        var_27 = (((((64 ? (-127 - 1) : var_11))) * var_3));
                        var_28 |= (((var_1 ^ var_9) ? var_14 : (var_11 % 13628777782357351022)));
                        var_29 *= (((((2442321355 ? 64 : var_5))) ? 2974406509 : 1));

                        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                        {
                            var_30 = ((~3393702219) ? (~134217727) : (768 * var_8));
                            arr_35 [8] [i_10] [i_10] = 1;
                        }
                        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                        {
                            var_31 = (min(var_31, -576460752303423491));
                            var_32 = (~var_5);
                            arr_38 [i_10] [i_10] [i_10] = (~134217727);
                        }
                        for (int i_13 = 3; i_13 < 13;i_13 += 1) /* same iter space */
                        {
                            var_33 -= (var_14 - 3363331347);
                            var_34 = var_1;
                            var_35 = ((var_11 ? var_1 : -1));
                            var_36 = 254;
                            var_37 = (min(var_37, 4294967295));
                        }
                        for (int i_14 = 3; i_14 < 13;i_14 += 1) /* same iter space */
                        {
                            var_38 = (~var_4);
                            arr_43 [i_0] [i_10] [i_9] [i_10 - 1] [i_0] [i_14 + 2] = (!var_4);
                        }
                        var_39 = var_14;
                    }
                }
            }
            var_40 = 7;
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 14;i_15 += 1)
        {
            var_41 = (max(var_41, var_4));
            var_42 = (var_17 * 0);
        }
        var_43 = (max(((65535 ? (max(var_5, 4294967278)) : 41)), var_11));

        /* vectorizable */
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            var_44 = var_0;
            var_45 *= ((!(((-4269960065702983144 ? 7 : 21)))));
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 19;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
        {
            var_46 ^= (!var_13);
            var_47 = (min(var_47, var_6));

            for (int i_19 = 0; i_19 < 19;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 2; i_20 < 18;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        {
                            arr_59 [i_17] [i_20] [i_19] [i_17] [i_17] [i_21] [i_17] = (~var_13);
                            arr_60 [12] |= var_0;
                        }
                    }
                }

                for (int i_22 = 0; i_22 < 19;i_22 += 1)
                {

                    for (int i_23 = 0; i_23 < 19;i_23 += 1)
                    {
                        var_48 = ((var_16 ? 4194294 : var_5));
                        var_49 = (!var_7);
                    }
                    var_50 &= 6917529027641081856;
                }
                var_51 = (!var_9);
                var_52 -= 134217727;
            }
            for (int i_24 = 1; i_24 < 17;i_24 += 1)
            {
                var_53 = ((var_0 ? ((((-112 + 2147483647) >> (-48 + 75)))) : ((var_3 ? var_15 : var_11))));
                arr_69 [i_18] [i_18] [i_17] = ((var_4 ? var_9 : var_15));
                var_54 = ((!(~var_7)));
            }
        }
        for (int i_25 = 0; i_25 < 19;i_25 += 1) /* same iter space */
        {
            var_55 *= -var_7;
            var_56 = 15035288621338015101;
            /* LoopNest 2 */
            for (int i_26 = 0; i_26 < 19;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 19;i_27 += 1)
                {
                    {

                        for (int i_28 = 3; i_28 < 16;i_28 += 1)
                        {
                            arr_78 [i_17] [i_26] [i_26] [i_17] [i_17] [18] |= ((var_16 ? -112 : 16090));
                            var_57 = (min(var_57, (((65535 ? 1 : 0)))));
                        }
                        for (int i_29 = 2; i_29 < 17;i_29 += 1)
                        {
                            var_58 = var_10;
                            var_59 -= -45;
                        }
                        for (int i_30 = 0; i_30 < 19;i_30 += 1)
                        {
                            var_60 = ((var_17 != ((2 ? var_12 : 924578466))));
                            var_61 = 4611686018427387903;
                            var_62 = (min(var_62, (((var_8 ? 0 : ((105 ? 149 : 1)))))));
                        }
                        var_63 = (109 - var_8);
                        var_64 = (min(var_64, var_3));
                        var_65 = (min(var_65, var_10));
                    }
                }
            }
        }
        for (int i_31 = 0; i_31 < 19;i_31 += 1)
        {
            arr_89 [i_17] [5] [i_31] = ((!(((24 ? var_8 : 1734609793)))));
            var_66 &= var_17;
        }

        for (int i_32 = 4; i_32 < 16;i_32 += 1)
        {
            var_67 *= var_16;
            var_68 = (~3835226159126192531);
        }
        for (int i_33 = 1; i_33 < 18;i_33 += 1)
        {
            /* LoopNest 2 */
            for (int i_34 = 0; i_34 < 19;i_34 += 1)
            {
                for (int i_35 = 0; i_35 < 1;i_35 += 1)
                {
                    {

                        for (int i_36 = 0; i_36 < 19;i_36 += 1)
                        {
                            arr_106 [i_17] [i_17] [i_17] [i_35] [2] |= (((!64) | var_10));
                            arr_107 [i_17] [i_33] [i_33 + 1] [14] [i_34] [i_35] [i_36] &= ((31 ? 26 : 255));
                            arr_108 [i_17] [i_35] [i_35] [i_35] [i_36] = var_17;
                            arr_109 [18] [i_33] [2] [18] &= ((var_12 ? ((39 ? var_4 : 14916981428209671494)) : 25));
                        }
                        for (int i_37 = 1; i_37 < 16;i_37 += 1)
                        {
                            var_69 = ((-64 ? (~var_12) : -110));
                            var_70 = var_12;
                            var_71 = (~var_14);
                        }
                        arr_112 [i_35] = ((var_1 ? 1 : 0));

                        for (int i_38 = 0; i_38 < 19;i_38 += 1)
                        {
                            arr_116 [i_35] = ((-3835226159126192531 ? 10764142822880209749 : -46));
                            var_72 = ((var_0 ? ((var_7 ? var_8 : 1331172931)) : (var_12 % var_8)));
                        }
                    }
                }
            }
            arr_117 [15] = var_7;
            var_73 ^= (!var_17);
        }
        arr_118 [i_17] &= ((4294967295 ? var_3 : 29709));
        var_74 &= (~var_6);
    }
    var_75 = var_7;
    var_76 = (~var_16);
    var_77 = ((var_14 ? var_14 : -38));
    #pragma endscop
}
