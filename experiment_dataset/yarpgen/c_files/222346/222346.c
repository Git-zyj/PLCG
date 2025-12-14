/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_0] [2] [i_0] [i_0] = (((((var_8 ? var_13 : ((max(var_4, var_10)))))) ? ((var_11 ? ((var_9 ? var_8 : (arr_2 [i_2] [3]))) : var_2)) : (min((arr_10 [i_1 + 3]), var_1))));
                        var_18 = ((var_7 * ((((arr_7 [i_0] [i_1] [i_1 + 1]) ? var_12 : (min(var_5, (arr_6 [10] [i_1] [i_1]))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_19 = (min(var_19, (((var_11 ? ((var_2 ? var_15 : var_9)) : (arr_5 [i_4] [i_1]))))));
                        var_20 = ((var_17 ? (arr_5 [i_0] [i_1 + 2]) : var_10));
                        var_21 = (arr_11 [i_0] [i_0]);
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_17 [i_1 + 2] [i_2] [i_5] = (((var_13 ? var_13 : (((((arr_14 [5] [i_1] [i_1 - 1] [i_1 - 1]) || var_13)))))));
                        var_22 += (((arr_13 [i_1] [i_1]) ? var_17 : var_1));
                        var_23 *= ((((((((var_14 ? var_11 : (arr_10 [i_1])))) ? var_6 : ((var_14 ? var_11 : var_2))))) ? (max((var_12 & var_16), ((var_13 ? var_0 : var_9)))) : (var_3 & var_4)));
                    }
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        var_24 ^= ((((var_0 << (((arr_13 [i_0] [i_1]) - 4294967170))))) ? var_2 : (arr_18 [i_1] [i_1] [i_1] [i_1] [4] [i_6]));
                        var_25 = (((arr_9 [i_6 + 1] [i_6 + 2] [i_6] [i_6 + 2] [i_6]) ? (((var_4 != (arr_18 [i_6] [i_1] [i_1] [i_1] [i_6] [i_6])))) : (((!(arr_14 [i_6 + 3] [i_6] [i_6] [i_6]))))));
                    }
                    for (int i_7 = 3; i_7 < 9;i_7 += 1)
                    {
                        var_26 = ((((((arr_4 [i_0]) ? var_13 : (arr_0 [i_0])))) ? (((((var_12 ? (arr_7 [i_0] [i_1] [2]) : (arr_4 [i_0])))) & (((arr_18 [i_1] [i_1 - 1] [i_1] [1] [4] [i_1]) / var_10)))) : var_8));
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_7] = var_3;

                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_27 += var_16;
                            var_28 = var_17;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_29 ^= (((arr_3 [i_0] [i_1 - 2] [i_2]) ? ((var_14 ? (arr_11 [i_9] [i_2 - 2]) : var_17)) : (arr_2 [i_0] [i_1])));
                            arr_29 [i_0] [i_1] [0] [0] = (((arr_16 [i_1 + 3] [i_2 - 1] [i_2] [i_7 - 1] [i_7 - 2]) ? var_5 : var_6));
                            arr_30 [i_0] [i_1 + 1] [i_2] [i_7 + 2] [i_9] = (var_14 && (arr_15 [i_0]));
                            var_30 = ((var_2 ? var_17 : (arr_13 [i_2 - 1] [i_1 + 3])));
                        }
                    }
                    var_31 = var_10;
                }
            }
        }
    }
    var_32 ^= (((((var_5 >> (var_4 + 451673723))) | (((var_15 << (var_9 - 49853)))))));

    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        arr_33 [i_10] = ((!(((((max(var_0, (arr_32 [i_10])))) ? var_17 : (var_4 - var_9))))));

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    {
                        arr_42 [i_13] [i_12] [i_12] [i_11] [i_10] [i_10] &= var_7;
                        arr_43 [i_10] [i_11] [i_12] [i_12] = var_12;
                    }
                }
            }
            var_33 += (arr_32 [i_10]);
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 17;i_17 += 1)
                    {
                        {
                            var_34 = var_2;
                            var_35 = (min(var_35, (((((((((~(arr_35 [i_10])))) ? (((arr_53 [i_10] [i_14]) | var_5)) : (~var_14)))) ? (((((var_12 ? var_15 : (arr_39 [i_10] [i_14] [i_16 - 1] [i_14]))) * ((((arr_38 [i_14] [i_16]) ? var_16 : var_12)))))) : ((((((arr_50 [i_10] [i_14]) >> (var_5 - 1721602232)))) ? var_14 : (min((arr_53 [i_17] [i_14]), var_7)))))))));
                        }
                    }
                }
            }
            var_36 = ((~(((((var_6 ? (arr_53 [i_10] [i_10]) : (arr_47 [i_10] [i_14] [i_14] [i_14])))) - ((var_5 ? (arr_54 [i_10] [i_14] [i_10] [i_10] [i_10] [i_10]) : (arr_38 [i_10] [i_14])))))));
        }
        for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
        {
            var_37 = ((((((~var_14) ? ((var_5 ? var_16 : var_11)) : var_5))) == ((~(var_3 / var_17)))));
            var_38 = (arr_56 [i_18]);
            var_39 = var_0;
            var_40 = (arr_36 [i_10] [i_10]);
        }
        for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
        {
            var_41 = (min(var_41, (((var_15 <= (((arr_56 [i_10]) ? (((arr_55 [i_10] [i_19] [i_19] [i_19] [i_19] [i_10]) ? var_7 : var_10)) : -var_7)))))));
            arr_62 [i_10] [i_19] = var_3;
        }
    }

    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 11;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 11;i_24 += 1)
                        {
                            {
                                var_42 ^= ((((min((arr_9 [i_20] [i_21] [i_22] [i_23] [i_24]), (arr_9 [i_20] [i_21] [i_22] [i_23] [i_24])))) ? (arr_65 [i_20]) : (min((((arr_64 [i_20]) ? var_7 : (arr_22 [i_20] [i_21] [i_20] [i_23] [i_24] [i_21]))), (((var_9 ? var_5 : var_5)))))));
                                arr_76 [i_20] [i_21] [i_22] [i_23] [i_24] = (((arr_74 [i_22] [i_24] [i_24] [i_23] [i_24]) ? ((((((var_4 ? var_4 : (arr_15 [i_23])))) ? (arr_58 [i_20]) : var_3))) : ((var_7 - (((min(var_2, var_11))))))));
                                var_43 = (min(var_43, (((((arr_3 [i_23] [i_21] [i_23]) % (((((arr_40 [i_20] [i_21] [i_22] [i_23] [i_24]) > var_5)))))) & ((((var_14 >= var_2) ? ((((arr_59 [i_24] [i_23]) || var_4))) : (!var_16))))))));
                            }
                        }
                    }
                    arr_77 [6] [i_20] [i_22] = (((-((var_6 ? (arr_25 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]) : var_1)))));
                }
            }
        }
        arr_78 [i_20] [i_20] = min((((max(var_7, var_12)))), var_7);
    }
    for (int i_25 = 0; i_25 < 21;i_25 += 1)
    {
        var_44 = (min(var_44, ((((((arr_57 [i_25]) < (arr_57 [i_25]))) ? (arr_57 [i_25]) : ((min((arr_56 [i_25]), var_11))))))));

        /* vectorizable */
        for (int i_26 = 0; i_26 < 21;i_26 += 1) /* same iter space */
        {
            var_45 = var_4;
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 21;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 21;i_28 += 1)
                {
                    {
                        var_46 ^= var_6;
                        var_47 += ((!(((var_11 ? var_0 : var_15)))));
                    }
                }
            }
            var_48 += ((~((var_8 ? var_0 : (arr_49 [i_25] [i_26] [i_26])))));
        }
        for (int i_29 = 0; i_29 < 21;i_29 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 21;i_30 += 1)
            {
                for (int i_31 = 2; i_31 < 20;i_31 += 1)
                {
                    {
                        var_49 ^= ((var_14 ? (arr_95 [i_29]) : (((min(var_12, var_9))))));
                        var_50 = ((var_9 - (((max(var_15, var_3))))));
                        arr_99 [i_30] [18] &= ((!(((var_10 ? (arr_54 [i_31 - 1] [i_31 + 1] [i_30] [i_31] [i_31] [i_30]) : (arr_61 [i_29] [i_31 + 1]))))));
                    }
                }
            }
            var_51 ^= ((((((arr_79 [i_29]) ? (arr_59 [i_29] [i_29]) : var_3))) ? (arr_40 [i_25] [i_25] [i_25] [i_29] [i_29]) : var_0));

            for (int i_32 = 0; i_32 < 21;i_32 += 1)
            {
                var_52 = arr_35 [i_32];
                var_53 += ((var_12 ? ((((!(((~(arr_86 [i_25] [i_29] [i_32] [i_29])))))))) : var_10));
                arr_102 [i_32] [i_32] [i_32] = (((((((var_14 ? var_10 : (arr_35 [i_29]))) | (var_1 > var_16)))) ? ((((arr_54 [i_25] [i_29] [i_32] [i_25] [i_32] [1]) ? (var_8 || var_3) : ((var_3 / (arr_96 [i_29])))))) : (((var_12 ? var_17 : var_1)))));
            }
            var_54 = (var_12 != var_2);
        }
    }
    #pragma endscop
}
