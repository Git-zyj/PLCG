/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = (min(((~((min(var_6, (arr_0 [i_0] [i_0])))))), ((((min(var_3, var_5))) & var_9))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (((((2251797666201600 ? (arr_2 [i_2 + 2] [i_1]) : ((var_0 ? (arr_5 [i_1] [i_2]) : var_9))))) ? ((min(-43, 14))) : -99));
                    arr_8 [i_1] [i_2] [i_2] = -109;
                    arr_9 [i_2] [i_1] [i_2] [i_1] = ((106 >> (119 - 114)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    {
                        var_11 += 219;
                        arr_21 [i_0] [i_0] [i_3] [i_5 + 1] &= (!var_3);
                        arr_22 [i_5] [i_5] [i_5] [i_0] = ((88 ? 146 : 49));
                        arr_23 [3] [i_3] [i_5] = (((min((max(80, (arr_16 [i_0] [i_0] [i_0]))), (arr_17 [i_0] [i_5 + 2] [i_5] [i_0]))) * ((max(((max(139, 212))), (var_4 & var_3))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_12 = (arr_25 [i_6]);

        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_13 |= ((((arr_29 [i_6] [i_6] [i_7] [i_7]) ? (arr_24 [i_7]) : (arr_28 [i_6] [i_7] [i_7]))));
                var_14 = (((((arr_27 [i_6] [i_7] [i_6]) != var_9)) && ((((arr_26 [i_6]) ? 109 : var_0)))));
                arr_30 [i_7] |= 64;
            }
            arr_31 [i_6] [i_6] = (((arr_26 [i_7]) || var_4));
            arr_32 [i_6] [i_7] [i_7] = (arr_27 [i_6] [i_6] [i_7]);
            var_15 = ((var_6 ? (arr_29 [i_6] [i_6] [i_7] [i_6]) : var_8));
            var_16 = (((arr_28 [i_6] [i_7] [i_7]) ? (arr_28 [i_6] [i_6] [i_7]) : (arr_28 [i_6] [i_6] [i_7])));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 3; i_10 < 13;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_17 = (max(var_17, 78));
                            arr_41 [i_6] [i_6] [i_9] [i_10] [3] [8] [i_12] = (i_10 % 2 == zero) ? ((((arr_40 [i_10]) << ((((arr_24 [i_6]) > var_3)))))) : ((((((arr_40 [i_10]) + 2147483647)) << ((((((arr_24 [i_6]) > var_3))) - 1)))));
                        }
                    }
                }
                arr_42 [i_6] [i_10] [i_10] = (((!var_7) ? var_4 : (!var_5)));
                arr_43 [i_10] [i_9] [i_9] = (~107);
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    var_18 -= (~((var_5 & (arr_44 [i_6] [i_9] [i_9]))));
                    arr_50 [i_6] [i_9] [i_14] [i_14] [i_9] = var_4;
                    var_19 = var_9;
                    var_20 = (max(var_20, (((172 ? (var_7 == var_5) : -var_6)))));
                }
                for (int i_15 = 2; i_15 < 12;i_15 += 1)
                {
                    arr_54 [i_6] [i_9] [i_13] [i_13] [i_6] [i_15 + 1] = ((10 << (179 - 176)));
                    var_21 -= (0 || -18446744073709551608);
                }
                arr_55 [i_6] [i_9] [i_13] [i_13] |= 98;
                var_22 ^= 119;
            }
            for (int i_16 = 3; i_16 < 13;i_16 += 1)
            {
                var_23 = ((var_7 != (arr_46 [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 2])));
                arr_58 [i_6] [i_6] [i_6] = (~var_3);
            }
            for (int i_17 = 1; i_17 < 11;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 14;i_19 += 1)
                    {
                        {
                            arr_69 [i_6] [i_9] [i_6] [i_6] [i_17] = var_2;
                            arr_70 [i_17] = (((arr_53 [i_6] [i_19 + 1] [i_17 + 3] [i_18 + 1]) ? (((var_8 == (arr_59 [i_6] [i_9] [i_18] [i_19])))) : (arr_27 [i_6] [i_18 - 1] [i_19])));
                            arr_71 [i_6] [i_6] [i_6] [i_9] [i_6] [i_6] |= (((arr_61 [i_6] [i_9] [i_19 + 1] [i_18 + 2]) & var_0));
                        }
                    }
                }
                arr_72 [i_17] [i_9] = (arr_52 [i_6] [i_6] [i_9] [i_17]);
                var_24 -= ((var_9 ? (arr_64 [i_9]) : var_9));
            }
            arr_73 [i_6] [i_9] |= (var_6 != 168);
        }
        for (int i_20 = 0; i_20 < 15;i_20 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_21 = 3; i_21 < 13;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 15;i_22 += 1)
                {
                    {
                        var_25 = var_7;
                        arr_81 [i_6] [i_20] [i_20] [i_21] [i_22] [i_22] = (arr_77 [i_6] [i_21 - 1] [i_6]);

                        for (int i_23 = 0; i_23 < 15;i_23 += 1) /* same iter space */
                        {
                            arr_86 [i_6] [i_20] [i_21] [i_23] [i_23] = (2188931252048892656 * (arr_53 [i_21] [i_21] [i_21 + 1] [i_21]));
                            var_26 ^= (((((var_8 ? var_4 : (arr_44 [i_6] [i_22] [i_23])))) ? ((var_1 ? (arr_56 [i_6] [i_6] [i_6]) : (arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) : var_9));
                        }
                        for (int i_24 = 0; i_24 < 15;i_24 += 1) /* same iter space */
                        {
                            var_27 |= (254 / var_6);
                            arr_90 [i_6] [i_20] [i_24] [i_21 - 2] [i_21 + 2] [9] [i_24] = (((145 ? var_1 : (arr_49 [i_6] [i_6] [i_20] [i_21] [i_22] [i_20]))));
                            arr_91 [i_6] [i_24] [i_21 - 1] [i_24] = var_6;
                            var_28 = (!var_7);
                        }
                        for (int i_25 = 0; i_25 < 15;i_25 += 1) /* same iter space */
                        {
                            var_29 &= (arr_65 [i_20] [i_20] [i_20] [i_20]);
                            var_30 ^= var_4;
                            var_31 = ((((var_7 ? (arr_24 [i_6]) : var_3)) < var_8));
                            var_32 *= (10278291051325273686 || 139);
                            var_33 = ((var_4 - ((~(arr_62 [i_21 + 2] [i_21 + 2] [i_20])))));
                        }
                        var_34 = var_0;
                        var_35 = (((117 >= var_7) ^ (((arr_44 [i_20] [i_20] [i_20]) ? var_3 : var_1))));
                    }
                }
            }

            for (int i_26 = 3; i_26 < 14;i_26 += 1)
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 15;i_27 += 1)
                {
                    for (int i_28 = 4; i_28 < 14;i_28 += 1)
                    {
                        {
                            arr_104 [i_6] [i_6] [i_6] [i_26] [i_6] [i_6] [i_6] = (arr_66 [i_26 - 1] [i_26 - 1] [i_26 - 3] [i_26 - 1] [i_27]);
                            var_36 = (((arr_68 [i_26] [i_20] [i_26 - 2] [i_27] [i_28 - 3]) & var_2));
                        }
                    }
                }
                var_37 = 255;
            }
            for (int i_29 = 1; i_29 < 14;i_29 += 1)
            {
                var_38 |= -103;
                arr_108 [i_6] [i_6] [i_29 - 1] = (arr_83 [i_6] [i_6] [i_6] [i_29] [i_29]);
            }
            var_39 = var_1;
        }
        arr_109 [8] [i_6] = (((arr_40 [6]) << (arr_40 [14])));
        var_40 &= (arr_44 [i_6] [i_6] [i_6]);
        var_41 = (((arr_87 [4] [i_6] [i_6] [4]) >= var_3));
    }
    var_42 |= (!var_4);
    var_43 = ((-((max(23, var_2)))));
    #pragma endscop
}
