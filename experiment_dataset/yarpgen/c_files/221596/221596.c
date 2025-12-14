/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_17 |= (17633244018961523241 != var_9);
        var_18 = (~12995793368010712964);
        var_19 |= var_11;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_1] [i_2] [i_2] = ((var_3 ? (arr_0 [i_2]) : 1));
                        var_20 = var_8;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_21 = (min(var_21, ((((arr_5 [i_4]) ? (!var_15) : var_15)))));
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_1] &= var_1;
                        arr_16 [i_2] = ((var_7 ? var_6 : var_13));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_19 [i_2] [i_1] [i_1] = (((12995793368010712964 ? 0 : var_8)));
                        var_22 = (min(var_22, (((var_13 ? var_11 : 813500054748028374)))));
                        var_23 = ((60449 ? ((var_9 ? 813500054748028355 : var_12)) : var_3));
                        var_24 = (((-6718 + 2147483647) << (147 - 147)));
                        var_25 &= 4193;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_26 = 58608;
                            var_27 = ((147 ? 792406551 : 18));
                            arr_26 [i_0] [i_6] [i_2] [i_2] [1] [i_0] [i_0] = 66;
                        }
                        arr_27 [i_6] [i_2] [i_1] [i_1] [i_0] [i_0] &= (188 % var_5);
                    }
                    var_28 = ((var_8 ? (arr_0 [i_0]) : var_14));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_29 = var_8;
                                var_30 = ((var_4 ? -var_3 : ((((arr_2 [i_0]) && var_9)))));
                                var_31 = (min(var_31, (((~(arr_23 [i_0] [3] [i_2] [1]))))));
                            }
                        }
                    }
                }
            }
        }
        var_32 = (arr_14 [i_0] [i_0] [6] [i_0]);
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
    {
        arr_36 [i_10] [i_10] = (!((max((min(7649785367173430292, (arr_34 [i_10]))), 6757258922391491561))));
        var_33 = (min(var_33, ((min((arr_30 [i_10] [9]), (var_3 || -88))))));
        var_34 &= ((!((((((var_2 ? var_3 : var_5))) ? (~var_5) : var_4)))));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_35 *= 1;
        var_36 *= (((var_5 / var_0) && ((((((1439845923789967116 ? var_2 : var_14))) ? (!var_4) : (arr_37 [i_11] [i_11]))))));
        var_37 = (min(var_37, (max((arr_37 [i_11] [i_11]), 25604))));

        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            arr_42 [1] [1] [i_11] = (((min(845508580, var_1))));
            var_38 = 5450950705698838667;

            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                arr_46 [i_13] = (((min(((min(var_12, 3405700258))), ((var_7 ? var_9 : (arr_45 [i_11] [i_11] [i_11] [i_11]))))) > 2603822896966429445));
                var_39 = (max(var_39, (((((min((-28746 & var_12), (~5450950705698838663)))) ? (arr_43 [i_11] [2] [i_13]) : var_1)))));
            }
            var_40 = 6038;
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            arr_49 [3] [i_11] [6] = (max(((min(var_11, var_0))), -var_2));
            var_41 = (min(var_41, (((((!((max((arr_45 [i_11] [i_11] [i_11] [i_14]), (arr_39 [i_11] [i_11] [i_14])))))) ? 21059 : ((var_0 ^ ((var_13 ? var_7 : var_13)))))))));
            arr_50 [i_11] [i_14] = 3350016861524654030;

            /* vectorizable */
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                arr_55 [i_11] [i_15] = (((arr_48 [11] [i_14] [i_15]) == 31760));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            var_42 -= var_4;
                            var_43 -= ((var_13 ? var_4 : 24825));
                            arr_60 [i_11] [i_11] [i_14] [i_11] [6] [i_16] [i_17] &= var_15;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        {
                            var_44 = ((0 ? var_11 : (arr_39 [i_18] [i_14] [i_11])));
                            var_45 = 13794977336516121045;
                        }
                    }
                }
                arr_67 [i_11] [i_11] [i_11] [i_15] = ((-28754 ? 168 : (-9223372036854775807 - 1)));
                var_46 = (min(var_46, (((var_6 ? (arr_38 [i_11] [i_14]) : 4254)))));
            }
            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {
                var_47 = ((((max((arr_56 [i_11]), (arr_53 [i_11] [i_14] [i_14])))) > (var_0 & var_13)));
                var_48 = (min(var_48, var_1));
                arr_70 [i_11] [i_11] [i_11] = ((var_5 ? ((var_1 ? (min(0, 18135536845762561762)) : ((min(-1307076845566352541, var_15))))) : ((((~-38) ? (arr_61 [i_20] [i_14] [i_11] [i_11]) : (((arr_63 [i_11]) ? (arr_38 [i_11] [i_20]) : -17020)))))));
            }
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            var_49 = (max(var_49, (((var_5 == ((var_11 ? var_10 : 87)))))));
            var_50 = (max(var_50, (((!(~-117))))));
        }
    }
    #pragma endscop
}
