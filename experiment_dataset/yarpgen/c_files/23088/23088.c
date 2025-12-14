/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max((max(var_3, (~var_2))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (var_6 + var_9);

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_22 = 1;
                    var_23 = ((((~(arr_1 [i_0]))) | ((max((arr_5 [i_0] [i_0]), var_0)))));
                    var_24 = (var_15 - 32767);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_25 += var_18;
                        var_26 = (((((var_2 ? 4153264367 : var_2))) ? ((((var_0 && (arr_4 [i_0] [i_1] [i_2]))))) : var_10));
                        var_27 = (!var_11);
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 14;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_28 = (-1 + 3125705701);
                            var_29 = (arr_8 [i_2] [i_4] [i_4 - 2] [i_5]);
                        }
                        var_30 = (!(~var_5));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        var_31 += ((((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? 17370802921033555699 : var_8))) ? ((9223372036854775807 ^ (arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2]))) : (arr_11 [i_6 - 1] [i_6 + 2] [i_6 + 1] [i_6 - 3])));
                        var_32 = (max(var_32, 4153264367));
                        var_33 = (arr_3 [i_0] [i_0] [i_0]);
                    }
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    var_34 = (!32765);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_35 = 3125705701;
                                var_36 = ((var_12 != (arr_10 [i_0] [i_0] [i_7] [i_0] [i_9] [i_7 - 1])));
                            }
                        }
                    }
                }
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    var_37 ^= (max(((var_4 & ((-32751 ? (arr_0 [i_1] [4]) : var_0)))), (((max((arr_23 [i_10]), (arr_17 [i_0] [i_0] [i_0] [i_0])))))));

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_38 = (!2);
                        var_39 = var_2;
                    }
                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_40 = (((1 >> (56 - 52))));
                            var_41 *= 67;
                            var_42 = (i_0 % 2 == zero) ? (((((var_6 ? (arr_16 [i_12] [i_1] [i_0] [i_12] [i_13]) : -27908)) << (((arr_1 [i_0]) - 1500613158))))) : (((((var_6 ? (arr_16 [i_12] [i_1] [i_0] [i_12] [i_13]) : -27908)) << (((((arr_1 [i_0]) + 1500613158)) + 427367131)))));
                            var_43 = ((((arr_15 [i_0] [i_1] [i_10] [i_1] [i_13]) != (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_44 = 27908;
                            var_45 = (min(var_45, ((((arr_10 [i_10] [i_10] [i_10] [i_14] [i_10] [i_10]) - (arr_10 [i_10] [i_10] [i_10] [i_14] [i_10] [i_10]))))));
                            var_46 = var_11;
                        }
                        var_47 = (arr_8 [i_12] [i_0] [i_0] [i_12]);
                        var_48 = (min(var_48, ((((((arr_33 [i_1] [i_1] [i_1] [i_1] [i_12] [i_1] [0]) ? 133 : (arr_27 [i_10] [i_10]))) << (((-76 + 102) - 14)))))));

                        for (int i_15 = 1; i_15 < 14;i_15 += 1)
                        {
                            var_49 = (arr_22 [i_10] [i_10] [i_10] [i_1] [i_0]);
                            var_50 = (arr_12 [i_0] [i_1] [i_10] [i_10] [i_15]);
                        }
                    }
                    var_51 = var_0;
                }
                var_52 *= ((((arr_2 [i_0] [i_0] [i_0]) && (arr_10 [i_0] [i_0] [i_1] [10] [i_0] [i_1]))));
            }
        }
    }
    var_53 = (max(var_53, ((((var_17 | var_17) ? -32782 : (((max(32755, var_6)) & var_13)))))));

    /* vectorizable */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_54 = (arr_43 [i_16] [i_16]);
        var_55 += (arr_23 [i_16]);
        var_56 = var_0;
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_57 = var_0;
        /* LoopNest 3 */
        for (int i_18 = 1; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 19;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    {
                        var_58 = arr_51 [i_20] [i_19 + 2] [i_20];
                        var_59 = (((arr_52 [i_19 + 3]) ? (arr_50 [i_18]) : 4294967295));
                    }
                }
            }
        }
        var_60 = (61440 | 205);

        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {

            for (int i_22 = 1; i_22 < 21;i_22 += 1)
            {
                var_61 = (((arr_52 [i_22 + 1]) | (arr_52 [i_22 + 1])));
                var_62 = var_13;
            }
            var_63 = (((((~(arr_54 [i_17] [i_17] [i_17] [i_17])))) ? 32763 : (((arr_48 [i_17] [i_21]) ? 24576 : 65519))));
        }
        for (int i_23 = 1; i_23 < 20;i_23 += 1)
        {
            var_64 = var_8;
            var_65 = ((!((((arr_48 [i_17] [i_17]) | var_3)))));
            var_66 = (((arr_57 [i_23 - 1]) ? 15125591205257799685 : 1));
            var_67 = ((!(~var_8)));
        }
        for (int i_24 = 2; i_24 < 18;i_24 += 1)
        {
            var_68 ^= 536868864;
            var_69 = (((arr_66 [i_24 + 2] [i_24 - 2] [i_24 + 1]) * (arr_66 [i_24 + 4] [i_24 + 4] [i_24 - 1])));
            var_70 = ((8689782195346910331 ? var_8 : (arr_63 [i_17])));

            for (int i_25 = 0; i_25 < 22;i_25 += 1)
            {

                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    var_71 |= (arr_55 [i_24] [8] [i_24] [i_24]);
                    var_72 *= 0;
                }
                var_73 = (((~-32752) - 18446744073709551615));
            }
        }
    }
    var_74 = (((((max(var_16, var_12)) + var_8)) << (var_0 - 61)));
    #pragma endscop
}
