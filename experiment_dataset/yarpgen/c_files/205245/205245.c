/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 |= var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (!-28541);
        var_22 = ((arr_2 [i_0] [i_0]) * var_11);
        arr_3 [i_0] = 38274;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_23 = ((((27262 ? 40839 : 4)) * ((min(var_10, (arr_4 [i_1]))))));
        var_24 = ((((var_4 << (((max(6108715306064848667, (arr_5 [i_1] [i_1]))) - 6108715306064848661)))) != ((min((arr_4 [i_1]), (arr_4 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_25 = (((arr_4 [i_2]) ? var_3 : var_11));

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_20 [i_2] [i_2] = ((((31 || (arr_9 [i_2] [i_5] [i_6]))) || (arr_17 [i_2])));
                            var_26 = (arr_12 [i_6] [i_6 - 1]);
                        }
                    }
                }
                var_27 = (arr_5 [10] [i_3 + 1]);
            }
            for (int i_7 = 4; i_7 < 14;i_7 += 1)
            {
                var_28 = (max(var_28, (((((7 < (arr_10 [i_7] [i_3] [i_7]))) ? (arr_7 [i_7] [i_7]) : (arr_18 [i_7] [i_7] [i_7 + 1] [i_7] [14]))))));
                arr_24 [i_2] [14] [14] [i_2] = var_8;
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    {
                        var_29 = (arr_11 [i_8]);
                        arr_30 [i_2] = var_6;
                    }
                }
            }

            for (int i_10 = 4; i_10 < 11;i_10 += 1)
            {

                for (int i_11 = 4; i_11 < 14;i_11 += 1)
                {
                    arr_37 [i_2] [i_3 + 1] [i_2] [i_11] = (var_5 ? (-28523 + -111) : (~18));
                    var_30 = (((arr_7 [i_3 - 1] [i_2]) ? ((((arr_21 [i_11] [i_3] [i_2]) >> (var_11 - 3956)))) : (arr_25 [i_10] [2] [i_10 - 3] [i_10])));
                }
                var_31 = var_14;
            }
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            var_32 += (((arr_8 [2]) ? (~27) : (arr_19 [i_2] [i_2] [8] [i_12] [4] [i_12])));
            arr_40 [i_2] [i_2] = (arr_32 [i_2] [i_12] [i_2]);
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_33 = (arr_25 [i_2] [i_2] [i_2] [i_13]);
            arr_45 [i_2] [i_2] [i_13] = (((arr_33 [i_2] [i_2] [i_2] [i_13]) & (((var_6 != (arr_26 [i_2]))))));

            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_34 = 15377;
                var_35 -= ((((arr_25 [i_2] [i_13] [i_14] [i_14]) ? (arr_43 [i_14] [i_13]) : 231)) | (-34 * 23756));
                var_36 |= (((arr_32 [i_2] [i_13] [10]) > (arr_32 [i_2] [i_13] [8])));
                var_37 |= (((arr_10 [14] [i_13] [i_14]) ? var_14 : var_17));
            }
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                var_38 += (((arr_12 [6] [i_13]) ? var_14 : var_0));
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_39 = ((~(arr_21 [i_16 + 2] [i_16 + 2] [i_17 + 3])));
                            var_40 = (arr_7 [i_2] [i_2]);
                            arr_58 [i_2] [i_2] [i_2] [i_16] [i_17] = ((var_12 | (arr_19 [i_16 + 2] [i_16 + 1] [i_2] [i_16 + 1] [i_16 - 1] [i_16 + 2])));
                            arr_59 [i_2] [i_13] [i_15] [i_16] [i_17 + 2] = var_3;
                            var_41 = (min(var_41, (((var_9 ? (arr_48 [i_16 + 1] [i_13] [i_15] [i_2]) : var_14)))));
                        }
                    }
                }
                arr_60 [i_15] [i_13] [i_15] [i_2] = ((~(arr_33 [i_15] [i_2] [i_2] [i_2])));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 13;i_19 += 1)
                    {
                        {
                            var_42 *= (((arr_11 [i_19 + 2]) < (arr_11 [i_19 - 1])));
                            arr_68 [i_2] [i_18] [i_18] [i_2] [i_13] [i_2] [i_2] = (((((var_4 ? var_5 : var_5))) ? (arr_47 [i_2] [i_15] [i_13] [i_2]) : (((var_9 && (arr_27 [i_2] [i_13] [i_2] [i_18]))))));
                            var_43 = (~76);
                        }
                    }
                }
            }
            for (int i_20 = 0; i_20 < 15;i_20 += 1) /* same iter space */
            {
                var_44 = var_12;
                var_45 = (-3 && -4);
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 14;i_22 += 1)
                    {
                        {
                            arr_77 [i_2] [i_2] [i_21] [i_2] [i_22] = 167814903;
                            var_46 = (arr_46 [i_13] [i_13] [i_21]);
                        }
                    }
                }
                var_47 = (((arr_70 [14] [i_13] [i_2]) & var_13));
                var_48 = ((var_1 || ((((arr_22 [i_2]) ? 65535 : (arr_4 [i_2]))))));
            }
            for (int i_23 = 0; i_23 < 15;i_23 += 1) /* same iter space */
            {
                var_49 -= (((arr_23 [i_2] [12] [i_23] [i_23]) ^ (arr_63 [i_23] [i_23] [i_23] [i_23])));
                var_50 -= ((!(((arr_62 [i_13] [i_2]) || var_4))));
                var_51 |= 49248;
            }
            /* LoopNest 2 */
            for (int i_24 = 2; i_24 < 11;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 15;i_25 += 1)
                {
                    {
                        var_52 -= (arr_55 [i_2]);
                        var_53 |= (var_2 < 252);
                    }
                }
            }
            var_54 = (arr_62 [i_2] [i_13]);
        }
        var_55 = ((var_16 ? var_14 : (arr_67 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])));
        var_56 = (arr_74 [i_2] [4] [i_2] [i_2] [i_2]);
        arr_87 [i_2] = var_1;
        /* LoopNest 2 */
        for (int i_26 = 1; i_26 < 14;i_26 += 1)
        {
            for (int i_27 = 0; i_27 < 15;i_27 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_28 = 2; i_28 < 13;i_28 += 1)
                    {
                        for (int i_29 = 0; i_29 < 15;i_29 += 1)
                        {
                            {
                                arr_98 [i_2] [i_2] = ((!(-127 - 1)));
                                var_57 = (((arr_31 [i_26 - 1] [i_26 + 1] [i_28 - 2] [i_28 + 2]) ? var_18 : (arr_31 [i_26 + 1] [i_26 + 1] [i_28 - 1] [i_28 + 2])));
                            }
                        }
                    }
                    var_58 = ((var_12 ? var_3 : (var_13 && var_15)));
                    var_59 = (((arr_75 [i_26 - 1] [i_27] [i_2] [i_27] [i_2]) ? (((arr_16 [i_2]) ? 127 : var_10)) : var_9));
                }
            }
        }
    }
    var_60 = min(((~(min(var_0, var_2)))), (((64324 % 39329) ? (max(var_17, var_12)) : var_1)));
    #pragma endscop
}
