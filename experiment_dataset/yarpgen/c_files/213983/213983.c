/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] [i_2] = 1;
                    arr_8 [i_2] [i_1] = (((((((-108 ? 17668197586036827908 : var_7))) ? 87 : 42)) == -574463340));
                }
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [5] [5] [5] [i_4] = ((((var_10 <= (((arr_3 [i_0]) ? var_10 : var_12)))) ? (arr_0 [i_1]) : ((var_1 << (arr_12 [i_0] [i_3] [i_3 + 2])))));
                        arr_16 [i_4] [i_3 + 3] [i_4] [i_1] [i_0] = ((~(min(-108, (min(var_10, (arr_1 [i_0] [i_1])))))));
                    }
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        var_13 = (((((((var_6 ? var_8 : -574463356))) * (6662472103638678377 << var_10))) * var_4));
                        var_14 = ((+(((var_8 >= var_9) ? var_2 : -1))));
                        arr_19 [i_0] = (min(var_1, (arr_5 [i_1 - 1] [i_3 + 1] [i_5 + 2])));
                        var_15 = var_1;
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        var_16 = (((arr_6 [i_0] [6]) ? var_10 : (arr_11 [i_6] [i_1])));
                        var_17 = (max(var_17, (((230 ? var_5 : (arr_10 [i_1 - 1] [i_3 + 3] [i_6 + 2]))))));
                        arr_22 [i_1] [i_6] [i_3] = (!var_4);
                    }
                    var_18 = ((var_10 ? (min((~var_5), (var_3 & var_0))) : ((min(var_10, ((min(1, 167))))))));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_19 = (min(((max(((-642153831423916379 ? var_2 : 62)), (var_8 || var_4)))), ((49 ? 13031079144189778815 : (arr_1 [i_0] [i_3 + 4])))));
                        arr_25 [i_0] [i_1] [7] [i_1] [i_3] = (max(((min((!-2481419650985003629), var_8))), ((var_5 ? (arr_0 [i_0]) : ((var_0 << (35090 - 35090)))))));
                        arr_26 [i_0] [i_1 + 1] [i_3] [i_7] = ((((((~(arr_10 [3] [i_1] [i_3]))) & 88)) == 175));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            arr_32 [i_9] [i_3] = ((var_9 ? (arr_20 [i_8] [i_9] [i_9 + 2] [4] [i_9 + 1]) : var_7));
                            arr_33 [i_0] [i_1] [i_3 + 2] [i_8] [i_9] [i_8] = (((arr_14 [i_9 + 1] [i_3 - 1] [i_1 - 1]) <= -var_1));
                            var_20 = (((arr_5 [i_3 - 2] [i_1 + 1] [i_9 + 1]) >= var_8));
                            var_21 = (max(var_21, (((arr_31 [i_3] [i_1] [i_3] [i_3] [i_8] [0]) ? ((var_5 ? var_6 : var_4)) : 2481419650985003650))));
                        }
                        for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_22 = var_0;
                            var_23 = (!var_9);
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_24 = ((var_5 ? ((18446744073709551609 << (139 - 85))) : var_9));
                            arr_39 [i_0] [i_0] [i_1] [i_3] [i_8] [i_11] = var_12;
                            var_25 = var_9;
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_26 = (var_1 && var_6);
                            var_27 = var_5;
                        }
                        var_28 -= var_2;
                    }

                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_29 = (max((min(88, (var_2 <= 1))), var_12));
                        var_30 = var_6;
                    }
                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        var_31 = ((((!(((var_2 ? var_1 : (arr_5 [i_0] [i_1 + 1] [i_0])))))) ? (var_12 || var_5) : (min((max(190, (arr_1 [i_14] [i_14]))), (arr_36 [i_1 + 1] [i_3 + 1] [13] [13] [i_3] [i_14 + 1] [i_14])))));
                        var_32 &= (((((((min(var_1, var_12)))) & (arr_18 [i_0] [i_14 + 1] [i_3] [i_1 + 1]))) <= ((((~6996626538001192680) ? (~var_5) : var_8)))));
                    }
                }
                var_33 = ((+(((arr_11 [i_0] [i_1]) ? var_12 : (min(var_4, var_5))))));
            }
        }
    }

    /* vectorizable */
    for (int i_15 = 1; i_15 < 14;i_15 += 1)
    {
        arr_50 [i_15] = (var_3 ? (arr_29 [i_15 - 1] [i_15 + 1] [i_15] [i_15 - 1] [i_15 + 1]) : var_2);
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                {
                    var_34 = var_4;
                    var_35 = (max(var_35, (var_6 || var_9)));

                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        arr_60 [i_15] [3] [i_16] [i_15] [i_18] = -139;
                        arr_61 [1] [i_15] [1] [i_15] = ((+((((-9223372036854775807 - 1) >= var_1)))));
                        var_36 = var_11;
                        arr_62 [3] [i_15] [i_16] [7] [i_17] [i_18] = (((((var_0 << (1 - 1)))) ? ((1366535985 ? var_4 : (arr_11 [i_16] [i_17]))) : var_0));
                        var_37 = ((var_8 & ((var_6 ? 195 : -97))));
                    }
                    for (int i_19 = 1; i_19 < 14;i_19 += 1)
                    {
                        var_38 = (((arr_11 [i_15 + 1] [i_15 + 1]) && var_3));
                        var_39 = (arr_45 [i_15] [i_15] [i_15] [1] [i_15]);
                        var_40 = (4 * var_8);
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_41 = (min(var_41, ((((arr_18 [i_16 - 1] [i_15] [i_15 - 1] [i_15]) ? var_1 : (arr_18 [i_16 - 1] [i_15 - 1] [i_15 - 1] [i_15]))))));
                        var_42 = 6662472103638678377;
                    }
                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        var_43 &= (((arr_14 [i_15 - 1] [i_15 + 1] [i_15]) ? -63 : (arr_55 [i_17])));
                        arr_72 [i_15] [i_16] [i_15] [i_16] = var_0;
                        var_44 = 6086472650558694817;
                        arr_73 [i_15] [i_17] [i_17] [6] |= 1;
                    }
                }
            }
        }
    }
    for (int i_22 = 0; i_22 < 10;i_22 += 1)
    {
        var_45 = ((((((!(arr_11 [i_22] [i_22])))) >= (var_3 * var_12))));
        var_46 &= (arr_35 [i_22] [i_22] [i_22] [6] [i_22] [i_22] [i_22]);
    }
    for (int i_23 = 3; i_23 < 21;i_23 += 1)
    {
        var_47 *= (((+(((arr_79 [i_23] [i_23 - 1]) ? (arr_79 [i_23] [i_23]) : var_7)))));

        for (int i_24 = 0; i_24 < 24;i_24 += 1) /* same iter space */
        {
            var_48 = (min(var_48, (((((var_9 ^ (arr_77 [i_24]))) <= (var_1 & -21406))))));
            arr_83 [i_23] [i_23] = var_11;
            arr_84 [i_23] [i_24] [i_24] = ((1 >> (((min((((arr_79 [i_24] [i_23]) ? var_8 : var_0)), (((var_2 ? var_9 : var_5))))) + 95))));
        }
        for (int i_25 = 0; i_25 < 24;i_25 += 1) /* same iter space */
        {
            var_49 = (((!-1) ? ((1 ? -1787549342515370333 : 145378405)) : (arr_77 [i_23])));
            var_50 = (max((((!(!var_2)))), (arr_81 [i_23] [i_25] [i_25])));
            arr_88 [i_25] [13] = (arr_87 [i_23 + 2]);
        }
        var_51 = (min((max(-1, 2928431310)), (~-20080)));
    }
    #pragma endscop
}
