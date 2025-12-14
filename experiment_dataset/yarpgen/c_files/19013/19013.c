/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_10 = ((var_8 ? (arr_0 [i_0]) : (arr_1 [i_0])));
        var_11 += (arr_1 [i_0 - 1]);
        var_12 -= var_2;
        var_13 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_1] [i_1] = (arr_1 [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_14 = (((((arr_14 [i_1] [i_2] [i_1] [i_3] [i_4]) ? var_3 : (arr_0 [i_1]))) >> (var_2 + 26350)));
                        var_15 |= (((arr_16 [i_1]) ? (arr_16 [i_1]) : (arr_16 [i_3])));
                        var_16 += var_3;
                        var_17 *= ((~(arr_5 [i_1] [i_2])));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_18 += (arr_3 [i_1] [i_5]);
            var_19 = (arr_15 [i_1] [i_1] [i_5] [i_1] [i_5]);
            var_20 *= 14;
            arr_20 [i_1] [i_1] [0] = (arr_11 [i_1] [i_5] [i_5] [i_5]);
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_21 = -var_5;
            arr_23 [i_1] [i_6] = ((var_0 ? (arr_19 [i_1]) : (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                var_22 = ((!(arr_22 [i_7] [i_7])));

                for (int i_9 = 3; i_9 < 8;i_9 += 1)
                {
                    arr_32 [i_1] [i_1] [i_9] [i_8] [i_8] [i_9 - 3] = 11626;
                    arr_33 [i_9] [i_7] [i_7] = (((arr_11 [i_9] [i_8] [i_7] [i_1]) ? ((var_1 ? var_0 : var_9)) : 25815));
                }

                for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 3; i_11 < 9;i_11 += 1)
                    {
                        var_23 = (((arr_8 [i_11 - 1]) ? (arr_8 [i_11 - 2]) : (arr_8 [i_11 + 1])));
                        arr_39 [5] = ((~(arr_37 [i_11] [i_7] [i_8] [i_10] [i_10] [i_11] [i_11 - 3])));
                        var_24 = var_4;
                        var_25 += (((arr_37 [i_1] [i_1] [i_8] [i_10] [i_1] [i_11 - 2] [3]) && var_4));
                    }
                    var_26 += var_0;
                    var_27 = (min(var_27, -102));
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                    {
                        var_28 ^= (arr_37 [i_1] [i_7] [i_8] [i_8] [i_13] [i_12] [i_1]);
                        var_29 = ((34189 - (arr_7 [i_13] [i_7])));
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                    {
                        arr_48 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_3 ? var_0 : (((arr_1 [i_7]) ? var_1 : 9223372036854775785))));
                        var_30 -= var_1;
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        var_31 = (min(var_31, var_5));
                        arr_53 [i_15] [i_15] = var_2;
                        var_32 = (((arr_50 [i_1] [i_7] [i_15] [i_12] [i_15]) ? (arr_50 [i_1] [5] [i_1] [i_1] [i_1]) : (arr_50 [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    arr_54 [i_1] [i_1] [i_7] [i_8] [3] = var_2;
                    var_33 = (min(var_33, (arr_14 [6] [i_7] [i_8] [i_12] [i_12])));
                    var_34 -= var_6;
                }
                for (int i_16 = 1; i_16 < 8;i_16 += 1)
                {
                    var_35 = (arr_6 [i_16 + 2]);
                    var_36 = (max(var_36, (arr_35 [i_1] [i_7] [i_8] [i_8] [i_16] [i_16])));
                }
            }
            arr_57 [i_1] [i_7] [i_1] = (var_6 - var_9);
        }

        for (int i_17 = 0; i_17 < 10;i_17 += 1) /* same iter space */
        {
            var_37 *= (((8053063680 - 127) % 244));
            arr_61 [i_1] [i_1] [i_17] = ((-651155312 ? (arr_11 [i_1] [i_1] [i_17] [i_17]) : (arr_11 [i_1] [i_17] [i_17] [i_17])));
            arr_62 [i_1] [i_17] = ((((arr_26 [i_1] [i_1] [i_17]) ? (arr_28 [i_17] [7]) : var_0)));
            var_38 = (arr_50 [i_17] [i_1] [i_17] [i_1] [i_1]);
        }
        for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 9;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 7;i_21 += 1)
                    {
                        {
                            arr_76 [i_1] [i_18] [i_19] [i_20 + 1] [i_21] = var_6;
                            var_39 = var_3;
                            arr_77 [i_1] [i_18] [i_19] = var_4;
                            var_40 = (((arr_49 [i_20 + 1] [i_18] [i_19] [i_21 + 3] [i_21 + 1] [i_19] [i_18]) ? (arr_71 [i_20 + 1] [i_21] [i_19] [i_21 - 1]) : (arr_38 [i_20 - 2] [i_18] [i_19] [i_21 - 2] [i_21])));
                            arr_78 [1] [i_21] [i_20] [i_19] [i_18] [i_1] = ((!(arr_74 [i_1] [i_18] [i_20 - 1] [i_20] [i_21])));
                        }
                    }
                }
            }
            var_41 = ((var_7 ? var_8 : 34));
        }
        for (int i_22 = 0; i_22 < 10;i_22 += 1)
        {
            var_42 = (((((var_6 ? var_1 : 34))) ? ((var_5 % (arr_80 [i_1] [i_22]))) : (65527 || var_8)));
            arr_81 [i_1] [i_1] [i_1] &= var_6;
            var_43 ^= (((arr_47 [i_1] [i_1] [i_22] [i_22] [i_22] [i_22] [i_1]) / (~34)));
        }
        var_44 -= (((arr_26 [i_1] [i_1] [i_1]) ? var_4 : (arr_26 [i_1] [i_1] [i_1])));
        arr_82 [i_1] [i_1] = ((-(((26 > (arr_11 [i_1] [i_1] [i_1] [i_1]))))));
        var_45 = 7;
    }
    for (int i_23 = 0; i_23 < 11;i_23 += 1) /* same iter space */
    {
        var_46 -= (max(var_1, ((-(arr_83 [i_23] [i_23])))));
        var_47 -= (~var_6);
        arr_85 [i_23] = ((-(arr_83 [i_23] [i_23])));
    }
    for (int i_24 = 0; i_24 < 11;i_24 += 1) /* same iter space */
    {
        arr_90 [2] [i_24] = (((max((arr_87 [i_24]), (((arr_84 [i_24]) ? var_4 : var_5)))) << ((((var_5 % (((arr_0 [i_24]) ? var_7 : var_7)))) - 18))));
        var_48 = (min(var_48, (((!(arr_83 [i_24] [i_24]))))));
        var_49 = (min(var_49, var_2));
        arr_91 [i_24] = (arr_87 [i_24]);
        var_50 = ((((var_4 || (arr_2 [i_24]))) ? (max((arr_2 [i_24]), (arr_2 [i_24]))) : ((~(arr_2 [i_24])))));
    }
    /* LoopNest 2 */
    for (int i_25 = 3; i_25 < 18;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 19;i_26 += 1)
        {
            {

                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    var_51 += (((!(arr_100 [i_25 - 1] [i_25 + 1]))) && (((var_4 ? (arr_100 [i_25 - 1] [i_25 + 1]) : (arr_95 [i_25 - 1] [i_25 + 1] [i_25 - 1])))));
                    var_52 = (((((arr_95 [i_25] [i_26] [i_25]) ? var_3 : (arr_0 [i_25 - 3])))));

                    /* vectorizable */
                    for (int i_28 = 0; i_28 < 19;i_28 += 1) /* same iter space */
                    {
                        var_53 = (min(var_53, ((((arr_100 [2] [i_25 + 1]) ? var_8 : var_3)))));
                        arr_104 [i_27] [i_26] [i_27] [i_28] [i_27] [i_27] = ((~(arr_94 [i_25 - 1])));
                        arr_105 [i_25] [i_26] [i_27] [i_28] = (arr_101 [i_25 - 2] [i_27] [i_25 - 2]);
                        var_54 ^= ((~(1 - var_2)));
                    }
                    for (int i_29 = 0; i_29 < 19;i_29 += 1) /* same iter space */
                    {
                        var_55 += 229;
                        var_56 = (((((var_7 ? (((arr_102 [i_27]) ? var_8 : (arr_0 [i_27]))) : -94))) ? (((arr_2 [5]) << var_6)) : var_7));
                    }

                    for (int i_30 = 2; i_30 < 15;i_30 += 1) /* same iter space */
                    {
                        var_57 = arr_101 [i_25] [i_27] [i_27];
                        arr_110 [i_25] [i_27] [i_27] [i_30] = -var_3;
                    }
                    for (int i_31 = 2; i_31 < 15;i_31 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_32 = 0; i_32 < 19;i_32 += 1)
                        {
                            arr_117 [i_25] [i_26] [i_27] [i_27] [i_32] = (arr_102 [i_27]);
                            var_58 = ((((!(arr_116 [i_26] [i_27] [i_31 + 1] [9]))) && (((var_3 ? var_0 : var_7)))));
                            var_59 = ((var_4 + (arr_100 [i_25 - 2] [i_26])));
                            var_60 = (arr_1 [i_31 - 1]);
                        }
                        var_61 = max((arr_92 [i_25]), ((((((arr_97 [i_25 - 2] [i_26] [i_27] [i_31 - 2]) ? var_7 : (arr_108 [i_25])))) ? var_5 : var_9)));
                    }
                }
                var_62 -= ((((min(118, 65524))) ? (max((arr_115 [i_26] [i_26] [i_26] [3] [i_25] [i_25]), ((min(var_4, var_2))))) : (((min((arr_100 [i_26] [i_26]), (arr_109 [i_25] [i_25 + 1] [i_25 - 1] [i_25])))))));
            }
        }
    }
    #pragma endscop
}
