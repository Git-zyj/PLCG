/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= max((max((~3), ((max(var_12, var_18))))), ((var_11 ? ((1 ? -10733 : 3073999163)) : 1)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = -2;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_21 |= (((arr_6 [i_0] [i_0]) / (arr_1 [i_1])));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_22 = (max(var_22, var_13));
                            var_23 ^= var_12;
                        }
                    }
                }
                var_24 = (min(var_24, (((127 ? var_14 : (arr_17 [i_0] [i_1] [i_1] [i_2] [i_2]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_25 = (max(var_25, (arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0])));
                            var_26 = (max(var_26, var_5));
                            var_27 = ((var_7 ? (arr_16 [i_1] [i_2] [i_5] [i_2]) : (((-1 ? var_12 : -29480)))));
                            arr_24 [i_2] [i_5] [i_2] = (var_5 + -115);
                        }
                    }
                }
                var_28 = (!var_0);
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_29 ^= ((!(((8184 ? (arr_6 [i_7] [i_7]) : (arr_0 [i_0]))))));
                var_30 ^= ((((min(var_1, (arr_25 [i_7] [i_1] [i_0])))) && 1));
            }
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            var_31 |= (((arr_13 [i_8] [i_8] [i_8] [i_8 + 1] [i_8] [i_8]) ? (max((arr_22 [i_8 + 2] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1]), 1)) : ((max(var_17, 62820)))));
            var_32 = (((arr_19 [i_0] [i_0] [8] [i_0]) ? (min(7, var_9)) : 1));
        }
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            var_33 = (max(var_33, var_16));
            var_34 = ((1 ? (-32767 - 1) : -15));
            var_35 = ((4294967282 ? 10716 : -20946));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            arr_45 [i_0] [i_10] [i_11 - 2] [i_12] [i_13] = (max(var_8, (arr_12 [i_10])));
                            arr_46 [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] = (max(var_14, var_12));
                        }
                        for (int i_14 = 2; i_14 < 20;i_14 += 1)
                        {
                            var_36 = (min(((var_16 ? (max(var_8, var_9)) : (((max(var_13, var_12)))))), var_8));
                            var_37 = (max(var_37, var_0));
                        }

                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            arr_51 [i_0] [i_10] [i_11 - 1] [i_12] [20] &= ((var_10 ? ((~(((arr_26 [i_0] [i_12] [i_11] [i_0]) ^ var_12)))) : ((((~1) ? -110 : 32767)))));
                            var_38 &= 32759;
                            var_39 = var_6;
                            var_40 |= var_4;
                        }
                        for (int i_16 = 2; i_16 < 23;i_16 += 1)
                        {
                            var_41 = (max(var_41, (arr_6 [i_10] [i_10])));
                            var_42 = (max(var_42, ((min((((arr_11 [16]) ? var_5 : (arr_25 [i_11 - 2] [i_16 - 2] [i_11 - 2]))), ((((!var_12) ^ (~var_0)))))))));
                            var_43 = (max(var_43, (((+(min((((arr_11 [8]) << (var_2 - 208))), var_2)))))));
                            var_44 = (max(var_44, ((max((arr_20 [i_0] [i_11 - 2]), var_15)))));
                        }
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            var_45 &= (min(6, 101));
                            var_46 = ((971790434 ? 2 : 7));
                            var_47 ^= 196;
                        }
                        for (int i_18 = 4; i_18 < 23;i_18 += 1)
                        {
                            var_48 = (max(var_48, var_4));
                            var_49 = (arr_61 [i_0] [i_10] [i_11 - 1] [i_11 - 1] [i_18 - 4]);
                            var_50 *= (min(((((arr_7 [i_11 - 1] [i_18 + 1] [i_11 - 1]) ? var_11 : var_18))), (~var_5)));
                            var_51 *= ((11 ? ((max((!var_11), var_11))) : ((~((max((arr_28 [i_10] [i_10]), var_11)))))));
                        }
                    }
                }
            }

            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                var_52 &= ((var_3 ? ((((max(var_3, (arr_43 [i_0] [i_0] [i_19] [i_19] [i_10] [i_19])))) ? var_6 : ((((arr_8 [i_0] [i_10] [i_10]) || var_8))))) : var_6));
                var_53 ^= var_3;
                var_54 = (min(var_54, ((min(3461941246, var_7)))));
                arr_64 [i_0] [i_10] [i_0] = max(-680144115, (min(((min(var_3, 1))), -0)));
            }
            for (int i_20 = 1; i_20 < 22;i_20 += 1)
            {
                var_55 |= ((((((var_6 / var_18) ? var_8 : ((min((arr_27 [i_10]), var_1)))))) ? var_2 : (arr_62 [i_20] [i_20] [18])));

                for (int i_21 = 0; i_21 < 24;i_21 += 1)
                {
                    var_56 = (min(var_56, (arr_43 [i_21] [i_21] [i_20 + 2] [i_0] [i_10] [i_0])));

                    for (int i_22 = 1; i_22 < 20;i_22 += 1)
                    {
                        var_57 = 1152921504606846975;
                        arr_75 [i_0] [i_0] [i_0] [i_0] [i_21] [i_0] [i_0] |= (max((arr_60 [i_21] [i_21] [i_21] [i_21]), (max(var_9, var_7))));
                        var_58 = var_2;
                    }
                    for (int i_23 = 0; i_23 < 24;i_23 += 1)
                    {
                        var_59 = (max(var_59, var_7));
                        var_60 = (min(var_60, (((var_0 ? ((~((max((arr_21 [i_0] [i_10] [i_20 + 1] [i_21] [i_21] [i_10] [i_23]), -1))))) : (!-109))))));
                        var_61 ^= 20599;
                        var_62 = (!var_7);
                    }
                    var_63 ^= 83;
                }
                for (int i_24 = 1; i_24 < 23;i_24 += 1) /* same iter space */
                {
                    var_64 = ((~((((arr_25 [i_0] [i_24 - 1] [i_20 + 2]) || 7)))));
                    var_65 = (min(var_65, (((13 ? -10716 : 2147483648)))));

                    for (int i_25 = 0; i_25 < 24;i_25 += 1)
                    {
                        arr_84 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_10] = (max((~var_15), (~4378)));
                        var_66 = (max(var_66, ((max((((var_12 ? (min((arr_34 [i_0]), var_8)) : (arr_57 [i_0])))), (arr_6 [i_20] [i_20]))))));
                        var_67 *= 0;
                        var_68 |= (arr_25 [i_0] [i_0] [i_0]);
                        var_69 = ((-4867 ? (((!(arr_19 [i_24 + 1] [i_24] [i_10] [i_24])))) : (min((((arr_43 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20 - 1]) ? 9 : var_0)), (((!(arr_36 [i_24] [i_20 - 1] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (int i_26 = 1; i_26 < 21;i_26 += 1)
                    {
                        var_70 = (max(var_70, ((127 ? (arr_76 [i_26] [i_10] [i_20] [i_20 + 2] [i_26 + 3] [i_24] [i_26 + 2]) : (arr_76 [i_26] [i_24] [i_24] [i_24] [i_26] [i_26] [i_26 - 1])))));
                        var_71 -= ((var_4 ? -32756 : (arr_42 [i_24 + 1] [i_24 + 1] [8] [8] [i_24 + 1])));
                        arr_87 [i_10] [i_26] [i_26] = (((arr_18 [i_20 + 1] [i_24 + 1] [i_20 + 1] [i_24] [i_24 - 1] [i_26 + 1]) ? (arr_18 [i_10] [i_26] [i_26] [i_26] [i_26 + 2] [i_26 + 2]) : 17));
                        arr_88 [i_0] [i_24 + 1] [i_20] [i_20] [i_20] [i_10] [i_20] = (~var_1);
                    }
                }
                for (int i_27 = 1; i_27 < 23;i_27 += 1) /* same iter space */
                {

                    for (int i_28 = 0; i_28 < 24;i_28 += 1)
                    {
                        var_72 = (min(var_72, (arr_81 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_73 *= (((((arr_6 [i_27 - 1] [i_27]) ? (arr_6 [i_27 + 1] [i_27]) : 31457280)) > 4));
                        arr_95 [i_10] [i_20] [i_10] [i_10] = (min(var_7, 2858897863));
                        var_74 = (max(var_74, ((((~-113) && ((max(127, -16964))))))));
                    }
                    var_75 = (((arr_68 [i_0] [i_0] [i_10]) ? (((arr_21 [i_20] [i_20] [i_20] [i_20 - 1] [i_10] [i_20] [i_20 + 2]) ? var_1 : (arr_68 [i_10] [i_20 + 1] [i_10]))) : (var_8 || var_10)));
                }
                for (int i_29 = 0; i_29 < 24;i_29 += 1)
                {
                    var_76 = var_16;

                    for (int i_30 = 0; i_30 < 24;i_30 += 1)
                    {
                        var_77 = (min(((-(arr_67 [i_0] [i_30] [i_20 + 1]))), (3 / 1)));
                        var_78 = (min(var_78, (((~((-22226 + ((var_17 ? var_7 : var_15)))))))));
                    }
                }

                for (int i_31 = 0; i_31 < 24;i_31 += 1)
                {
                    var_79 &= (((((((((arr_102 [i_31]) ? var_0 : var_7))) ? ((var_1 ? var_14 : (arr_36 [i_31] [i_31] [i_31]))) : -4867))) ? ((var_5 ? var_14 : var_0)) : var_9));
                    var_80 = (((((-(~237)))) ? (arr_32 [i_20] [i_10] [i_0]) : ((min((arr_29 [i_20 + 1] [i_10] [i_20 + 1]), (arr_29 [i_20 + 1] [i_10] [i_0]))))));
                }
                var_81 = (max(var_81, (~var_17)));
            }
            for (int i_32 = 0; i_32 < 24;i_32 += 1)
            {
                arr_107 [i_10] [i_10] = (~var_0);
                var_82 = (max(var_82, ((min(var_2, (min((var_4 / var_3), (max(var_3, -125216319)))))))));
            }
            var_83 = ((arr_36 [i_0] [i_0] [i_0]) ? (max((arr_52 [i_0] [i_10] [i_0] [i_0] [i_10]), (arr_36 [i_0] [i_0] [i_0]))) : (arr_36 [i_0] [i_10] [i_10]));
            var_84 = var_5;
        }
        var_85 &= ((144115188075855872 * 8) ? (((max(-30776, 127)))) : ((var_1 ? (((max(var_10, 1)))) : (max(20, 0)))));
    }
    #pragma endscop
}
