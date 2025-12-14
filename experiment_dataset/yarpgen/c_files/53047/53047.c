/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_8 [i_0] = ((max((max(var_4, (arr_7 [i_0] [i_0] [i_1]))), ((min(1, 1))))));
            var_18 = (max((arr_6 [i_0] [i_1] [i_0]), (1 || 0)));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_19 = (arr_2 [i_2]);
            arr_13 [i_0] [i_0] |= (max((min((min((arr_1 [i_0] [i_0]), var_15)), (arr_0 [i_0] [8]))), (((((((arr_1 [i_0] [i_2]) && (arr_12 [i_0])))) >= (~1))))));
            var_20 = (min((arr_3 [i_0]), (arr_0 [i_0] [i_0])));
            var_21 = max(-1, (max(1, -1)));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_18 [10] [0] = (arr_1 [i_3] [i_0]);
            arr_19 [i_3] = var_6;
        }
        var_22 = (min(var_22, (arr_7 [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        var_23 = (min(var_23, (((!((((min(var_1, (arr_15 [i_4 + 2])))))))))));
        arr_22 [i_4 + 2] [5] = (arr_15 [i_4]);
        var_24 = (arr_21 [i_4]);
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_25 [i_5] = (min((min((min(3, (arr_24 [i_5]))), var_13)), (min(((((arr_23 [11]) ? (arr_23 [i_5]) : -30940))), (arr_24 [i_5])))));
        var_25 = (arr_24 [i_5]);
    }
    var_26 += (min(var_2, (!var_2)));

    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            var_27 += (max(var_5, (min(((max(var_0, (arr_23 [i_6])))), (((arr_28 [i_6] [i_6]) ? (arr_29 [i_7]) : var_10))))));
            var_28 = ((var_12 / (min(var_9, var_8))));
            arr_33 [i_7] [i_6] = (min((((~var_4) * (arr_28 [i_7 - 1] [i_7 + 2]))), (min(((((arr_29 [i_7 - 1]) ? var_1 : (arr_27 [i_7])))), (arr_24 [i_6])))));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            var_29 = var_13;
            var_30 *= var_5;
            arr_38 [i_6] [i_6] = var_8;

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_31 = var_9;
                var_32 = 1;
                var_33 = (arr_37 [i_8 + 3] [i_8] [i_8 + 1]);
                var_34 = var_8;
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                arr_44 [7] [i_8 - 1] [i_10] = var_8;
                var_35 = (max(var_35, ((((arr_23 [i_8]) ? var_3 : var_11)))));
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_36 = ((((((arr_46 [i_6] [i_6] [i_6]) & 248))) ? (arr_45 [i_6] [i_6] [i_6]) : (arr_39 [1])));
                arr_47 [i_8 + 4] [i_8 + 4] [0] = 8388607;
                var_37 = (arr_37 [i_6] [i_8 + 2] [i_11]);
                arr_48 [i_6] [i_6] [i_6] [i_11] = var_13;
            }
            var_38 = (arr_23 [i_6]);
        }
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            var_39 = (min(((((min(var_3, (arr_31 [i_6])))) ? (arr_36 [i_12]) : (max(var_15, (arr_27 [i_12]))))), ((min((arr_36 [i_12]), (((arr_34 [i_6] [i_6]) / (arr_32 [i_6] [i_12 - 1]))))))));
            arr_51 [i_12] [10] [i_12] = (-2147483647 - 1);
            var_40 -= (min((((!((max(var_6, var_9)))))), var_16));
            arr_52 [i_6] [i_12] = ((0 ? ((((~var_13) ? ((min((arr_41 [i_6] [2] [i_12 + 3]), (arr_31 [i_12])))) : ((var_10 ? 244 : 1))))) : (min(((max(-8388607, -740562756))), var_4))));
            arr_53 [i_6] [i_12] = (arr_39 [i_6]);
        }

        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            arr_56 [i_6] [i_13] [i_13] = var_14;
            var_41 = (~(((!((max((arr_32 [i_6] [i_13]), (arr_42 [i_6] [i_6] [i_6] [i_13]))))))));
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            var_42 = (max(var_42, (arr_50 [i_6] [i_6])));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    {
                        var_43 = ((var_7 ? ((var_5 ? 4503599627370368 : var_16)) : (min(var_13, (arr_29 [i_14])))));
                        arr_65 [i_15] [i_14] [i_15] [i_16] = var_0;
                    }
                }
            }
        }
    }
    for (int i_17 = 3; i_17 < 17;i_17 += 1)
    {
        arr_69 [i_17 - 2] = var_4;
        var_44 |= (arr_67 [i_17 - 1]);
        arr_70 [i_17] = (min(1, -1));
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_45 += (arr_71 [i_18]);

        for (int i_19 = 3; i_19 < 20;i_19 += 1)
        {
            arr_76 [i_19] [i_18] = (min((((arr_71 [i_19 - 1]) ? (-9223372036854775807 - 1) : (arr_71 [i_19 - 3]))), ((((arr_75 [i_19 - 3] [i_19 - 3] [i_19 - 3]) < (arr_71 [i_19 - 3]))))));
            var_46 *= (min(((((min(-9, (arr_71 [i_18])))) ? (min((-2147483647 - 1), var_7)) : (arr_75 [i_18] [i_19] [12]))), (-8388607 / 59336)));

            for (int i_20 = 0; i_20 < 21;i_20 += 1) /* same iter space */
            {
                var_47 = (max((max((((~(arr_72 [i_20])))), (min(var_9, var_10)))), var_8));
                var_48 = (max(13680596146917826482, 0));
                var_49 = (((arr_72 [i_20]) ? (arr_74 [i_18] [i_18] [i_18]) : (arr_75 [i_19] [i_19] [i_19])));
                var_50 = -var_5;
                var_51 = (((arr_72 [i_18]) % (max((max((arr_74 [i_20] [14] [i_18]), (arr_71 [i_20]))), var_17))));
            }
            for (int i_21 = 0; i_21 < 21;i_21 += 1) /* same iter space */
            {
                arr_81 [i_19] = ((((min((arr_72 [i_18]), (max(var_17, (arr_74 [i_18] [i_21] [i_21])))))) & (max(-1813156822439476273, var_3))));
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 19;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 19;i_23 += 1)
                    {
                        {
                            var_52 = (arr_84 [i_22] [i_18]);
                            var_53 = (max(var_53, (arr_88 [i_18] [i_19] [i_21] [i_22] [i_23])));
                            arr_90 [i_19] [i_19 - 3] [i_19 + 1] = (((min((min(var_5, 2251250057871360)), (arr_78 [i_21] [i_21])))) ? (arr_71 [i_18]) : var_9);
                            arr_91 [i_19] [6] = var_10;
                        }
                    }
                }

                for (int i_24 = 3; i_24 < 18;i_24 += 1)
                {
                    var_54 = (max((max(var_2, 2251250057871341)), (max(var_7, (min(var_15, var_0))))));
                    arr_96 [i_19] [i_19] [5] = ((var_1 ? (max((arr_71 [i_18]), (arr_83 [i_19 - 1] [i_19] [i_19] [i_19 - 3]))) : ((min((arr_77 [i_18] [i_19 + 1] [17] [i_24]), 1)))));
                }
                var_55 = (+(((arr_79 [i_19] [i_19 - 3] [i_19 - 1]) / (arr_79 [i_19] [i_19 - 1] [i_19]))));
            }
            /* vectorizable */
            for (int i_25 = 0; i_25 < 21;i_25 += 1)
            {
                var_56 = var_9;
                arr_99 [i_19] [12] [2] &= ((var_1 ? var_11 : 65535));
            }
            var_57 *= (max((max((arr_93 [i_18]), (((arr_77 [i_18] [i_18] [i_18] [i_18]) >= (arr_87 [i_18] [i_18] [i_18] [i_19 - 3] [14]))))), var_17));
        }
        for (int i_26 = 0; i_26 < 21;i_26 += 1)
        {
            arr_102 [i_18] [i_18] [i_26] = var_4;

            for (int i_27 = 0; i_27 < 21;i_27 += 1)
            {
                arr_107 [i_18] [i_18] = (max((((~(((arr_77 [i_27] [i_27] [i_26] [i_18]) ? var_12 : (arr_106 [20] [i_26] [20])))))), (max(var_4, (arr_85 [i_18] [i_26] [i_27])))));
                var_58 = (arr_83 [i_18] [i_18] [4] [i_27]);
                var_59 = ((((min(((var_15 ? var_9 : (arr_104 [i_18] [i_26]))), (min((arr_85 [18] [i_26] [18]), (arr_82 [1] [i_26] [i_26] [i_26] [i_27])))))) ? (max(var_13, (min((arr_103 [i_27] [i_27] [i_26] [9]), (arr_105 [i_27] [i_27] [i_27] [i_27]))))) : ((min(((var_8 ? var_14 : var_2)), (max((arr_74 [i_18] [i_26] [i_27]), var_13)))))));
            }
        }
        for (int i_28 = 0; i_28 < 21;i_28 += 1)
        {
            var_60 ^= (arr_101 [i_18] [i_28]);
            var_61 = var_15;
            var_62 = (arr_108 [i_18] [i_28]);
            arr_112 [i_28] = -var_12;
        }
    }
    /* LoopNest 3 */
    for (int i_29 = 3; i_29 < 12;i_29 += 1)
    {
        for (int i_30 = 0; i_30 < 13;i_30 += 1)
        {
            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                {
                    arr_123 [i_29] [i_29] |= (1 && -1);
                    var_63 = (arr_120 [i_29]);
                    /* LoopNest 2 */
                    for (int i_32 = 1; i_32 < 12;i_32 += 1)
                    {
                        for (int i_33 = 4; i_33 < 12;i_33 += 1)
                        {
                            {
                                var_64 = 65535;
                                var_65 = -1813156822439476273;
                                var_66 += (max(((var_3 * (max((arr_32 [i_29] [i_31]), (arr_67 [i_31]))))), -1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
