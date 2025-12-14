/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(-41, var_13))) << (var_7 - 25)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (min(var_18, ((((124 ? (arr_1 [i_0]) : (arr_1 [i_0])))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_19 = var_6;
            var_20 *= (max(var_16, ((((arr_3 [i_1] [i_0] [i_0]) || (arr_3 [i_1] [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_21 = -96;
                arr_12 [i_0] = var_10;
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_22 = ((127 / (((arr_11 [i_0] [i_2]) - (arr_2 [i_0] [i_2] [i_4])))));
                arr_15 [i_4] [i_2] [i_0] = var_14;
                arr_16 [i_2] = ((((!(arr_5 [i_0] [i_0])))));
                arr_17 [i_2] = -28;
                var_23 = (min(var_23, (arr_1 [i_2])));
            }
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_20 [i_5] [i_2] = ((-20804 - ((min(-20804, (arr_4 [i_0]))))));

                /* vectorizable */
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    var_24 = (max(var_24, (((!(arr_11 [i_5] [i_0]))))));
                    var_25 = (~20803);
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_26 = var_10;
                    arr_25 [i_7] = 44;
                    var_27 -= ((~(arr_4 [i_7])));
                }

                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_28 -= (min((((((!(arr_0 [i_8])))) - (-17527 <= -126))), ((-(-32767 - 1)))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_29 ^= var_8;
                        var_30 = (((~var_12) / (arr_3 [i_0] [i_8] [i_9])));
                        arr_32 [i_8] = var_4;
                    }
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        var_31 = 2052;
                        var_32 = var_12;
                    }
                    arr_37 [i_8] [i_8] [i_8] [i_8] = (((arr_10 [i_0] [i_0]) <= var_10));
                    arr_38 [i_0] [i_8] [5] [i_0] = arr_31 [i_0] [i_8] [i_5] [i_5] [i_5];
                    arr_39 [i_8] = ((!(((((arr_18 [i_8] [i_5]) ? 40 : (arr_35 [i_2])))))));
                }
            }
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_33 = ((-(arr_19 [i_0] [i_0] [i_11])));
                var_34 = arr_3 [i_0] [i_2] [i_11];
                arr_43 [5] [i_2] = (max(-20818, -10369));
            }
            arr_44 [i_0] = (((arr_18 [i_0] [i_0]) ? var_13 : ((~(arr_18 [i_0] [i_0])))));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_35 += arr_30 [i_0] [i_0] [3] [i_0] [i_0];
            var_36 &= (((arr_29 [8] [i_12] [i_12] [i_12] [4]) ? (arr_21 [7]) : (((!(arr_10 [i_0] [i_12]))))));
            var_37 = max((!-124), (arr_22 [3] [3] [5] [i_12]));
            var_38 = arr_13 [i_0] [i_12] [i_12];
            var_39 = (min(var_39, var_10));
        }
        var_40 &= (((var_14 ? var_12 : var_7)));
        var_41 = (min(var_41, ((min(var_16, -94)))));
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                {
                    arr_53 [i_0] [i_14] [i_13] [i_14] = max(var_15, (arr_41 [i_0] [i_0] [i_14]));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 9;i_16 += 1)
                        {
                            {
                                var_42 = (max(var_42, ((max(((min((arr_8 [i_13 - 1] [i_13 - 1]), (arr_8 [i_13 - 1] [i_13 - 1])))), (((arr_8 [i_13 - 1] [i_13 - 1]) ? -30883 : (arr_8 [i_13 - 1] [i_13 - 1]))))))));
                                var_43 = -20804;
                                var_44 = var_15;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_17 = 2; i_17 < 17;i_17 += 1)
    {
        arr_61 [16] [i_17] = var_13;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 19;i_19 += 1)
            {
                {
                    arr_66 [i_17 - 2] [i_19] [i_19] = arr_60 [i_17];
                    var_45 = ((!(arr_64 [i_19] [i_18] [i_19])));
                }
            }
        }
        var_46 += (((((-(arr_60 [i_17 + 1])))) ? var_4 : (((-29506 ^ -32759) ? ((var_15 ? var_12 : -1)) : 960))));

        for (int i_20 = 0; i_20 < 19;i_20 += 1)
        {
            arr_69 [i_20] [i_20] = ((((min(28837, (arr_63 [i_17 - 1] [i_17 - 1])))) ? (((arr_63 [i_17 - 1] [i_17 - 1]) ? var_13 : (arr_63 [i_17 - 2] [i_17 + 1]))) : (arr_63 [i_17 - 1] [i_17 + 2])));
            arr_70 [i_20] [i_20] = (((max(var_2, (arr_60 [i_17 + 1])))));
            var_47 -= ((-22889 ? 10797 : ((min(28994, 40)))));
            var_48 = arr_64 [i_20] [i_17 + 1] [i_20];
        }
        for (int i_21 = 4; i_21 < 18;i_21 += 1)
        {
            var_49 = (((((arr_60 [i_17 + 2]) ? (arr_60 [1]) : (arr_72 [i_17 + 1]))) <= var_15));
            arr_73 [i_17] [i_21] = (arr_71 [i_21 - 2] [i_17 + 2] [i_17]);
            var_50 = (min(var_50, ((((((4738 <= (~21294)))) | var_4)))));
        }
        arr_74 [i_17] [i_17] = (arr_65 [i_17 - 2] [i_17] [i_17] [i_17 + 1]);
    }
    var_51 = (min(var_51, -2));
    var_52 = (!-29157);
    #pragma endscop
}
