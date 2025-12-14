/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_6;
        arr_5 [i_0] = arr_3 [i_0];

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_13 = var_3;
            arr_9 [i_0] [1] &= var_11;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_15 [i_0] [i_1] [i_0] [1] [i_0] [i_3] &= (!0);

                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_14 *= (!(((var_0 | (arr_11 [1] [1] [0])))));
                        var_15 = ((1 ? ((1 ? var_3 : 1)) : 1));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_16 = 1;
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;
                        var_17 = arr_12 [i_1] [i_1];
                    }
                    var_18 = (~var_7);
                    var_19 *= ((1 ? 1 : 1));
                    arr_21 [1] [i_1 - 1] [0] [1] [i_3] [i_3] &= (!(arr_16 [i_0] [i_1] [i_1 - 1] [1] [1]));
                }
                var_20 = (max(var_20, ((((arr_6 [1]) ? var_12 : (arr_19 [i_0] [1]))))));
                var_21 = var_9;
                var_22 = var_4;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_23 = (((arr_11 [i_1 - 1] [i_1 - 1] [i_0]) ? (arr_11 [i_1 - 1] [i_1 - 1] [i_0]) : (arr_11 [i_1 - 1] [i_1 - 1] [i_0])));
                var_24 = var_4;

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_26 [i_6] [i_0] [i_0] = ((arr_3 [i_0]) < (arr_14 [i_0] [i_0] [1] [i_1 - 1]));
                    var_25 = (((arr_11 [i_0] [i_0] [i_0]) ? (arr_22 [i_6] [i_1]) : (arr_16 [i_1 - 1] [i_1] [i_6] [1] [i_7])));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_26 = (((arr_27 [i_6] [i_6] [i_1 - 1] [i_1 - 1]) ? (arr_11 [i_0] [i_1 - 1] [i_0]) : (arr_11 [i_0] [i_1 - 1] [i_0])));
                    var_27 ^= var_7;
                    var_28 = (arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                    var_29 = arr_24 [i_0] [i_6];
                    var_30 = arr_16 [i_6] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1];
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_0] [i_9] = arr_22 [i_1 - 1] [i_1];
                    arr_33 [i_0] [i_1] [i_6] [i_9] = (((arr_17 [i_0] [i_1] [i_6] [i_6] [i_9]) ? (1 ^ var_12) : 1));
                    var_31 = (((arr_16 [i_1 - 1] [i_1 - 1] [1] [i_9] [0]) ? (arr_13 [i_1 - 1] [i_1] [i_0]) : (arr_13 [i_1 - 1] [i_1] [i_0])));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_32 = ((arr_19 [i_0] [i_0]) && (arr_22 [i_1] [1]));
                        arr_39 [0] [i_1] [i_1] [i_6] [i_10] [i_11] [i_11] &= var_9;
                        arr_40 [i_0] [1] [i_6] [i_11] &= var_8;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_33 = ((1 ? 1 : 1));
                        var_34 += ((arr_37 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) <= (arr_37 [1] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                        var_35 = arr_24 [i_6] [i_10];
                        arr_43 [i_0] [i_6] [i_0] = arr_22 [i_12] [i_10];
                        arr_44 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_41 [1] [i_1 - 1]);
                    }
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        var_36 = ((1 ? 1 : 1));
                        var_37 = (!(arr_28 [i_0] [i_1] [i_6] [i_10]));
                    }
                    var_38 |= arr_12 [i_0] [1];
                }
                var_39 = var_8;

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_40 = (min(var_40, ((((~var_8) ? (((arr_11 [i_0] [i_1 - 1] [1]) ? var_11 : var_2)) : var_11)))));
                    arr_49 [i_0] = (!var_5);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        arr_52 [i_15] = (((arr_17 [i_15] [1] [i_15] [i_15] [1]) ? (arr_8 [i_15]) : (arr_17 [1] [1] [i_15] [i_15] [i_15])));
        var_41 ^= arr_47 [i_15] [i_15];
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        arr_55 [1] = (min((((arr_18 [i_16] [i_16] [i_16] [i_16] [1]) - (arr_18 [1] [1] [i_16] [i_16] [1]))), ((max(var_0, (arr_18 [i_16] [i_16] [i_16] [i_16] [i_16]))))));
        arr_56 [i_16] = min((min((arr_19 [i_16] [1]), (arr_19 [1] [1]))), (max(1, 1)));

        /* vectorizable */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            arr_71 [i_20] = var_5;
                            var_42 ^= (!(arr_60 [1] [1] [1]));
                            arr_72 [i_16] [i_17] [i_18] [i_20] [i_18] [i_20] = (!(var_11 * var_5));
                            var_43 = (((arr_51 [1] [i_17]) ? var_7 : (arr_1 [i_20])));
                            var_44 = (arr_66 [i_16] [1]);
                        }
                    }
                }
                var_45 = ((var_0 ? (arr_8 [i_18]) : (arr_54 [i_16])));
                var_46 = (!var_2);
                arr_73 [i_16] [i_17] [i_18] = var_11;
            }
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 0;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        {
                            var_47 = (((arr_42 [i_16] [1] [i_21] [i_21] [1]) ? var_0 : (((!(arr_76 [i_21]))))));
                            arr_84 [i_16] [i_16] [i_16] [1] |= arr_18 [i_16] [i_16] [i_16] [i_17] [i_23];
                            var_48 = var_11;
                            var_49 = (((arr_63 [i_22 - 1] [i_21 + 1] [i_21]) ? (arr_63 [i_22 - 1] [1] [i_21]) : (arr_63 [i_22 - 1] [1] [i_21 + 1])));
                        }
                    }
                }
            }
            var_50 = arr_69 [i_16] [i_17] [i_17];
            var_51 = arr_57 [i_17] [i_16];
        }
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    {
                        var_52 = arr_65 [i_16] [i_24] [i_25] [i_26] [i_16] [i_25];

                        for (int i_27 = 0; i_27 < 1;i_27 += 1)
                        {
                            arr_97 [1] [i_24] [i_25] [0] [i_25] = ((~((((((arr_85 [i_16] [i_16]) ? var_6 : var_11)) > ((min((arr_36 [i_16] [i_24] [i_25] [i_25]), var_10))))))));
                            var_53 = (max(var_3, ((((((arr_89 [i_16]) ? var_11 : (arr_88 [i_16] [1] [i_16] [i_16])))) ? (arr_96 [i_16] [i_16] [i_16] [i_25] [i_16]) : (arr_66 [1] [i_24])))));
                        }
                        for (int i_28 = 0; i_28 < 1;i_28 += 1)
                        {
                            var_54 = var_7;
                            var_55 = arr_10 [i_25];
                            var_56 = (((min(1, (arr_42 [i_16] [i_24] [i_25] [i_25] [i_28]))) ? (max(((min((arr_48 [i_16] [i_24] [i_26]), (arr_62 [i_26] [i_24])))), ((var_4 - (arr_54 [1]))))) : (max((((arr_74 [1] [1]) - (arr_14 [i_25] [i_26] [i_25] [i_16]))), ((1 ? 1 : 1))))));
                        }
                        for (int i_29 = 0; i_29 < 1;i_29 += 1)
                        {
                            arr_104 [i_16] [i_24] [i_25] [i_25] [i_25] = ((((var_7 ? ((max((arr_100 [i_16] [i_24] [i_24] [i_26] [i_16]), (arr_95 [i_26])))) : ((var_6 ? var_4 : (arr_25 [i_29] [i_26] [i_25] [i_24]))))) | ((max((!1), (min((arr_6 [i_25]), var_1)))))));
                            var_57 = (max((((!(arr_36 [i_16] [i_16] [i_16] [i_25])))), (max((((arr_89 [1]) ? (arr_58 [i_29]) : (arr_93 [i_16] [i_16] [i_25] [1] [i_16]))), (arr_47 [1] [i_24])))));
                        }
                        for (int i_30 = 0; i_30 < 1;i_30 += 1)
                        {
                            var_58 = (min(((max((arr_99 [i_30] [i_25] [i_24]), (min((arr_90 [i_30] [i_26] [i_25] [i_25] [i_16] [i_16]), (arr_62 [1] [1])))))), ((1 ? 1 : 1))));
                            var_59 = max((min(1, 1)), (min(var_12, (min((arr_77 [i_16] [i_25] [i_26] [i_30]), var_6)))));
                        }

                        for (int i_31 = 0; i_31 < 0;i_31 += 1)
                        {
                            var_60 = min((arr_10 [i_25]), ((((arr_83 [i_16] [i_25] [1] [i_26] [i_31] [i_16] [i_26]) ? (arr_99 [i_31] [i_25] [i_24]) : var_9))));
                            var_61 = ((1 ? 1 : 1));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_32 = 0; i_32 < 1;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 1;i_33 += 1)
                {
                    for (int i_34 = 0; i_34 < 0;i_34 += 1)
                    {
                        {
                            var_62 = var_11;
                            var_63 = (min((min((((arr_78 [1] [1] [1] [0]) ? (arr_109 [1] [1] [i_32] [i_24] [i_16]) : (arr_77 [i_16] [0] [i_33] [i_34]))), (arr_112 [i_33] [i_24] [i_33]))), (var_2 * var_9)));
                            var_64 = (min((((((~(arr_113 [i_16] [i_16] [i_32] [i_33])))) ? ((var_12 ? (arr_53 [i_34]) : (arr_85 [i_33] [0]))) : (~1))), ((1 ? 1 : 1))));
                        }
                    }
                }
            }
        }
        var_65 += ((((((arr_51 [i_16] [i_16]) << (arr_51 [i_16] [1])))) ? (arr_51 [i_16] [1]) : ((min((arr_51 [i_16] [i_16]), (arr_51 [i_16] [i_16]))))));
    }
    var_66 -= var_12;
    var_67 &= (((max(var_5, var_6)) ? ((min(var_10, var_11))) : var_9));
    #pragma endscop
}
