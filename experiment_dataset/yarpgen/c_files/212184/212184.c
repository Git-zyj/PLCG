/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = var_6;
            var_17 |= 78;
            arr_5 [i_0] [i_0] [i_0] = (!var_9);
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_2] [i_3] = (~var_8);
                arr_13 [i_3] = ((var_0 / var_3) ? var_11 : (arr_0 [i_0] [i_2]));
            }
            var_18 = ((var_13 / (((var_9 ? var_14 : var_10)))));

            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    var_19 *= (((arr_16 [i_0]) ? var_4 : -1211));
                    var_20 = (max(var_20, (arr_11 [i_0] [i_0] [i_0])));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, ((((arr_14 [i_4 + 2] [i_4] [i_5]) * var_8)))));
                        var_22 = var_6;
                        arr_26 [i_0] [i_2 - 1] [i_2] [i_6] [i_5] [i_6] = (arr_22 [i_6]);
                        var_23 = var_14;
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_4] [i_5] [i_7] [i_5] = (((3212301835 & -66) ? var_5 : (var_14 | var_15)));
                        var_24 *= ((78 ^ (~2682207108)));
                        arr_30 [i_0] [i_0] [i_4 - 1] [i_5] [i_7] = var_0;
                        var_25 = (((arr_22 [i_0]) + (var_5 % var_9)));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        var_26 *= var_9;
                        var_27 *= ((var_4 ? var_7 : (arr_17 [i_2] [i_2 - 1] [i_2])));
                        var_28 ^= var_16;
                        var_29 = 1612760187;
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        var_30 = ((-(389329584 | var_5)));
                        arr_35 [i_9] [i_4 + 2] [i_2] [i_0] = ((var_13 < (arr_2 [i_5] [i_5 + 1] [i_5])));
                        arr_36 [i_0] [i_0] [i_0] [i_0] [3] = (var_13 - var_1);
                        arr_37 [i_0] [i_0] [i_0] [i_0] [0] = (arr_6 [i_0] [i_0] [i_0]);
                    }
                    var_31 &= (arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] [i_0]);
                    arr_38 [i_0] [i_0] [i_0] [i_2] [i_0] [i_5] = ((var_12 ? (arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1]) : (arr_34 [i_5] [1] [i_5] [1] [i_5])));
                }
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    var_32 ^= 6516346881639403389;
                    arr_41 [i_0] [i_0] [i_4] [i_10] = (var_6 / -var_13);
                }
                arr_42 [i_4] [i_2 - 1] [i_0] [i_0] = var_12;
            }
        }
        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_33 = ((min(1515080464027469292, 0)));

            /* vectorizable */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                arr_49 [i_11] [i_11] [i_11] = (((arr_6 [i_0] [i_0] [i_0]) | var_7));
                arr_50 [i_11] [i_11] = ((var_12 ? var_0 : (arr_1 [i_11 - 1])));
                arr_51 [i_11] = 134217728;
                var_34 -= (((var_13 | var_12) & (arr_24 [i_0] [i_0] [i_11 - 1] [i_12] [i_12] [i_0] [i_12])));
                var_35 = (arr_15 [i_0] [9] [9]);
            }
            for (int i_13 = 4; i_13 < 17;i_13 += 1)
            {
                var_36 = (arr_27 [16] [i_13] [i_11] [i_11] [16] [i_0] [16]);
                arr_54 [i_0] [i_11] = (((((min(254, -1151)))) - ((319065235 + (arr_40 [i_11] [i_11] [i_11 - 1])))));
                arr_55 [i_11] [i_11] [i_11 - 1] = var_11;

                for (int i_14 = 2; i_14 < 17;i_14 += 1)
                {
                    var_37 = (max(var_37, (((((+((var_10 ? (arr_18 [1] [i_11] [i_13] [i_14] [i_14]) : (arr_10 [i_0] [i_0]))))) - (((arr_56 [i_0] [i_11 - 1] [i_0] [i_14]) - 122)))))));

                    for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        arr_61 [i_0] [i_11] [i_0] [i_14] [i_15 - 1] = (arr_9 [i_11] [i_13] [i_15]);
                        var_38 *= ((!(((max(var_12, 1))))));
                    }
                    for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        var_39 *= (((~var_11) * ((var_12 % (min(var_2, var_9))))));
                        var_40 = (max(var_40, ((((((var_1 ? var_5 : (arr_17 [i_13] [i_13] [i_13 - 3])))) ? (min(var_4, var_15)) : (arr_11 [i_0] [i_0] [i_14]))))));
                        arr_64 [i_11] [i_11] [i_13] [i_14] [i_13] = (~1548982560);
                    }
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    arr_69 [i_0] [i_11] [i_13] [i_17] [i_11] = (((arr_45 [i_11] [i_11 - 1] [i_11]) + (arr_45 [i_11] [i_11 - 1] [i_11])));
                    var_41 = (-1151 & 43831);
                    var_42 = (!var_11);
                }
                for (int i_18 = 4; i_18 < 16;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
                    {
                        var_43 = min((((arr_46 [i_11] [i_13 - 3] [i_11 - 1] [i_11]) ? (~var_2) : var_13)), (~var_7));
                        var_44 = (min(var_44, ((max(((var_6 + (arr_9 [i_0] [i_11 - 1] [i_0]))), (arr_11 [i_13 - 3] [i_13 - 4] [i_0]))))));
                    }
                    for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
                    {
                        var_45 = (arr_14 [i_11 - 1] [i_13] [i_13 - 1]);
                        var_46 = (min((min(-var_16, (min(1906330311, var_9)))), (arr_73 [i_0] [i_0] [14] [i_0] [i_0])));
                        var_47 ^= (max((arr_66 [i_13 - 2] [i_13 - 3] [i_13] [i_13] [i_13] [i_13]), ((var_8 ? (arr_66 [i_13 - 2] [i_13] [i_11] [14] [14] [14]) : 219))));
                    }
                    for (int i_21 = 1; i_21 < 16;i_21 += 1)
                    {
                        var_48 = var_10;
                        arr_82 [i_11] [i_11] [i_11] [5] [i_11] = (max(1, (var_11 + var_2)));
                        arr_83 [i_0] [i_0] [i_13 - 3] [i_11] [i_21] = -1153;
                    }
                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        var_49 *= (((arr_16 [i_18]) != (max(596684312, 1))));
                        var_50 = (min(((min((arr_10 [i_18 - 3] [i_11 - 1]), (arr_62 [i_13 - 2] [i_11])))), (var_16 + 7874240275164501526)));
                    }
                    arr_86 [i_11] = -var_7;
                }
            }
            for (int i_23 = 0; i_23 < 18;i_23 += 1)
            {
                arr_90 [i_11] [i_11] [i_11] = ((!((min((arr_53 [i_11 - 1] [i_11 - 1]), var_16)))));
                arr_91 [i_11] = (arr_77 [i_23] [i_11 - 1] [i_23] [i_23] [i_11 - 1] [i_11 - 1] [i_11 - 1]);

                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    arr_95 [i_11] [i_11] [i_23] [i_24] = (max(((min((max(0, 47976)), 1))), var_4));

                    for (int i_25 = 0; i_25 < 18;i_25 += 1)
                    {
                        arr_98 [i_24] [i_11] [i_11] [i_0] = ((min(var_3, (max((arr_27 [i_0] [i_11] [i_0] [i_23] [i_24] [i_25] [i_25]), var_13)))));
                        var_51 = (~var_1);
                        arr_99 [i_0] [i_11] [i_11] [i_11] [i_25] = (max(((min(3550, 1))), (var_3 - var_14)));
                    }
                    arr_100 [i_0] [i_11 - 1] [i_23] [i_11] = (!132);
                    var_52 = var_16;
                    var_53 = arr_85 [i_0] [i_0] [i_23] [i_23] [i_11];
                }
                /* vectorizable */
                for (int i_26 = 1; i_26 < 16;i_26 += 1)
                {
                    var_54 = (min(var_54, (((-975964344 & ((var_7 ? var_13 : var_13)))))));
                    arr_104 [i_0] [i_0] [i_0] [i_0] [i_11] = (-(4168949152 - var_12));
                    arr_105 [i_0] [i_0] [i_23] [i_0] [i_23] [i_0] &= 2008798317;
                }
                for (int i_27 = 0; i_27 < 18;i_27 += 1)
                {
                    var_55 ^= ((((max(var_5, (arr_16 [i_27])))) != ((var_8 ? var_6 : var_11))));
                    var_56 ^= 1612760187;
                }
            }
            for (int i_28 = 0; i_28 < 18;i_28 += 1)
            {

                /* vectorizable */
                for (int i_29 = 0; i_29 < 18;i_29 += 1)
                {
                    var_57 = ((-32372 ? (~var_3) : ((16591686173675809626 ? var_4 : var_3))));
                    arr_115 [i_0] [i_11] [i_11] = 5803438709228134300;
                }
                var_58 = -5947189001786142637;
            }
        }
        for (int i_30 = 1; i_30 < 1;i_30 += 1) /* same iter space */
        {
            var_59 = (max(var_59, ((((arr_62 [i_0] [i_0]) * (((arr_92 [i_30] [i_30 - 1] [i_30 - 1] [i_0]) ^ (var_13 ^ 1))))))));
            var_60 += (min(-14, ((((!(arr_92 [i_0] [i_0] [i_0] [i_0]))) ? ((~(arr_65 [i_0] [2] [i_0]))) : (-2147483647 - 1)))));
            arr_118 [i_30] [i_30] = (max(var_4, var_5));
            var_61 &= ((var_14 ? 57559 : (min(-var_4, var_5))));
            var_62 = (min((((arr_23 [i_0] [i_30] [i_0] [i_0] [i_0] [i_30]) ? (arr_23 [i_0] [i_0] [i_30] [i_30] [1] [i_30]) : 0)), (((-var_16 ? -32372 : (arr_65 [i_0] [i_30 - 1] [i_30]))))));
        }
        arr_119 [i_0] = var_16;
    }
    /* vectorizable */
    for (int i_31 = 0; i_31 < 17;i_31 += 1)
    {
        var_63 = var_16;
        var_64 *= (~var_6);
    }
    var_65 *= ((min((var_12 || var_8), (max(var_6, var_12)))));
    #pragma endscop
}
