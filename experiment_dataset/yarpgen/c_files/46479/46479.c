/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (((arr_2 [i_0]) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (((arr_3 [i_0]) - (arr_2 [i_0]))))) : ((((arr_0 [i_0]) << (16252928 - 16252923))))));
        var_21 = (((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) > (8444249301319680 != 8444249301319672)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 7;i_4 += 1)
                {
                    {
                        var_22 = (max(var_22, (((((var_13 ? (arr_2 [i_2 - 3]) : var_12)) != ((max(0, 0))))))));
                        var_23 = (arr_11 [i_4] [i_4] [i_4 + 2] [i_4]);
                    }
                }
            }
        }

        for (int i_5 = 2; i_5 < 7;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_24 = (arr_0 [i_5]);
                var_25 |= (arr_3 [i_5]);
                var_26 = ((((((arr_7 [i_1] [i_1]) ? (arr_7 [i_5 + 1] [i_5 + 1]) : (arr_7 [i_5] [i_5 - 2])))) ? (arr_12 [i_1] [0]) : (((var_10 ? (((arr_7 [i_1] [i_1]) ? 0 : var_0)) : (arr_8 [i_1]))))));
                var_27 *= (arr_3 [i_1]);
                var_28 = (min(var_28, (arr_12 [i_5 + 1] [i_1])));
            }
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                var_29 += (arr_3 [i_7]);
                var_30 |= (((min((arr_19 [i_1] [i_1] [i_1] [i_1]), (arr_12 [i_5 + 3] [i_5 - 1]))) > (((max((arr_3 [i_1]), (arr_1 [i_5])))))));
                var_31 = (min(var_31, (arr_5 [i_1])));

                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_32 = (max(var_32, (arr_11 [i_8] [i_1] [i_1] [i_1])));
                    var_33 = (min(var_33, 0));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_34 = 1;
                        var_35 |= ((((arr_10 [i_1] [0]) ? (((((arr_22 [i_9] [i_8] [i_8] [i_7] [i_5] [i_1]) <= 1)))) : (arr_22 [i_8] [0] [i_8] [i_8] [1] [i_8]))));
                        var_36 = (min(var_36, var_13));
                        var_37 = (arr_16 [i_7] [i_5] [i_1]);
                        var_38 -= (arr_4 [i_1]);
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_39 = (min(var_39, (((-(min((arr_15 [i_8]), (min((arr_0 [i_1]), (arr_2 [9]))))))))));
                        var_40 = (arr_7 [i_1] [9]);
                        var_41 = (arr_30 [i_10] [i_10] [i_10] [i_10] [i_5 - 2]);
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        var_42 = (arr_8 [i_7]);
                        var_43 = (max(var_43, 1));
                        var_44 = ((((min((arr_8 [i_1]), -3564420796141332032))) ? ((max((arr_23 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 2]), (arr_8 [i_8])))) : (arr_23 [i_11] [i_7] [i_5 + 3] [i_1])));
                        var_45 = (min(var_45, var_14));
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        var_46 = (arr_0 [i_1]);
                        var_47 = (max(var_47, (arr_18 [i_12] [i_8] [i_7] [i_5])));
                    }
                    var_48 = 1;
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_49 *= 474545455;
                            var_50 = var_8;
                            var_51 = (((arr_24 [i_14] [i_14] [i_13] [i_1] [i_5] [i_1] [i_1]) ? var_0 : (((arr_1 [i_1]) | (((!(arr_7 [i_1] [i_1]))))))));
                            var_52 = (arr_13 [i_5 + 1]);
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        var_53 = arr_14 [i_1];
                        var_54 = (((arr_7 [i_5 + 1] [i_5 + 1]) * (arr_7 [i_5 + 1] [i_5 - 2])));
                    }

                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        var_55 = var_0;
                        var_56 = (arr_19 [i_18] [i_16] [i_5 - 1] [i_1]);
                        var_57 = (arr_9 [i_5 + 1]);
                    }
                    var_58 = (arr_40 [i_16] [i_15] [i_1] [i_1]);
                }
                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 10;i_20 += 1)
                    {
                        var_59 = (((arr_26 [i_20] [i_20] [i_19] [i_5 + 1] [i_1] [i_1]) ? (arr_26 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5]) : (arr_26 [i_19] [i_5 - 2] [i_15] [i_5 + 1] [i_5] [i_5 - 2])));
                        var_60 = arr_47 [i_5 - 1] [i_5 - 2] [i_5] [i_5 + 3] [i_5];
                    }
                    var_61 = (arr_54 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
                var_62 = (min(var_62, (((arr_48 [i_5 + 3] [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 2]) ? 6 : 108))));
                var_63 -= ((-127 && (arr_12 [i_5 + 3] [i_5 - 1])));
            }
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                var_64 &= (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                var_65 = (max(var_65, (arr_1 [i_1])));
                var_66 ^= (arr_13 [i_5 + 2]);
                var_67 = -474545430;
            }
            for (int i_22 = 0; i_22 < 10;i_22 += 1)
            {
                var_68 = ((!1) <= (((arr_61 [i_5] [i_5 - 1]) ? 0 : (arr_61 [i_5] [i_5 - 1]))));
                var_69 = (min(var_69, ((((arr_3 [i_1]) ? ((~(arr_55 [i_5 + 2] [i_5 - 2] [i_5] [i_5 + 2] [2]))) : (max(((var_6 ? var_19 : var_18)), ((0 ? 13844 : 86)))))))));
            }
        }
        for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
        {

            for (int i_24 = 0; i_24 < 10;i_24 += 1)
            {
                var_70 -= ((((((arr_12 [i_24] [i_23]) ? var_3 : (arr_65 [i_24] [i_1] [1] [i_1])))) & (arr_2 [i_23])));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 10;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 0;i_26 += 1)
                    {
                        {
                            var_71 = (min(var_71, (min((((arr_22 [i_26 + 1] [i_26] [i_26 + 1] [i_26] [i_26] [i_26 + 1]) ? (arr_22 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_26] [i_26] [i_26 + 1]) : (arr_22 [i_26 + 1] [i_26] [i_26 + 1] [i_26 + 1] [i_26] [i_26 + 1]))), (arr_25 [i_1])))));
                            var_72 = (max(var_72, (arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_27 = 1; i_27 < 7;i_27 += 1) /* same iter space */
            {
                var_73 = (max(var_73, (arr_66 [i_27 + 2] [i_27 + 2] [i_1])));
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 10;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 10;i_29 += 1)
                    {
                        {
                            var_74 += ((((((arr_1 [i_1]) * 0))) ? (arr_69 [i_23] [i_1]) : (0 & 4044261437)));
                            var_75 = ((!(arr_10 [i_27 + 2] [i_27 + 1])));
                            var_76 *= (((arr_37 [i_27 + 2] [i_27 + 2] [i_27 + 2] [i_27] [i_27 + 3]) ? (arr_37 [4] [i_27] [i_27 + 1] [i_27] [i_27 + 2]) : (arr_37 [i_29] [i_28] [i_27 + 2] [i_27] [i_27 + 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 10;i_30 += 1)
                {
                    for (int i_31 = 4; i_31 < 9;i_31 += 1)
                    {
                        {
                            var_77 = (max(var_77, ((((arr_35 [i_31 - 2] [i_31 - 2] [i_31 - 1] [i_27 + 1]) || (arr_26 [i_31] [i_31] [1] [i_31 - 3] [i_27 + 2] [i_27 - 1]))))));
                            var_78 = (min(var_78, (arr_15 [i_1])));
                            var_79 = 3820421891;
                        }
                    }
                }
            }
            for (int i_32 = 1; i_32 < 7;i_32 += 1) /* same iter space */
            {
                var_80 = (min(var_80, ((((arr_12 [i_1] [i_1]) << (arr_75 [i_32] [4] [i_32] [i_32] [i_32 + 3] [i_32 + 3] [i_32 + 3]))))));
                var_81 = (arr_23 [i_32 + 1] [i_32 - 1] [i_32 - 1] [i_32 + 3]);
                var_82 = ((((((arr_18 [i_1] [i_1] [i_1] [i_1]) ? (arr_18 [i_1] [i_1] [i_1] [i_1]) : 474545431))) ? (arr_29 [i_32 + 2] [i_32 + 2] [i_32 + 3] [i_32 + 3] [i_32 - 1] [i_32]) : (arr_44 [i_32 + 2] [i_32] [i_32] [i_32 + 2])));
            }
            var_83 = (max(var_83, var_4));
        }
        for (int i_33 = 0; i_33 < 1;i_33 += 1) /* same iter space */
        {
            var_84 -= (arr_14 [i_1]);
            var_85 = (~var_7);
            var_86 = ((1216349209 ? (((((1 & (arr_33 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33] [i_33])))) | (((arr_4 [i_33]) & var_2)))) : (min(((var_16 ? (arr_12 [i_33] [4]) : var_5)), ((min((arr_42 [i_33] [i_1] [i_1] [i_1]), 1073479680)))))));
        }
    }
    var_87 |= var_8;
    #pragma endscop
}
