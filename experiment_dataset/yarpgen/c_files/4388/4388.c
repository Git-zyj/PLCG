/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_10 = 1;
                                var_11 = (((~-31972) ? ((1 >> (-32736 + 32753))) : ((min(32763, 1)))));
                                var_12 = -104;
                            }
                            var_13 &= (-32767 - 1);
                            var_14 = (~-18933);
                        }
                    }
                }
                var_15 &= (min(((max(74, 1))), (min(-4, -5959))));
            }
        }
    }

    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_16 = 1;

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_17 ^= 1;
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        var_18 = -60;
                        var_19 = ((((max(32767, 1))) ? -29784 : -11956));
                        var_20 ^= (~-91);

                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            var_21 = ((((((~1) ? ((max(0, 1))) : (~0)))) ? (((!-113) ? ((-60 ? 1 : 1)) : (-32767 - 1))) : (~-67)));
                            var_22 = ((1 ? (~32767) : 1));
                            var_23 &= ((((max(1, (max(23501, -88))))) ? 30907 : -23));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_24 = -1;
                            var_25 = 1;
                            var_26 = (~-119);
                        }
                        var_27 = (32767 || ((!(((16 ? 1 : -81))))));
                    }
                }
            }

            for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_28 = ((1 ? -22 : 1));
                    var_29 = 0;
                }
                var_30 = (max((1 * 0), (((((67 ? -17826 : 1))) ? 101 : (~1)))));
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
            {
                var_31 = (((((-32767 && (~1)))) != ((1 ? (~1) : -19133))));
                var_32 = (min((17825 < 32767), (~32512)));

                /* vectorizable */
                for (int i_14 = 4; i_14 < 24;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
                    {
                        var_33 ^= 1;
                        var_34 = (23062 + 127);
                        var_35 = ((97 ? -101 : 1));
                    }
                    for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
                    {
                        var_36 = 99;
                        var_37 = (((-32767 - 1) && -32030));
                    }

                    for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
                    {
                        var_38 ^= (((32030 < 91) ? 0 : 32));
                        var_39 |= 0;
                    }
                    for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
                    {
                        var_40 = 1;
                        var_41 = 25;
                        var_42 = ((1 ^ (-127 - 1)));
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        var_43 &= ((1 ? 11104 : -30911));
                        var_44 = (1 || -1);
                        var_45 = (min(var_45, -1));
                        var_46 = ((-11835 | (-67 + 18)));
                    }
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                {
                    var_47 &= ((!(!-114)));

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        var_48 = 1;
                        var_49 = ((~(-32767 - 1)));
                        var_50 ^= 32749;
                    }
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        var_51 = 30907;
                        var_52 = -62;
                        var_53 |= (-32767 - 1);
                    }
                    for (int i_23 = 0; i_23 < 0;i_23 += 1)
                    {
                        var_54 = 16320;
                        var_55 = (~-6678);
                    }
                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 25;i_24 += 1)
                    {
                        var_56 ^= ((15 ? 32753 : -1));
                        var_57 = 391;
                    }
                }
                for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
                {
                    var_58 = (min(var_58, ((min(16117, -0)))));
                    var_59 = ((~((-((max(1, -25)))))));
                    var_60 &= ((~(((((max(1, (-127 - 1)))) || -8192)))));
                    var_61 = (max(110, (max(1, 90))));
                    var_62 = (min(var_62, 22212));
                }

                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    var_63 = (-127 - 1);
                    var_64 = (min(((1 >> ((((min(127, -111))) + 126)))), ((~(~89)))));

                    /* vectorizable */
                    for (int i_27 = 0; i_27 < 25;i_27 += 1)
                    {
                        var_65 = 1;
                        var_66 = ((0 ? (-32767 - 1) : 1));
                        var_67 = (~7);
                        var_68 = -15160;
                        var_69 = (1 < 0);
                    }
                    var_70 &= ((-((min((max(0, 0)), (1 != -10586))))));
                }
            }
        }
        for (int i_28 = 0; i_28 < 25;i_28 += 1) /* same iter space */
        {
            var_71 = ((((1 ? -6037 : ((max(-1, 32512))))) > 1));
            var_72 = (max(0, 30963));
            var_73 = (((-32767 - 1) ? (~1) : ((max(-125, -104)))));
        }
        for (int i_29 = 0; i_29 < 25;i_29 += 1) /* same iter space */
        {
            var_74 = ((23389 ? ((1 ? (~1) : ((111 ? 27989 : -120)))) : 1));
            var_75 = ((-(max(2207, 1))));
        }
        var_76 = (max(((!(((96 ? -105 : -13440))))), 1));
    }
    var_77 = (min(var_8, var_5));
    var_78 = (((30 || -59) ? 1 : 59));
    #pragma endscop
}
