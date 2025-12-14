/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2147483647;
    var_13 = (min(var_13, -21761));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = -21761;

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_1] = -5419;
            var_15 = (min(var_15, -4040929743869605305));
        }
        for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_16 = 7726739158974625303;
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_17 = (min(var_17, 1));
                        var_18 = 1935863458646613706;
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    {
                        var_19 += 25;
                        var_20 = 0;
                        arr_26 [i_0] [i_0] [i_7] = -5419;
                    }
                }
            }
            arr_27 [i_5] = 133;
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_21 += 18446744073709551598;
                            var_22 -= 639464676;
                            var_23 = (max(var_23, 1));
                            var_24 = 21752;
                            arr_37 [i_0] [i_0] [i_8 - 1] [i_9] [i_10] = 43079;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 0;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        var_25 = 1392206287;
                        var_26 = 1;
                    }
                }
            }
        }
        arr_43 [0] [i_0] = -96443754352845269;
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_27 = (max(var_27, 144));
        var_28 = (min(var_28, 59));
        var_29 |= 3367368422728501660;
    }
    for (int i_14 = 2; i_14 < 17;i_14 += 1)
    {

        for (int i_15 = 2; i_15 < 16;i_15 += 1)
        {
            var_30 = (min(var_30, 28107));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        {
                            var_31 = 1;
                            var_32 ^= -4040929743869605305;
                            var_33 = 89;
                        }
                    }
                }
            }
            var_34 = -4040929743869605312;

            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {

                /* vectorizable */
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    var_35 ^= 1;
                    var_36 ^= 3706;
                    var_37 += 3693;
                    var_38 ^= 0;
                }
                arr_65 [i_14] [i_15] [i_15] [i_15] = 8864727249081558036;
            }
        }
        arr_66 [i_14] = 152;
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 15;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 15;i_22 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 1;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        {
                            var_39 = 254;

                            /* vectorizable */
                            for (int i_25 = 0; i_25 < 1;i_25 += 1)
                            {
                                arr_80 [i_22] [i_23 - 1] [i_25] = 1;
                                arr_81 [i_21] [i_22] [11] [11] [12] = -1801664996;
                                var_40 = 0;
                                var_41 = -1768;
                            }
                        }
                    }
                }
                var_42 ^= 1;
            }
        }
    }
    #pragma endscop
}
