/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_19 = (arr_9 [i_0] [i_0]);
                            var_20 = (arr_2 [i_4] [i_2 - 4] [0]);
                            var_21 = (max((((~(~24443)))), (arr_7 [i_3] [i_3] [i_4 - 2] [i_4] [i_4] [11])));
                        }
                    }
                }
            }
            var_22 = (max((arr_0 [14]), (((((414305678 ? (arr_0 [i_1]) : (arr_2 [12] [i_1] [i_1])))) ? (arr_0 [i_0]) : ((max((arr_4 [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_1]))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                var_23 = (min(var_23, (arr_10 [16] [i_0])));
                var_24 = ((~(arr_10 [i_0] [i_5])));
            }
            var_25 &= (arr_2 [i_0] [i_0] [i_5]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_26 = (((arr_0 [i_0]) ? (arr_17 [i_0] [i_0] [i_7]) : (arr_0 [i_0])));
            var_27 = (arr_6 [i_0] [i_0] [i_7] [i_0]);
            var_28 = (~var_11);
        }

        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 2; i_9 < 22;i_9 += 1) /* same iter space */
            {
                var_29 = (((((var_1 ? var_14 : (arr_23 [i_0] [i_8] [i_9] [i_9])))) ? var_11 : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                var_30 = ((((arr_19 [4] [4]) ? 0 : (arr_9 [i_8 + 2] [i_0]))));
                var_31 = ((((arr_14 [i_0] [i_8 + 1] [4]) & (arr_16 [i_8 + 1] [i_0]))));
                var_32 = ((((((arr_16 [i_0] [i_8]) < var_15))) >> ((((var_15 ? (arr_4 [i_9] [7]) : -27658)) + 106))));
            }
            /* vectorizable */
            for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
            {
                var_33 = (arr_3 [i_0] [i_0]);
                var_34 = (arr_10 [i_10 - 1] [i_8 + 1]);

                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    var_35 = (((~var_18) & 3073833414));
                    var_36 = (((((21092 / (arr_11 [i_0] [i_8])))) < (arr_0 [i_0])));
                    var_37 = (((~var_2) && 782599348));
                    var_38 = var_5;
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_39 = var_3;

                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        var_40 = ((~(arr_21 [i_10 + 2] [i_8])));
                        var_41 = (arr_8 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 2] [i_8 - 1] [i_8]);
                        var_42 = (((~61) != (arr_24 [i_8 + 1] [i_12])));
                        var_43 = ((var_9 != ((((arr_1 [i_0]) ? -21093 : (arr_25 [i_13] [i_8] [i_10]))))));
                    }
                }
            }
            /* vectorizable */
            for (int i_14 = 2; i_14 < 22;i_14 += 1) /* same iter space */
            {

                for (int i_15 = 1; i_15 < 24;i_15 += 1) /* same iter space */
                {
                    var_44 = ((var_11 ? (arr_30 [i_0] [i_0] [i_8]) : var_11));
                    var_45 = var_18;
                }
                for (int i_16 = 1; i_16 < 24;i_16 += 1) /* same iter space */
                {
                    var_46 ^= (((arr_23 [i_14 + 3] [i_14 + 3] [i_14] [i_14]) ^ (arr_34 [i_14 + 2] [i_14 + 2] [i_14])));
                    var_47 = var_5;
                    var_48 = (max(var_48, var_17));
                }
                for (int i_17 = 1; i_17 < 24;i_17 += 1) /* same iter space */
                {
                    var_49 = (max(var_49, ((((arr_39 [i_8] [i_8] [i_8 + 2] [i_8]) != (arr_31 [i_8] [16] [i_8 + 1] [i_8] [i_8 - 1] [16] [i_8]))))));
                    var_50 = ((~var_5) != (((((arr_34 [24] [4] [i_8]) && (arr_26 [i_0] [i_8] [i_14] [1]))))));
                    var_51 = (arr_23 [i_0] [i_0] [i_0] [i_0]);
                }
                var_52 = (((arr_6 [i_0] [i_0] [i_14] [21]) + var_9));
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 24;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 21;i_19 += 1)
                    {
                        {
                            var_53 = ((var_18 * var_16) != var_15);
                            var_54 = (((arr_14 [i_8 + 2] [i_14 + 1] [i_18 + 1]) ? ((var_5 ? (arr_23 [i_0] [i_8] [i_14] [i_19]) : (arr_29 [i_19] [i_8]))) : var_11));
                        }
                    }
                }
            }
            var_55 += (min(((+(((arr_43 [15] [i_8]) - (arr_48 [i_0] [i_8] [i_8] [1] [i_8]))))), -16341));
        }
    }
    for (int i_20 = 2; i_20 < 21;i_20 += 1)
    {
        var_56 = ((!((((arr_23 [i_20] [i_20 - 1] [i_20 - 1] [i_20]) ? (arr_31 [i_20 + 2] [i_20 + 2] [i_20 + 2] [i_20] [14] [i_20] [i_20 - 2]) : (arr_31 [i_20 - 2] [i_20] [i_20] [i_20] [i_20] [i_20 - 2] [i_20]))))));
        var_57 = ((((var_11 ? (arr_14 [i_20] [i_20 + 2] [i_20 - 1]) : 3073833414)) | ((((max(2, var_2)))))));
        var_58 = (min((((((var_10 ? (arr_20 [8] [i_20]) : var_13)) + ((max(var_0, (arr_22 [i_20] [i_20] [i_20]))))))), (((var_7 ? var_5 : 2565602422)))));
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 23;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 21;i_22 += 1)
            {
                {
                    var_59 &= var_10;
                    var_60 = var_6;
                }
            }
        }
    }

    for (int i_23 = 0; i_23 < 20;i_23 += 1)
    {

        /* vectorizable */
        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            var_61 = (min(var_61, (var_11 <= var_7)));
            var_62 = ((!(arr_35 [i_23])));

            for (int i_25 = 0; i_25 < 20;i_25 += 1)
            {
                var_63 = (arr_23 [i_23] [i_24] [i_24] [i_25]);
                var_64 = 0;
                var_65 = (~var_11);
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 20;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 0;i_27 += 1)
                    {
                        {
                            var_66 = (((arr_51 [i_23]) ? (arr_66 [i_26] [i_27] [i_27 + 1] [i_27 + 1] [i_27 + 1] [i_27 + 1]) : var_4));
                            var_67 = ((-(var_13 % var_5)));
                            var_68 = var_0;
                        }
                    }
                }
            }
            var_69 = (var_8 || var_7);
        }
        /* LoopNest 3 */
        for (int i_28 = 2; i_28 < 18;i_28 += 1)
        {
            for (int i_29 = 0; i_29 < 20;i_29 += 1)
            {
                for (int i_30 = 3; i_30 < 19;i_30 += 1)
                {
                    {
                        var_70 = var_12;

                        for (int i_31 = 2; i_31 < 19;i_31 += 1)
                        {
                            var_71 = (max(var_18, (max((arr_39 [i_23] [i_29] [i_30] [1]), var_17))));
                            var_72 |= (max(var_10, -var_16));
                        }
                    }
                }
            }
        }
    }
    var_73 = ((var_8 ? ((var_10 ? ((min(-782599331, var_6))) : (max(var_2, var_13)))) : -22851));
    var_74 = (min(var_74, (((~(min(var_9, (~var_16))))))));
    var_75 = (max((((~var_11) ? var_7 : -var_15)), var_13));
    #pragma endscop
}
