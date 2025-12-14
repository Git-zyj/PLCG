/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = ((~((var_0 ? 3601711087 : 2558214443))));
        arr_3 [i_0] = ((((((arr_2 [i_0]) ? var_0 : var_18))) ? (!693256209) : (arr_2 [i_0])));
        var_21 = ((var_4 ? 3601711089 : var_2));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_22 = 3601711086;
        var_23 = (~var_14);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_24 = ((((~(max(978837152927717895, (arr_2 [i_2]))))) & (~7676541490944998595)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        var_25 = (max(var_25, (((-(max(((-5878 ? (arr_6 [i_2]) : (arr_5 [i_2] [i_2]))), (var_3 + var_16))))))));
                        var_26 = (max(var_26, ((max((((((var_5 ? var_16 : var_17)) >> (139 & 2558214443)))), (max(var_16, (max((-9223372036854775807 - 1), 3601711102)))))))));
                    }
                    for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_6 - 3] [i_4] [i_4] [i_2] = (arr_9 [i_2] [i_3]);

                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            arr_24 [i_4] [i_4] [i_4] = 3601711088;
                            var_27 = 2295;
                        }
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            var_28 = 139;
                            var_29 = (((min((693256220 + 5858), (var_16 + var_5))) == (max(((max(var_15, 10))), ((var_11 >> (var_0 + 1548367067)))))));
                            var_30 = var_18;
                            var_31 = -5841;
                            var_32 = var_1;
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            var_33 *= var_4;
                            var_34 = (((1 ? -24021 : var_1)));
                            var_35 = (((var_4 + var_18) + -1766092303415679699));
                            var_36 = (arr_9 [i_3] [7]);
                        }
                    }
                    var_37 = (((max(-175, (((arr_1 [i_2] [i_4]) + var_10)))) + 1766092303415679699));

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        arr_32 [i_4] [i_3] [i_3] = var_6;
                        var_38 = var_12;
                        var_39 |= var_11;
                        var_40 = 2744;
                    }
                    for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            var_41 = ((3189 ? (((((max(var_5, 14526272574161250293))) ? var_8 : ((var_3 ? (arr_7 [i_11]) : 154))))) : (min(var_15, (arr_33 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4])))));
                            var_42 = (!18446744073709551615);
                        }
                        for (int i_13 = 2; i_13 < 12;i_13 += 1)
                        {
                            var_43 &= (~1125762467889152);
                            var_44 = ((((var_17 ? 0 : 25)) * (-1 / 17)));
                            arr_43 [i_2] [i_4] [i_2] [i_2] [i_2] [i_2] [i_2] = (((((arr_37 [i_4] [i_4]) + var_11)) + (((min((max(81, 4589)), 189))))));
                        }

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_45 = ((((((var_5 >> (-1439463148 + 1439463176))) + var_16)) == ((((arr_14 [i_14]) == (~var_16))))));
                            var_46 = (((((var_6 ? 52721 : 49322228))) == ((((arr_18 [i_2] [i_2] [i_4] [i_4] [i_4]) == (((!(arr_26 [i_4])))))))));
                            var_47 = ((var_0 + ((((117 == (arr_0 [i_3]))) ? 97 : (max((arr_21 [i_2] [i_4] [i_4] [i_14] [i_14]), var_11))))));
                            var_48 = ((((((min(1, (arr_10 [i_11] [i_11])))) + (arr_23 [i_4] [i_4]))) + (((((137 ? 2134404817028343251 : var_3)) == (arr_30 [i_2] [i_2] [6] [i_4] [i_2] [i_14]))))));
                        }
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            var_49 = ((var_5 ? 1 : (arr_21 [i_2] [i_4] [i_4] [i_4] [i_15])));
                            var_50 = 70;
                        }
                        for (int i_16 = 2; i_16 < 12;i_16 += 1) /* same iter space */
                        {
                            var_51 = (max((((!((!(arr_48 [i_4] [i_2])))))), (max((min(var_15, (arr_29 [i_16] [i_4] [i_4] [i_2]))), 76))));
                            arr_52 [i_2] [i_2] [i_3] [8] [i_3] [i_4] = 2558214443;
                            var_52 = (arr_50 [i_2] [9] [i_2] [i_2] [i_2] [4]);
                            var_53 = -59;
                        }
                        for (int i_17 = 2; i_17 < 12;i_17 += 1) /* same iter space */
                        {
                            var_54 = ((~((1 ? 2558214443 : 16923565644220278905))));
                            var_55 = (((arr_7 [1]) ? (((~(arr_1 [i_2] [i_2])))) : (min(127, -1766092303415679707))));
                            var_56 *= (((var_13 ^ var_12) + (arr_28 [12] [i_3] [i_11 - 1] [i_3] [i_17])));
                        }
                    }
                    for (int i_18 = 1; i_18 < 11;i_18 += 1) /* same iter space */
                    {
                        var_57 = -var_16;
                        arr_57 [i_4] [i_3] [i_4] [i_4] [i_3] [3] = var_5;
                        var_58 = ((-(((((!(arr_4 [i_2])))) + 1))));
                    }
                }
            }
        }
    }
    for (int i_19 = 4; i_19 < 10;i_19 += 1)
    {
        var_59 |= ((((((arr_29 [i_19] [i_19] [0] [i_19]) - (min(-785490800079743526, var_15))))) == (((arr_11 [i_19 - 2] [i_19 - 2] [i_19]) / var_14))));
        var_60 = (max(var_60, (((min(var_9, 31101))))));
        arr_61 [i_19] = ((min(240, ((max(1, (arr_2 [i_19])))))));
    }
    /* LoopNest 2 */
    for (int i_20 = 1; i_20 < 1;i_20 += 1)
    {
        for (int i_21 = 2; i_21 < 10;i_21 += 1)
        {
            {
                var_61 = var_0;
                arr_66 [i_20] [i_21] |= (max(var_0, ((((var_9 << (((arr_27 [i_20] [i_21] [4] [i_21] [i_21]) - 147632341)))) | ((0 ^ (arr_7 [i_21])))))));
                var_62 = (((((((~(arr_18 [i_20] [i_20] [i_20] [i_20] [1])))) | var_10)) + (((((max((arr_63 [i_20] [i_21]), (arr_22 [i_20] [i_20])))) ? (max((arr_7 [i_20]), var_14)) : var_2)))));
                var_63 = (-3120816000520221681 + (arr_64 [i_20] [i_21]));
            }
        }
    }
    #pragma endscop
}
