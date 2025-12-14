/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_3 - 1] [i_0] = 2147483647;

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1 - 1] [i_1] [i_0] [i_4 - 1] = 38482;
                            var_14 -= 122;
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = 23726217;
                        }
                    }
                    var_15 += 1;
                    var_16 = 6965160814352409567;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_17 = 65535;
                        var_18 = 47840;
                        arr_19 [i_0] [i_1] [i_0] [i_5] [i_5] [i_0] = -123;
                        var_19 = (max(var_19, 65535));
                        var_20 = 1;
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_22 [6] &= (-2147483647 - 1);
                        arr_23 [i_0] [i_0] [i_0] [i_2] [i_2] [i_6] = -79;
                    }
                }
            }
        }
    }
    var_21 = 47840;

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_22 *= 65535;
                            var_23 = 107;
                        }
                        for (int i_12 = 2; i_12 < 19;i_12 += 1)
                        {
                            arr_41 [i_7] [i_8] [i_7] [i_8] [i_12 - 1] = -30883;
                            var_24 = 1336889901374737826;
                            var_25 -= 122;
                            arr_42 [i_8] [i_7] [i_9] [i_8] [i_7] [i_7] = 1;
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                        {
                            var_26 = 1;
                            var_27 = (min(var_27, 915992242));
                            var_28 -= 47840;
                        }
                        for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                        {
                            var_29 = 859871147796939905;
                            var_30 = (min(var_30, 239));
                            arr_48 [i_7] [i_7] [i_7] [i_10] [i_7] = -1;
                            arr_49 [i_7] [i_8] [i_9] [i_10] = 958568754;
                        }
                        var_31 = 27048;
                        var_32 = (max(var_32, -22570));

                        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                        {
                            var_33 ^= 4294967295;
                            arr_53 [i_7] [i_7] [i_9] [i_7] [i_15] [i_7] = 2705985102;
                            var_34 = 4294967282;
                            var_35 = 5401572987325179857;
                        }
                        for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                        {
                            var_36 = (max(var_36, (-127 - 1)));
                            var_37 = 10850837865584809364;
                        }
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            var_38 = -1;
                            arr_59 [i_7] [i_8] [i_7] [i_8] [i_8] &= -83;
                            var_39 += 38482;
                            arr_60 [i_7] [i_7] [i_8] [i_9] [i_10] [i_8] [i_17] = 13045171086384371758;
                        }
                    }
                }
            }
        }
        var_40 &= -71;
    }

    /* vectorizable */
    for (int i_18 = 2; i_18 < 9;i_18 += 1)
    {
        arr_65 [i_18] [i_18] = 255;
        var_41 = 48;
        var_42 = 0;
    }
    for (int i_19 = 0; i_19 < 15;i_19 += 1)
    {
        var_43 = 13655;

        /* vectorizable */
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {
            var_44 = (min(var_44, 5401572987325179857));
            arr_72 [i_20] &= 5401572987325179883;
            /* LoopNest 2 */
            for (int i_21 = 3; i_21 < 14;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 14;i_22 += 1)
                {
                    {
                        var_45 = 0;
                        arr_77 [i_19] [i_19] [i_19] [i_19] [i_19] = -27388;
                        arr_78 [i_19] [i_19] = -731644344061263422;
                        arr_79 [i_19] [i_20] [i_20] [i_22] = 107;
                    }
                }
            }
        }
        var_46 = (max(var_46, -117));
        var_47 = (min(var_47, 1));
        arr_80 [i_19] [i_19] = 4294967295;
    }
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 14;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 14;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 14;i_25 += 1)
            {
                {
                    arr_89 [i_23] = 1;
                    var_48 = 275590657;
                }
            }
        }
    }
    #pragma endscop
}
