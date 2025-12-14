/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 = (0 || 1508136504);
        var_20 = (((((max(var_9, (arr_0 [i_0] [i_0]))) ? (((min(42, -114)))) : ((20 ? 441673456 : (arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 = (((((arr_2 [i_1] [i_1]) <= (arr_1 [1]))) ? 3493869891 : 0));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_22 = (min(((((arr_2 [i_3] [i_2 - 2]) ? var_5 : (arr_2 [i_1] [i_2 + 1])))), (((arr_2 [i_1] [i_2 - 1]) ? var_16 : (arr_0 [i_2 - 2] [i_2 - 1])))));

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_23 &= 1;
                        var_24 = var_3;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_16 [i_1] [i_1] [9] [i_1] [i_1] [i_1] = ((((max((min((arr_3 [i_3]), var_16)), (min(var_14, var_8))))) ? 0 : (max(var_0, (26 + 192)))));
                        var_25 *= ((((arr_4 [i_2 - 2] [i_2 + 1]) ? var_2 : (arr_4 [i_2 + 1] [i_2 - 1]))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_26 = ((((((arr_10 [i_1] [i_1] [i_7]) ? (arr_10 [i_1] [i_6] [i_7]) : (arr_9 [i_1] [i_6] [i_7] [i_8])))) ? ((-(arr_22 [i_8] [1] [i_8] [7]))) : (arr_9 [i_8] [i_7] [i_6] [i_1])));
                        var_27 = (max((((((-122 ? var_6 : 127))) ? ((0 ? -3985587943111696892 : 18446744073709551615)) : var_5)), 3746192165));
                        var_28 = (((arr_17 [i_8]) ? var_3 : (arr_17 [10])));
                        var_29 = (((((arr_12 [i_7] [i_8] [i_7] [3] [i_1]) ? var_13 : (arr_12 [i_1] [i_1] [i_7] [i_7] [i_8]))) * (((-123 & 1) ^ (arr_10 [i_1] [i_7] [i_7])))));
                        var_30 = ((-((max(224, 0)))));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_31 = var_6;
        arr_28 [i_9] = (max(var_3, (arr_27 [i_9])));
        arr_29 [i_9] [4] &= ((((((arr_26 [i_9] [i_9]) ? var_13 : (arr_26 [i_9] [i_9])))) ? ((((((arr_27 [i_9]) ^ 12171085937982610815))) ? (2681043317744298701 < 548775143) : (11774 == var_4))) : 1));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                {
                    var_32 = var_12;
                    var_33 = (arr_27 [i_10]);
                    arr_35 [i_9] [i_10] [i_11] = ((127 ? 1 : -124));
                }
            }
        }
        arr_36 [i_9] [i_9] = ((((-(var_11 != var_9))) >= var_3));
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_34 = ((((230 ? 3746192163 : 2046922480)) % (((var_2 ? (arr_34 [i_12] [i_12]) : 127)))));
        var_35 = (arr_27 [i_12]);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 16;i_14 += 1)
            {
                {
                    var_36 = 25;
                    arr_45 [i_13] |= (-124 ? 548775131 : (((((227 ? var_13 : 21))) ? (((min((arr_37 [9]), var_17)))) : (min(29, (arr_26 [i_12] [i_13]))))));
                }
            }
        }
    }
    var_37 |= var_13;
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 0;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {
                {
                    var_38 &= var_10;
                    var_39 ^= (max(((-(max(var_15, var_8)))), ((((17 ? 31 : 7363254295198997875))))));

                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {

                        for (int i_19 = 1; i_19 < 1;i_19 += 1)
                        {
                            var_40 = (((21 >> 63) && (arr_57 [i_15] [i_16 + 1] [i_17 - 1] [i_17] [i_15])));
                            var_41 = (4294967290 ^ 215);
                            var_42 = (((((min((var_2 < var_4), (max(1, (arr_56 [i_15] [i_16] [1]))))))) - 261503921532799477));
                            arr_60 [i_16] [i_15] [i_18] [i_19] = var_14;
                        }
                        var_43 = ((((((var_13 || ((max((arr_38 [i_15]), -2))))))) & (max(var_3, (var_12 / 121)))));
                        var_44 = 211;
                        var_45 = (min(var_45, 12));
                    }
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        arr_63 [1] [i_15] [i_17 - 1] [i_15] = var_12;
                        var_46 = ((-(var_2 * var_9)));
                        var_47 = (max(var_47, ((max(((var_3 ? (((arr_62 [0] [i_17 + 1] [i_15] [0]) | var_13)) : (min(-258088491, var_11)))), (258088490 ^ -119))))));
                    }
                    var_48 += 4;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_21 = 3; i_21 < 23;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 24;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                {
                    var_49 -= (arr_66 [13]);
                    var_50 = (max((max(213578424, (((arr_65 [i_21]) ? 0 : 179)))), ((((((2068134212994110776 ? var_18 : var_7))) ? var_17 : 1)))));
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 24;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 24;i_25 += 1)
                        {
                            {
                                var_51 = (((var_1 ? var_1 : (((arr_70 [i_21]) ? -98 : var_1)))));
                                var_52 *= var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_53 = ((max(3300729528, 548775104)));
    #pragma endscop
}
