/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (max(var_13, ((((~45059) ? var_6 : 1397274333)))));
        arr_4 [i_0] = (max((((!353925614) ? 399749387 : (arr_1 [i_0]))), (arr_1 [i_0])));
        arr_5 [i_0] [i_0] = ((!(((var_11 ? ((min(22679, var_10))) : var_2)))));
        arr_6 [i_0] [5] = (((-((max(246, 18730))))));
    }

    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_14 = -var_4;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_18 [i_3] [i_2 - 2] [i_3] &= (~var_7);
                        arr_19 [i_2] [i_2] = (~var_2);
                    }
                }
            }
            var_15 = (min(var_15, (((-26977 ? var_2 : ((2684825095 ? 1 : 83)))))));
            arr_20 [i_2] = var_12;
            arr_21 [i_2] [i_2] [i_1] = ((var_2 ? var_7 : (!1)));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            arr_26 [4] [4] = (~18730);
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_16 |= -var_10;
                            arr_33 [i_1] [i_6] [i_7] [i_8] [i_7] = ((-(max(var_6, ((min((arr_16 [i_1 - 1] [i_1 - 1] [i_6] [i_6 - 1] [i_6]), var_8)))))));
                            var_17 = ((var_2 ? ((~((var_2 ? var_7 : var_6)))) : ((min(((1 ? var_11 : var_3)), -28)))));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {
            arr_38 [i_9] [i_1] = -2520;
            var_18 = ((((max(-952833189, -399749388))) ? ((max(-17, (arr_11 [i_9])))) : (min((~var_7), (arr_28 [i_1] [i_1] [i_9])))));

            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                var_19 = var_8;

                for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    arr_44 [i_1] &= 9908978815955180257;

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_20 += ((var_7 ? 22906 : 54));
                        arr_47 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] &= (((~var_12) ? ((var_2 ? ((1 ? var_3 : -3756)) : -var_3)) : (max((((var_1 ? 3164259651 : (arr_9 [i_11])))), (min((arr_29 [i_12] [i_11] [i_9] [i_9] [i_1 + 1]), var_5))))));
                        var_21 = (!-20567);
                        var_22 = (arr_10 [i_11] [i_11]);
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        var_23 += ((~(max((arr_36 [i_1] [i_1] [i_10 - 1]), ((var_11 ? 1 : 2798860524))))));
                        arr_51 [i_1] [i_9] [i_10] [i_10] [i_10] [i_13] [i_13] = 20961;
                        var_24 &= 85;
                    }
                    for (int i_14 = 3; i_14 < 13;i_14 += 1)
                    {
                        var_25 = (((((145 ? 1 : 18730))) ? (((((10330 ? var_12 : 8606))) ? 1 : var_1)) : (((((~(arr_39 [i_11] [14] [i_9])))) ? (((min((arr_49 [i_1] [2] [i_10] [i_10] [i_14]), 1)))) : ((1 ? 9747 : 4072339067))))));
                        arr_56 [i_1] [9] [i_10 - 1] [i_14] [i_14] = (arr_42 [i_1] [1]);
                        var_26 = var_0;
                    }
                    for (int i_15 = 2; i_15 < 14;i_15 += 1)
                    {
                        var_27 = var_11;
                        var_28 = 22857;
                        var_29 = max((!var_7), (arr_57 [i_1 + 1] [i_1 + 1] [i_10] [i_10] [9] [i_15]));
                        arr_59 [i_10] [6] [i_10] [i_1] [i_1] = 340864854;
                    }
                    var_30 = (((arr_29 [i_1] [i_9] [i_1] [i_1] [i_9]) ? var_10 : ((~(~-9690)))));
                }
                for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
                {
                    var_31 = (min(var_12, (arr_29 [11] [11] [11] [i_16] [i_1])));
                    var_32 = (1 ? 954703828 : 20567);
                    var_33 = (max(1384210114, (min((arr_29 [i_1 - 1] [i_10] [i_10] [4] [i_1 - 1]), -81))));
                }
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    var_34 = (((~1) ? ((var_7 ? -var_10 : ((var_3 ? var_8 : (arr_10 [6] [i_17]))))) : ((max((max(var_10, 18)), (arr_37 [i_1] [i_9] [1]))))));
                    arr_66 [i_17] = ((((max(((max(-61, 95))), var_1))) ? var_6 : (arr_27 [i_9])));
                    var_35 += var_2;
                    var_36 *= arr_24 [i_9] [i_10] [i_17];
                }
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    arr_70 [i_1] [i_1] [4] [i_18] = (~var_9);
                    arr_71 [i_1] [i_1] = (min(var_3, (arr_23 [i_1] [i_9] [i_10])));
                }
            }
            var_37 |= (arr_10 [i_1] [2]);
        }
        arr_72 [i_1] = ((var_7 ? (((22857 ? 929364302 : -121))) : 12726871761878296375));
    }
    /* vectorizable */
    for (int i_19 = 2; i_19 < 22;i_19 += 1)
    {
        var_38 = var_4;
        arr_76 [i_19] = (arr_74 [i_19]);
    }
    for (int i_20 = 0; i_20 < 23;i_20 += 1)
    {
        var_39 &= (arr_73 [i_20] [i_20]);
        var_40 = 51;
        var_41 &= (arr_74 [i_20]);
        var_42 = (min((((!(((var_12 ? var_5 : (arr_73 [i_20] [i_20]))))))), 2646338081));
        var_43 = (~var_1);
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 22;i_21 += 1)
    {

        for (int i_22 = 0; i_22 < 22;i_22 += 1)
        {
            arr_84 [i_22] [i_22] = 1710477148;
            var_44 = (max(var_44, 1260849998432536923));
            arr_85 [i_22] [i_22] [i_21] = ((~(((arr_81 [i_21]) ? (arr_73 [i_21] [i_21]) : 45))));
        }
        for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
        {

            for (int i_24 = 0; i_24 < 22;i_24 += 1) /* same iter space */
            {
                var_45 = (arr_87 [i_21]);
                var_46 = ((((((arr_81 [i_21]) ? 9 : 185))) ? var_8 : var_2));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 22;i_25 += 1)
                {
                    for (int i_26 = 1; i_26 < 20;i_26 += 1)
                    {
                        {
                            var_47 += (arr_94 [i_24] [i_26] [i_24] [10] [i_26 - 1] [20]);
                            var_48 -= var_5;
                            arr_95 [i_21] [i_23] [i_23] [i_25] = (((arr_93 [i_26] [i_21] [i_25] [i_25] [i_21] [9] [i_21]) ? var_12 : (((var_0 ? (arr_80 [i_21]) : var_2)))));
                            var_49 = ((var_7 ? var_0 : ((~(arr_93 [i_21] [i_21] [i_21] [i_25] [i_21] [i_25] [i_23])))));
                        }
                    }
                }
            }
            for (int i_27 = 0; i_27 < 22;i_27 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_28 = 3; i_28 < 20;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 22;i_29 += 1)
                    {
                        {
                            var_50 += -8275165137889673977;
                            var_51 = 94;
                            var_52 = (((arr_94 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]) ? var_4 : (arr_96 [i_21] [i_27] [i_29])));
                            var_53 = ((+((6870 ? (arr_78 [i_21]) : var_10))));
                        }
                    }
                }
                var_54 |= var_9;
                arr_103 [i_27] [i_23] [i_23] [i_21] = 4245783355;
            }
            for (int i_30 = 0; i_30 < 22;i_30 += 1) /* same iter space */
            {
                var_55 = (max(var_55, ((2995864485903186902 ? (((13249460393104397727 ? (arr_82 [1] [i_23] [i_30]) : var_0))) : (((arr_99 [i_30]) ? (arr_97 [i_21] [i_23] [i_21]) : (arr_87 [i_21])))))));
                var_56 = ((103 ? (((var_3 ? 832544544 : var_7))) : (arr_98 [i_30])));
                var_57 = (arr_74 [i_21]);
                arr_106 [i_21] [10] [i_23] [i_30] = var_3;
            }
            var_58 = ((arr_83 [16] [i_23] [i_23]) ? var_9 : (arr_74 [i_21]));
            /* LoopNest 3 */
            for (int i_31 = 0; i_31 < 22;i_31 += 1)
            {
                for (int i_32 = 2; i_32 < 21;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 22;i_33 += 1)
                    {
                        {
                            var_59 = var_8;
                            var_60 = (max(var_60, -8841778196944002708));
                            var_61 = ((((((arr_109 [i_21] [i_32] [i_32]) ? var_4 : (arr_107 [i_21] [i_21] [i_31] [i_33])))) ? (((var_0 ? var_7 : -16217))) : var_1));
                        }
                    }
                }
            }
        }
        for (int i_34 = 0; i_34 < 1;i_34 += 1) /* same iter space */
        {
            var_62 = -24;
            arr_118 [i_34] = (((((var_5 ? -66 : 27342))) ? ((var_12 ? 3223 : var_1)) : 3331406761));
            var_63 ^= (-var_1 ? 97 : 8841778196944002716);
            var_64 = (arr_86 [i_21] [i_21] [i_21]);
            var_65 = ((var_2 ? (arr_112 [i_21] [i_34] [i_34] [i_21] [i_21] [i_21] [i_21]) : (!var_4)));
        }
        var_66 = (arr_87 [i_21]);
        var_67 = (((((var_6 ? 5730645832683468023 : var_4))) ? var_5 : var_5));
    }
    var_68 = var_6;
    var_69 = (min(var_69, var_6));
    var_70 = (max(var_70, var_7));
    #pragma endscop
}
