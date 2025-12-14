/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = 0;

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_21 = -17353;
                    var_22 ^= (~1);
                }

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_23 = (!-1);
                    arr_10 [i_0] [i_1] [i_3] = 1;
                    var_24 = (!1);
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_25 = (!0);
                            var_26 -= ((!((!(!1)))));

                            for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                            {
                                var_27 = 1;
                                arr_20 [i_1] [i_4] [12] [i_1] = -12;
                            }
                            for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
                            {
                                var_28 = (--18446744073709551615);
                                arr_23 [i_0] [9] [i_4] [i_5] [i_5] [i_1] = 0;
                                arr_24 [12] [12] [i_1] = 1;
                                var_29 = 1;
                                var_30 = ((!(-32767 - 1)));
                            }
                            /* vectorizable */
                            for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                            {
                                var_31 = -1;
                                var_32 = -0;
                                arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] = -0;
                                var_33 = (~0);
                            }
                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                            {
                                var_34 ^= 17180507926954014174;
                                var_35 |= 75;
                                var_36 = (min(var_36, 1));
                            }
                            arr_30 [i_0] [i_1] [i_4] [i_5] = (--1);
                            var_37 = (~1);
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_38 = (max(var_38, 0));
                                var_39 = (min(var_39, 1));
                            }
                        }
                    }

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_40 = -0;
                        var_41 = -24;
                        var_42 &= (~-0);
                        var_43 = (min(var_43, 18446744073709551615));
                    }
                    for (int i_14 = 2; i_14 < 15;i_14 += 1)
                    {
                        var_44 -= 0;
                        arr_46 [1] [i_1] [7] [i_14] = 1;

                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            var_45 = (~1);
                            var_46 = (((!(!23))));
                            var_47 = (min(var_47, -18490));
                        }
                        var_48 = (~-4294967295);

                        for (int i_16 = 1; i_16 < 16;i_16 += 1)
                        {
                            var_49 *= (~32);
                            var_50 = (~457271205);
                            arr_51 [i_0] [i_1] [i_10] [16] [i_10] [i_0] = ((-(!0)));
                            var_51 = -5442595609461409994;
                        }
                    }
                    for (int i_17 = 1; i_17 < 16;i_17 += 1)
                    {

                        for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
                        {
                            var_52 = 0;
                            arr_57 [i_1] = ((-(!63)));
                        }
                        for (int i_19 = 0; i_19 < 17;i_19 += 1) /* same iter space */
                        {
                            var_53 = (min(var_53, -9));
                            var_54 = 0;
                            var_55 = -3808878415;
                        }
                        var_56 = (!2400903492719173883);
                        arr_60 [i_0] [1] [i_1] [i_17] [i_1] [i_1] = ((-(~9989925110496373397)));
                    }
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                {
                    var_57 = (max(var_57, (!4096)));
                    var_58 &= 1;

                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 17;i_21 += 1)
                    {
                        var_59 = 4032;
                        var_60 = 881;
                        var_61 = (min(var_61, -9709));
                        var_62 -= ((~(~-19343)));
                    }
                }
                /* vectorizable */
                for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                {
                    var_63 -= 4294967295;
                    var_64 = 1;
                }
                /* vectorizable */
                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {
                    var_65 ^= 1;
                    var_66 = 45;
                }
            }
        }
    }
    var_67 = (-32767 - 1);
    #pragma endscop
}
