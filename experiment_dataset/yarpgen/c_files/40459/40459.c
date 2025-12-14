/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    var_13 = 104;
    var_14 = (-(max((min(-1748866345, 93)), 90)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = 49496;
        arr_4 [i_0] [i_0] = 243;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = (min(245, (max(65535, 149))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_16 = 18446744073709551615;
                            var_17 = -12;
                            var_18 = 127;
                            var_19 = -0;
                            arr_19 [i_0] [i_0] [i_2] [i_3 + 2] [i_1] [i_4] = (!1265745853);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_2] [i_1] = ((min((max(1265745850, 71), ((min(31, 107)))))));
                            arr_25 [i_0] [i_0] [i_0] [i_1] = ((~(min(18446744073709551602, (-2147483647 - 1)))));
                        }
                    }
                }
            }
            arr_26 [i_0] [i_1] = 149;
            arr_27 [i_1] = 27635363912192791;
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_20 = (max(152, (((min(255, 25835))))));
            var_21 = -53;
        }

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_22 = (max((((!(-127 - 1)))), ((~(!119)))));
            var_23 = min(-1722863683, (min(0, -4)));

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_38 [i_7] [i_7] [i_8] = 0;
                var_24 = (max((min(104, 244)), (-127 - 1)));
                var_25 = (max(0, 32479));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_26 = (~249);
                            var_27 = 16359713927685398012;
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_28 = (max(0, -8156803326972645718));
                arr_49 [i_0] [i_0] [i_7] = 12;
            }
            /* vectorizable */
            for (int i_12 = 2; i_12 < 21;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            var_29 = (~-122);
                            var_30 = 249;
                            arr_57 [i_7] [i_7] [i_7] [i_7] [i_7] = 1048575;
                        }
                    }
                }
                arr_58 [i_0] [i_0] [i_7] [i_7] = 18766;
            }
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 21;i_16 += 1)
                {
                    {
                        var_31 = 13446378672698410757;

                        for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
                        {
                            arr_66 [i_7] [i_7] [i_7] [i_16 + 1] = (-2147483647 - 1);
                            var_32 = ((!((max((~65535), 107)))));
                        }
                        for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
                        {
                            arr_71 [i_7] [i_7] = 16379842048621426297;
                            var_33 = (min((max(((max(25, 65525))), (-9223372036854775807 - 1))), 1161993421));
                        }
                        arr_72 [i_7] [i_7] [i_15 - 1] [i_16 + 3] [i_16 + 4] = ((~((max(25808, 160)))));
                    }
                }
            }
            arr_73 [i_7] [i_7] = 65535;
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 25;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 21;i_20 += 1)
            {
                {
                    arr_81 [i_0] [i_0] = 2087030146024153604;
                    arr_82 [i_0] [i_19] [i_20 + 2] = 52798;
                }
            }
        }
    }
    #pragma endscop
}
