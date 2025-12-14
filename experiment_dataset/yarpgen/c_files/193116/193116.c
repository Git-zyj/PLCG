/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_16 -= max(var_7, -var_2);
                        var_17 = ((((524160 <= (((arr_5 [i_0] [i_1]) + var_1)))) ? (max(var_7, 42054441)) : ((max(var_7, ((-(arr_7 [i_0]))))))));
                    }
                }
            }
        }
        arr_10 [i_0] = (max(85, 45680));
        arr_11 [i_0] = (((((arr_8 [i_0]) ? var_11 : 19879)) & var_1));
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_14 [13] = (max(4080, -8580335128272655221));
        var_18 = ((1 ? 6027961396531639294 : 3));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        var_19 = ((~(arr_16 [i_5 + 3])));
        var_20 = (arr_15 [i_5 - 2]);

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_21 = (arr_24 [i_5 - 1]);
                        var_22 = 1;
                    }
                }
            }
            arr_27 [i_5] [i_5] = var_10;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        arr_33 [i_9] [i_9] [i_5] [i_5] [i_9] = ((~(arr_24 [i_5 + 2])));
                        var_23 = (((arr_26 [i_5 + 1] [i_6] [i_9] [i_10]) - (arr_26 [i_5 + 1] [i_6] [i_6] [i_10])));
                        var_24 = (15928379640226120440 ? (arr_20 [i_5 + 2] [i_5 + 2]) : 1);
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 4; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_25 = (arr_42 [i_5] [i_5] [i_5] [i_5]);
                            var_26 = (1 <= 3);
                            var_27 = (arr_32 [i_5 - 2] [i_5 - 2] [i_12]);
                            var_28 = (arr_32 [i_5 - 1] [i_5 + 1] [i_5 + 1]);
                        }
                    }
                }
            }
            var_29 = (-4077 ? var_13 : var_9);
            var_30 = (((arr_35 [i_5] [i_5 + 1] [i_5 + 2]) ? (arr_35 [i_5] [i_5] [i_5 + 2]) : 1));

            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                var_31 = var_1;
                var_32 = ((144115188042301440 ? (((0 ? 85 : 74))) : (arr_36 [i_5] [i_5])));
            }
        }
        for (int i_16 = 1; i_16 < 19;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                arr_53 [i_5] [7] [i_16] = ((((var_0 ? 13661 : var_3))) ? var_13 : (arr_34 [i_16] [15]));
                var_33 = (arr_23 [i_5] [i_5] [i_5] [i_5]);
                arr_54 [i_16] = var_6;

                for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
                {
                    var_34 = (min(var_34, (((((arr_56 [i_18] [i_5] [i_5] [i_5]) ? var_1 : (arr_29 [i_5] [i_5] [12])))))));
                    var_35 *= ((2225933204 ? (arr_16 [i_5 - 2]) : (arr_16 [i_5 - 2])));
                    var_36 = (15619032968518399469 / var_14);
                }
                for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
                {
                    var_37 = (var_14 & var_9);
                    arr_59 [i_5 - 2] [i_16] [i_17] [i_16] = (!1);
                    var_38 = (((arr_46 [i_5 - 2] [i_5 + 1] [i_16 - 1]) ? (arr_46 [i_5 - 2] [i_5 + 1] [i_5 + 2]) : (arr_42 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_16 + 1])));
                    arr_60 [i_16] = (((arr_35 [i_5] [i_16 - 1] [i_17]) ? (arr_46 [i_5 + 3] [i_5 + 3] [i_16 + 1]) : var_10));
                }
                var_39 = var_10;
            }
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                var_40 = var_4;
                arr_63 [i_5] [i_5] [i_16] = var_8;
            }
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 18;i_22 += 1)
                {
                    {
                        arr_69 [i_16] [0] [i_16] = (arr_45 [i_16 + 1] [i_22 + 1]);

                        for (int i_23 = 4; i_23 < 18;i_23 += 1)
                        {
                            var_41 = ((var_11 & ((1 ? var_14 : var_3))));
                            var_42 *= var_6;
                            var_43 = ((((((arr_26 [i_23] [11] [11] [i_5]) ? var_13 : (arr_20 [13] [i_5 + 2])))) ? (arr_65 [i_5 + 1] [i_16] [i_16] [i_16 + 1]) : (arr_67 [i_16] [i_16] [i_16 - 1] [i_16] [i_16 + 1] [14])));
                            var_44 = ((var_9 ? (arr_32 [10] [i_16 + 1] [15]) : var_7));
                        }
                        for (int i_24 = 1; i_24 < 18;i_24 += 1)
                        {
                            var_45 = (min(var_45, ((((~4503599627370495) ? ((var_3 ? var_9 : -72)) : 42)))));
                            arr_74 [i_5] [i_16] [i_21] [i_22] [i_24] = ((1 ? 15 : -67108864));
                        }
                        var_46 = (max(var_46, (101 + var_6)));
                    }
                }
            }
        }
        for (int i_25 = 0; i_25 < 20;i_25 += 1)
        {
            var_47 = 12171945867571264043;
            var_48 = ((-(arr_35 [i_5] [i_5 - 2] [i_25])));
            arr_77 [7] [14] [i_25] = -255;
        }
    }
    /* vectorizable */
    for (int i_26 = 1; i_26 < 1;i_26 += 1)
    {
        var_49 = (arr_30 [i_26 - 1] [i_26] [i_26]);
        arr_81 [i_26 - 1] [i_26 - 1] = (arr_32 [i_26 - 1] [i_26 - 1] [i_26 - 1]);
        var_50 *= ((-((-5313791610921542459 ? 15244 : 18265069707557474019))));
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 14;i_27 += 1)
    {
        var_51 = -var_10;
        arr_84 [i_27] = (arr_38 [i_27] [i_27] [i_27] [i_27]);
        arr_85 [i_27] = ((var_7 ? (((arr_30 [5] [5] [5]) ? var_8 : var_1)) : ((126 ? (arr_55 [i_27] [i_27] [i_27]) : 0))));
    }
    var_52 = (max(((max(var_0, (max(var_6, var_14))))), var_11));
    #pragma endscop
}
