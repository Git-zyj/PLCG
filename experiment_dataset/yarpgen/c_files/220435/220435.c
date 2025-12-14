/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((0 ? var_4 : ((var_11 ? ((2559843160930592201 ? 1048574 : 1)) : var_3))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 = ((~((1 ? 1 : 22166))));
            var_22 = ((((min(0, (arr_1 [i_0] [i_0])))) ? var_13 : ((var_2 ? (((arr_4 [24] [24] [24]) * (arr_3 [i_1]))) : (min(var_5, (arr_3 [i_0])))))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_23 = (arr_6 [1]);
                        var_24 = var_12;
                        var_25 = var_4;
                    }
                    for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_26 = (((arr_4 [i_1] [i_1] [i_5 + 1]) ? 3262 : var_1));
                        var_27 = ((!(arr_10 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])));
                        var_28 = ((!(arr_4 [i_3] [i_2 - 1] [i_0])));
                    }
                    for (int i_6 = 1; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_29 = (arr_15 [21] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        var_30 ^= (((arr_8 [i_0] [i_1]) ? (arr_13 [i_6] [i_2] [i_1] [i_0]) : -10062));
                        var_31 = (223 >= var_1);
                    }
                    for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_32 = var_17;
                        var_33 = (arr_6 [8]);
                    }
                    var_34 = (((arr_21 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2]) - (arr_10 [i_0] [i_2 - 1] [i_2] [i_3])));
                    var_35 = ((188 ? 1 : 116));
                    var_36 = var_10;
                }
                var_37 = ((((arr_3 [i_2 - 1]) ? 178 : (arr_3 [i_2 - 1]))));
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                var_38 = (-17499 & 289967973);

                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_39 = (-17503 <= (((arr_11 [i_8] [i_8] [i_0] [i_1] [i_0]) * ((((!(arr_4 [i_1] [i_1] [i_9]))))))));
                    var_40 = (((((((((arr_3 [i_0]) ? 18446744073709551596 : (arr_16 [i_9] [2] [i_8] [2] [2] [2] [i_0])))) ? (((min(255, 1)))) : (min(9515677504062685942, 31))))) ? (arr_12 [4] [i_9]) : (((((~var_17) + 2147483647)) >> (var_19 - 133)))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        var_41 = (min(var_41, (((!((((arr_7 [i_0] [i_0] [8] [0]) ? 49981 : 4004999322))))))));
                        var_42 = (((arr_31 [i_0] [i_1] [1] [i_9] [i_10]) - (arr_16 [i_10] [i_9] [i_9] [5] [i_8] [i_1] [5])));
                        var_43 = (min(var_43, var_2));
                        var_44 = (min(var_44, var_15));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                    {
                        var_45 = (((((arr_17 [9] [i_9] [i_8] [i_0] [i_0]) * (!var_8))) < ((3773865286961364980 ? 46697 : 0))));
                        var_46 = ((!((((((arr_6 [i_0]) ? (arr_2 [i_0]) : (arr_6 [i_11]))) - (arr_3 [i_9]))))));
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                    {
                        var_47 = min(var_16, ((min(227, 24384))));
                        var_48 = (min(173, (min(((-5875360447909123104 ? 22166 : 61289)), (1287219199 < 1)))));
                        var_49 = (arr_17 [i_0] [0] [i_8] [i_9] [i_12]);
                        var_50 = (min(var_50, (((17360272324632065387 ? 4963192302168094619 : 16643233071912967327)))));
                    }
                }
                var_51 = (((((arr_30 [i_8] [i_1] [i_8] [i_8] [i_1] [i_1] [i_8]) ? 102 : (arr_30 [i_0] [i_1] [i_8] [i_0] [i_0] [i_1] [i_8])))) ? (5649345688748760657 <= 289967981) : ((~(arr_30 [1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                var_52 ^= (!-11399);
                var_53 = var_12;
            }
            var_54 = (arr_10 [5] [i_1] [5] [i_0]);
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                var_55 = (((((!(arr_12 [i_13] [0])))) <= (!var_1)));
                var_56 = 289968004;
                var_57 = ((!(arr_21 [i_0] [i_13] [i_14] [i_14] [i_0] [i_0] [i_14])));
                var_58 = (((arr_15 [24] [i_0] [i_13] [i_13] [i_0] [i_0]) != (arr_15 [i_0] [i_13] [i_13] [i_13] [i_14] [i_14])));
                var_59 = (((arr_23 [i_13]) ? (arr_7 [i_14] [16] [i_0] [i_0]) : var_13));
            }
            for (int i_15 = 1; i_15 < 1;i_15 += 1)
            {
                var_60 = (min(var_60, (!var_6)));
                var_61 = var_14;
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        {
                            var_62 = (arr_32 [3] [0] [15] [i_15 - 1] [i_16] [i_17] [i_17]);
                            var_63 = (((-(arr_28 [i_15 - 1] [i_15] [6] [i_16]))));
                            var_64 += (min(27185, (arr_30 [i_0] [5] [i_15] [i_13] [i_13] [i_0] [1])));
                            var_65 = (((min((arr_7 [i_13] [i_0] [i_13] [i_0]), var_1)) + var_5));
                        }
                    }
                }
            }
            var_66 ^= (arr_45 [i_0] [i_0] [i_13] [4]);
        }
        var_67 = (((27151 + 8931066569646865661) + 1));
    }
    var_68 = var_19;
    var_69 = min((32747 + 176), ((721698447 ? -39 : ((min(-46, var_4))))));

    /* vectorizable */
    for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
    {
        var_70 = (arr_25 [i_18] [4] [i_18]);
        var_71 = (var_4 / -9223372036854775798);
    }
    for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
    {
        var_72 += (min(207442454, 30));
        var_73 = (((~210) ? 4800 : 88));
    }
    for (int i_20 = 0; i_20 < 15;i_20 += 1) /* same iter space */
    {
        var_74 = (-5875360447909123104 - var_16);
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 15;i_21 += 1)
        {
            for (int i_22 = 3; i_22 < 14;i_22 += 1)
            {
                {
                    var_75 = (min(1, (((!(arr_47 [i_20] [1] [i_20] [i_20] [4] [i_20]))))));
                    var_76 |= (var_16 <= -52);
                    var_77 = (arr_0 [i_20]);
                }
            }
        }
        var_78 = (((arr_59 [2]) >> (((((((arr_9 [i_20] [i_20]) ? var_1 : -23121)) ^ ((var_7 ? -16562 : 32722)))) + 986407305))));
        var_79 = var_1;
    }
    #pragma endscop
}
