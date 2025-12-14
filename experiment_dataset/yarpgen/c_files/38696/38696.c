/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 15;
        var_12 = (((arr_2 [i_0]) ? var_1 : (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_13 += (((((var_9 ? (arr_1 [i_1]) : var_7))) ? (arr_4 [i_0 - 1] [i_0 - 1]) : ((var_10 ? (arr_4 [i_0 - 1] [i_0]) : var_9))));
            arr_6 [i_0 - 1] [i_0 - 1] = var_9;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_0] [i_2] [i_2] &= var_7;
            var_14 = var_11;
            arr_10 [i_2] = var_3;
            var_15 ^= var_11;
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_16 &= 15;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_4 - 1] [6] [i_6 - 1] = arr_12 [i_6] [i_6] [i_6];
                            var_17 -= var_8;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, (((((((-32767 - 1) ? 1 : 235))) ? ((134217727 ? 252 : (arr_12 [i_0 - 1] [i_0 - 1] [i_0]))) : (((arr_13 [i_0] [i_0] [i_4]) ? (arr_21 [i_7] [i_5] [i_3] [i_0]) : var_6)))))));
                            var_19 = (((arr_8 [i_0]) ? var_4 : 4));
                            var_20 = (min(var_20, var_0));
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_0 - 1] [i_3] [i_4 - 1] [i_5] [i_8] = 44;
                            arr_27 [i_8] [i_0 - 1] [i_4] [i_0 - 1] [i_8] = (((min((arr_14 [i_4 - 1] [i_8] [i_4] [i_4 - 1]), (arr_14 [i_8] [i_5] [i_5] [i_4 - 1]))) ? ((var_9 ? (arr_14 [i_5] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_14 [i_8] [i_8] [i_8] [i_4 - 1]))) : (((arr_14 [i_8] [1] [i_8] [i_4 - 1]) ? var_8 : (arr_14 [i_4 - 1] [0] [i_4 - 1] [i_4 - 1])))));
                            var_21 = (((arr_22 [i_8] [i_0] [i_3] [i_0]) ? (((arr_5 [i_3]) ? ((-63 ? 2274038931 : -125)) : (min(var_2, var_6)))) : (((arr_22 [i_5] [i_0] [i_3] [i_0]) ? 262128 : (((4 ? 0 : 56)))))));
                            arr_28 [i_0 - 1] [i_0 - 1] [i_8] [i_0 - 1] = ((((((((var_11 ? (arr_1 [i_0]) : var_10))) ? (((2047 ? (arr_16 [i_4] [i_4] [i_4] [i_4]) : (arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5])))) : var_1))) ? (arr_0 [i_0]) : ((max(-95, ((var_11 ? var_0 : (arr_15 [i_3]))))))));
                            var_22 = (min(var_11, 241));
                        }
                        arr_29 [i_0] [i_3] [i_4 - 1] [i_5] = ((((min(((min((arr_12 [i_4] [i_0] [i_0]), (arr_19 [i_3] [i_3])))), var_6))) ? ((((arr_23 [i_5]) ? ((18446744073709549555 ? 235 : 124)) : ((var_6 ? var_11 : var_0))))) : (arr_2 [i_5])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_23 = (min(var_23, (((-23438 ? 21 : 1)))));
                var_24 = ((var_2 ? var_11 : ((var_8 ? var_1 : var_6))));
                var_25 += ((var_2 ? var_9 : var_10));
                arr_38 [i_9] [i_9] [i_11] = var_1;

                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {

                    for (int i_13 = 3; i_13 < 22;i_13 += 1)
                    {
                        var_26 = (((((var_11 ? 0 : (arr_33 [i_9])))) ? (arr_43 [i_9] [i_10] [i_11] [i_10] [i_13]) : (((arr_44 [i_9] [i_9] [i_9] [i_9] [11] [i_9]) ? var_2 : var_4))));
                        var_27 += (((arr_44 [i_13 + 1] [i_10] [1] [i_10] [i_10] [i_10]) ? var_9 : (arr_44 [i_13 - 2] [i_9] [12] [i_13 - 3] [i_12] [i_9])));
                        var_28 = arr_32 [i_9] [i_12] [i_13 - 1];
                        var_29 -= (((arr_33 [i_9]) ? (arr_44 [21] [i_12] [i_12] [i_11] [21] [i_9]) : var_9));
                    }
                    arr_45 [i_9] [i_11] = ((var_5 ? (arr_35 [i_9] [i_11] [i_9]) : var_5));
                }
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
            {
                arr_49 [i_9] [i_9] [i_14] [i_10] |= ((arr_42 [i_9] [i_9] [i_10] [i_14]) ? (arr_41 [i_9] [i_10] [i_10] [i_14]) : var_11);
                var_30 = var_11;
                var_31 = (max(var_31, ((((arr_44 [i_9] [i_9] [i_10] [i_14] [i_14] [i_14]) ? var_5 : ((((arr_32 [i_14] [i_10] [16]) ? var_3 : var_3))))))));
                var_32 = (((((var_8 ? var_6 : (arr_33 [14])))) ? ((((arr_43 [6] [6] [6] [6] [i_14]) ? var_8 : var_4))) : (arr_35 [i_9] [i_10] [i_9])));
            }
            for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
            {
                var_33 = ((var_5 ? ((var_9 ? var_7 : var_1)) : (((7168 ? 2274038931 : 11)))));

                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        var_34 = ((var_5 ? ((5 ? -64 : 51752)) : ((var_6 ? (arr_53 [i_15]) : var_10))));
                        var_35 ^= (((((var_2 ? -21 : (arr_35 [i_16] [i_16] [i_15])))) ? (((arr_42 [i_9] [i_15] [i_15] [i_17]) ? var_6 : var_6)) : ((var_1 ? (arr_53 [18]) : var_4))));
                        arr_58 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = (((arr_46 [i_9] [i_10] [i_10] [i_16]) ? (arr_46 [i_9] [i_10] [i_15] [i_16]) : 8));
                    }
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        arr_62 [i_9] [i_15] [i_15] = var_3;
                        arr_63 [i_9] [i_9] [i_15] [i_9] = (((((var_4 ? var_2 : 1))) ? ((var_4 ? var_6 : (arr_57 [i_9] [i_10] [i_15] [i_9] [i_9] [i_15]))) : var_6));
                        var_36 = (arr_35 [i_9] [i_10] [i_9]);
                        var_37 = var_3;
                        var_38 += 29;
                    }
                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        arr_68 [i_19] [i_19] [i_15] [i_15] [i_10] [i_19] [i_9] |= var_7;
                        arr_69 [i_9] [i_15] [i_15] [i_16] [i_19] = (arr_47 [i_9] [i_9] [16] [i_19]);
                    }
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        var_39 = (((((var_11 ? var_4 : (arr_61 [i_16] [i_15] [i_10] [i_9])))) ? (((arr_51 [i_9] [i_9] [i_9] [i_20]) ? (arr_50 [i_15] [i_16] [1] [i_15]) : (arr_70 [i_9] [i_9] [i_15] [i_16]))) : (((arr_56 [i_9] [i_9] [i_9] [i_16] [i_9] [i_16] [i_20]) ? var_10 : var_6))));
                        var_40 = (min(var_40, (arr_35 [i_9] [20] [i_9])));
                        var_41 = var_5;
                        var_42 = (min(var_42, (((var_0 ? var_5 : (arr_60 [21] [i_15] [i_15] [i_20]))))));
                        var_43 = (max(var_43, (arr_52 [i_9] [i_10] [i_15] [i_9])));
                    }
                    var_44 += (arr_70 [i_9] [i_10] [i_15] [i_16]);
                }

                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    arr_74 [i_15] [i_15] [i_15] = var_8;
                    var_45 = (min(var_45, ((((arr_66 [i_9]) ? ((var_9 ? 2370372519355412340 : var_4)) : (arr_46 [i_9] [i_10] [i_10] [i_21]))))));
                }
            }
            var_46 += (arr_43 [i_9] [i_9] [i_10] [i_10] [i_10]);
        }
        for (int i_22 = 0; i_22 < 23;i_22 += 1)
        {
            arr_77 [i_9] [i_9] [i_9] &= (arr_73 [i_9] [i_9] [i_22] [i_22]);
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 23;i_24 += 1)
                {
                    {

                        for (int i_25 = 0; i_25 < 23;i_25 += 1)
                        {
                            var_47 = var_4;
                            var_48 = (((((arr_37 [i_9] [11] [i_9]) ? (arr_87 [i_22]) : var_10))) ? var_1 : (arr_40 [i_9] [i_9] [i_9] [i_9] [i_9]));
                        }

                        for (int i_26 = 0; i_26 < 23;i_26 += 1)
                        {
                            var_49 = ((16777215 ? (((var_0 ? var_8 : (arr_67 [i_26] [i_23] [i_23] [i_22] [i_9])))) : var_2));
                            var_50 = (min(var_50, ((((arr_57 [i_9] [i_26] [i_9] [4] [i_22] [i_9]) ? var_7 : var_7)))));
                        }
                        var_51 = (arr_83 [i_24] [i_9]);
                    }
                }
            }
        }
        arr_91 [i_9] = (arr_43 [1] [1] [1] [i_9] [i_9]);
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 14;i_27 += 1)
    {
        /* LoopNest 2 */
        for (int i_28 = 0; i_28 < 14;i_28 += 1)
        {
            for (int i_29 = 3; i_29 < 12;i_29 += 1)
            {
                {
                    var_52 *= (((arr_11 [i_27] [i_29]) ? (arr_11 [i_27] [i_29 - 1]) : -115));
                    arr_99 [i_27] [i_27] [i_27] [i_27] = var_1;
                }
            }
        }
        arr_100 [i_27] = ((arr_30 [i_27] [i_27]) ? var_0 : ((var_2 ? var_3 : var_0)));
        arr_101 [i_27] |= (((arr_54 [i_27] [i_27] [i_27] [i_27] [i_27]) ? var_4 : ((18446744073709549569 ? (arr_70 [0] [i_27] [0] [0]) : var_6))));
        /* LoopNest 2 */
        for (int i_30 = 0; i_30 < 14;i_30 += 1)
        {
            for (int i_31 = 3; i_31 < 13;i_31 += 1)
            {
                {
                    arr_108 [i_27] [i_30] [i_27] [i_27] = var_7;
                    arr_109 [i_30] [i_30] [i_30] [i_30] = (arr_85 [i_27] [i_27] [i_30] [i_31 - 1]);
                    arr_110 [i_30] [i_30] = (((((245 ? 11 : 8))) ? (arr_75 [i_31 - 1] [i_31 - 1]) : (arr_94 [i_31 - 3])));
                    var_53 *= var_1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_32 = 0; i_32 < 24;i_32 += 1)
    {
        for (int i_33 = 0; i_33 < 1;i_33 += 1)
        {
            {
                arr_116 [i_33] [i_32] = (arr_111 [i_32] [i_32]);
                arr_117 [i_33] [i_33] [i_33] = var_1;
            }
        }
    }
    var_54 = (max(var_54, (((var_2 ? var_6 : var_0)))));
    var_55 = var_9;
    #pragma endscop
}
