/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max((min(-6, 7595758539172535178)), ((min((max(1037053160, -2272365191756456720)), -1037053161))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    {
                        var_14 = 1292630999;
                        var_15 ^= (min((max((max(39, 12765032535480411140)), (min(8905486044629502241, -1037053165)))), 173));
                        var_16 = (max((min((min(14, 103685631)), (-127 - 1))), (max(((min(118, 1037053149))), (max(4125996594, 37))))));

                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            arr_12 [i_1] [i_2] [i_3] [7] = 1037053149;
                            var_17 = -70;
                        }
                    }
                }
            }
        }
        var_18 = 42;
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_19 = 1037053154;

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_20 = (min(var_20, ((max((min(((max(33, 255))), (min(1420186705, 37)))), 1037053145)))));
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_21 = (min(var_21, ((min((min((min(-1037053160, 64676)), 1)), -2)))));
                        var_22 = 56;
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_23 = (max(((max(4191281658, (max(1, -5739128814608327075))))), (max(((max(15, 31505))), 5))));
            var_24 &= (min(-1037053171, (max((min(1037053131, -7497001323586019716)), 36157))));

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_25 += 4191281673;
                            var_26 = 16436;
                            var_27 = (min(81, -105));
                            var_28 = (max((max(((max(1048575, 6703746352251180972))), (max(7, -1)))), ((min(55357, (min(1, 12)))))));
                            var_29 |= -1037053160;
                        }
                    }
                }

                for (int i_13 = 3; i_13 < 23;i_13 += 1)
                {
                    var_30 = (min(22227, (min(((max(1, 785466475))), (max(4089312379125990899, -9223372036854775805))))));
                    var_31 = 120;
                    var_32 *= 4294967287;
                }
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    var_33 = (min(var_33, ((max(((min(((min(44216, -1037053160))), 1701574658))), (min((min(48645, 3618361402036903874)), 1701574654)))))));
                    arr_38 [i_14] [i_10] [18] [i_14] = (max((max(0, ((min(54, 2288))))), 1));
                }
                /* vectorizable */
                for (int i_15 = 2; i_15 < 21;i_15 += 1)
                {
                    var_34 += -24;
                    var_35 = 86;
                    var_36 *= 1792;
                    var_37 = 13;
                    var_38 += 2310183144324790211;
                }
            }
            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                var_39 += -1037053137;

                /* vectorizable */
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    var_40 ^= 398535854;
                    var_41 += 32167;
                    var_42 = 1037053174;
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 15;i_18 += 1)
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 14;i_20 += 1)
            {
                {
                    var_43 = 1037053173;

                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 15;i_21 += 1) /* same iter space */
                    {

                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            var_44 += 1037053145;
                            var_45 = 34076;
                        }
                        for (int i_23 = 0; i_23 < 15;i_23 += 1)
                        {
                            arr_64 [i_23] [10] [i_20 + 1] [i_20] [i_18] [i_18] [i_18] &= 100;
                            var_46 = 2852299980;
                        }
                        for (int i_24 = 0; i_24 < 15;i_24 += 1)
                        {
                            var_47 = (max(var_47, 1879048192));
                            var_48 = (min(var_48, 55));
                            var_49 = 16777215;
                        }
                        var_50 = 7718003022807567701;
                        arr_67 [i_18] = 7;
                    }
                    for (int i_25 = 0; i_25 < 15;i_25 += 1) /* same iter space */
                    {
                        var_51 = (max(var_51, ((min(28, (min(-4, (max(15821712681123212840, 421950608)))))))));
                        arr_72 [i_18] [i_19] = 18446744073709551612;
                        var_52 &= (max(18446744073709551609, ((min(((max(687407936, 63753))), (max(31440, 1846516402)))))));
                        var_53 = 1;
                    }
                    /* vectorizable */
                    for (int i_26 = 0; i_26 < 15;i_26 += 1)
                    {
                        var_54 = 63;
                        var_55 -= 0;
                        var_56 = (min(var_56, -1037053155));
                    }
                }
            }
        }
        var_57 = (max(75, (min((max(9926, 108)), -37))));
    }
    var_58 = (min((min(112, 65535)), 1));
    #pragma endscop
}
