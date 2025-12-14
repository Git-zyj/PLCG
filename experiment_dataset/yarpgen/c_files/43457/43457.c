/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 * ((max(var_9, 180)))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_12 = (((((((max(32739, var_0))) ? ((var_10 ? (arr_0 [i_0] [0]) : 234420686)) : var_0))) > var_5));
        var_13 = (max(var_13, (max((((arr_0 [i_0 + 2] [i_0 + 2]) << (var_3 - 92))), var_9))));
        arr_4 [i_0] = 147158379;
        arr_5 [i_0 + 1] [i_0] = (((((32751 ? 19905 : var_8))) ? ((((arr_2 [i_0 + 2] [i_0 - 1]) ? var_0 : 32796))) : (arr_2 [i_0 + 1] [i_0 + 1])));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = var_4;
            var_14 = ((-((~(max(1491943942, var_3))))));
            var_15 = (min(var_15, ((max(((var_3 / (((arr_0 [i_0] [i_0]) ? var_6 : var_5)))), ((var_0 ? 480 : var_5)))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 += -32796;
            var_17 = (arr_1 [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_17 [i_0] = (arr_10 [i_0]);
            var_18 *= (((min((max(32751, var_6)), 3865191874))) ? 0 : -var_10);
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_26 [i_4] [i_4] [i_4] [i_4] [i_5] = (24232 ? ((var_9 ? 32796 : (arr_21 [i_6] [i_4]))) : var_7);
                        arr_27 [i_5] [i_5] [i_6] [i_7] = ((1145471744 ? (arr_22 [i_5]) : (arr_22 [i_5])));
                        var_19 = (((arr_24 [i_4]) / var_9));
                        arr_28 [i_5] = 255;
                        arr_29 [i_5] [i_5 + 1] [i_5] = var_8;
                    }
                }
            }

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {

                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    var_20 -= var_6;

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_21 = 128;
                        var_22 = (arr_21 [i_4] [i_5 - 1]);
                        var_23 = var_0;
                    }
                    var_24 = (var_7 - 1078789953);
                    var_25 = (!var_10);
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_26 += (arr_34 [i_8] [i_8] [i_4]);
                            arr_44 [i_5] [i_5] [i_8] = (((var_7 || var_0) ? (arr_23 [i_5 + 1]) : var_9));
                            arr_45 [i_4] [i_5] [15] [i_11] [i_5] = ((var_0 ? var_10 : 0));
                            var_27 -= 32796;
                            var_28 = (min(var_28, (((~(41303 < -1078789951))))));
                        }
                    }
                }
                var_29 = var_6;
                var_30 ^= ((-(((arr_23 [i_4]) ? 2426009447 : 12918))));
                var_31 = ((var_8 ? var_9 : var_8));
            }
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        {
                            arr_55 [i_4] [12] [12] [12] [i_5] = var_3;
                            arr_56 [i_14] [i_5] = 15791;
                            arr_57 [i_5] = ((-32766 ? var_3 : -480));
                            arr_58 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4] [i_4] = ((var_2 ? (arr_37 [i_4] [i_14] [i_14] [i_13 + 2] [i_14] [i_5 - 1]) : var_9));
                        }
                    }
                }
            }
            arr_59 [i_4] [i_4] [i_5] = ((arr_54 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5]) ? var_9 : (((arr_46 [i_4] [i_5] [i_5] [i_5 + 1]) ? var_1 : (arr_37 [i_4] [i_4] [13] [i_4] [13] [13]))));
        }
        for (int i_16 = 1; i_16 < 20;i_16 += 1) /* same iter space */
        {
            var_32 -= (((arr_53 [14]) / var_10));
            var_33 ^= ((45305 ? var_0 : (arr_41 [0] [0] [i_16 - 1] [i_16 + 1])));
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    {
                        arr_68 [i_4] [i_4] [i_16] [i_17] [i_17] [i_18] = (arr_33 [i_16] [i_16] [i_16] [i_16] [0]);
                        arr_69 [i_4] [i_16] [i_16] [i_17] [i_18] = ((var_9 / 100) ? 32797 : var_9);
                    }
                }
            }
        }
        arr_70 [i_4] = ((!(((var_0 ? var_3 : 128)))));
        arr_71 [i_4] = ((var_4 && (arr_32 [i_4] [i_4] [i_4] [4])));
        arr_72 [i_4] = var_7;
        arr_73 [i_4] = (!var_8);
    }
    for (int i_19 = 2; i_19 < 11;i_19 += 1)
    {
        arr_78 [i_19 + 1] = ((((((arr_3 [0]) / 8392))) ? -198 : (2147483632 / 273607334)));
        arr_79 [i_19] = (((arr_15 [i_19 - 2] [i_19 - 1]) ? 32796 : ((max(45310, 24)))));
        var_34 = -var_8;
    }
    #pragma endscop
}
