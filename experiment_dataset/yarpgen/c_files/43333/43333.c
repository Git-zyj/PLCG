/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_2 / -1);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_6 [i_0] [i_1 + 1] = (min(((min(1, 1))), (((max(var_12, var_3)) ? 1 : var_5))));
            arr_7 [i_0] [i_1] [1] = var_13;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_0] [i_2] = (max((min(var_4, 0)), -0));
            arr_11 [i_2] [i_2] = max(var_11, var_11);
            var_16 *= (max((((!(arr_4 [1] [i_2])))), -var_0));
        }
        arr_12 [i_0] = (min(((min(1, 1))), (max(((max(0, var_4))), ((1 ? 1 : 0))))));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_4] = (!1);
            arr_20 [i_4] [i_4] [i_3] = var_2;
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_23 [i_3] [i_5] = var_4;
            arr_24 [i_3] = (((((max(var_0, var_8)) ? (arr_22 [1]) : 1)) & (((var_12 | 1) ? var_12 : ((min(1, 1)))))));
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_28 [i_6 - 1] [i_3] = (((((max(1, var_1)) ? ((max((arr_16 [i_3]), var_1))) : ((max(1, (arr_25 [i_6 - 1] [i_6])))))) - 1));
            arr_29 [i_6] = (((((1 ? ((1 ? 1 : 1)) : 1))) ? (((-var_6 || (((1 ? var_11 : var_6)))))) : ((min((max(1, 0)), (arr_26 [i_3 + 1] [i_6 - 1] [1]))))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_34 [i_7] = ((+((max(1, (max((arr_18 [1] [i_7] [i_7]), var_2)))))));

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_39 [i_3] [i_3] = (((((-((min(1, var_6)))))) ? ((((var_0 ? var_3 : var_0)))) : (max((~1), ((max(1, 1)))))));
                var_17 *= ((((((arr_35 [i_3 + 1] [i_3 + 1] [i_8]) ? (arr_35 [i_3] [i_3 + 1] [0]) : var_7))) ? ((var_7 ? (arr_35 [i_3] [i_3 + 1] [i_8]) : (arr_35 [i_3 + 1] [i_3 + 1] [i_7]))) : ((min(var_3, (arr_35 [i_3] [i_3 + 1] [i_3]))))));
                arr_40 [i_8] = (min((((max(1, var_13)))), (((min(0, 1))))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_44 [i_3] [i_3] [i_8] [i_8] = (!1);
                    arr_45 [i_3] [i_3] [i_7] [i_8] [i_7] [i_7] = 1;

                    for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
                    {
                        arr_48 [i_3] [i_7] [i_8] [i_9] [i_10] = (var_9 / 1);
                        arr_49 [i_3 + 1] [i_3 + 1] [i_8] [i_8] [i_9] [i_10] [i_10] = ((1 ? (((1 == (arr_17 [i_9] [i_7])))) : var_6));
                    }
                    for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
                    {
                        arr_52 [1] [i_9] [i_8] [i_7] [i_7] [1] [1] = 1;
                        arr_53 [i_3] [1] [i_8] [i_9] [1] [1] [i_11] = 1;
                        var_18 *= arr_15 [i_11 + 1];
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_56 [i_3] [i_7] [i_8] [i_12] [i_12] [i_12] = ((var_3 ? ((var_8 ? var_14 : var_14)) : (!var_0)));
                        arr_57 [i_12] [i_7] = (!((!(arr_33 [i_3 + 1]))));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_19 = ((~(~var_12)));
                        var_20 = ((+(((arr_38 [i_7] [i_13]) ? var_12 : 1))));
                        var_21 = ((1 ? 0 : 1));
                    }

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_62 [i_3] [i_14] [i_14] [i_14] = (!1);
                        arr_63 [i_7] [1] [i_14] [i_7] [1] [i_7] [i_7] = 1;
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_72 [i_3] [i_16] [1] [i_3] = (((~(arr_14 [i_3]))));
                            arr_73 [1] [i_16] [i_8] [i_16] [i_16] [i_3 + 1] = var_2;
                            arr_74 [1] [1] [i_16] |= ((var_0 ? (~1) : (~1)));
                        }
                    }
                }
            }

            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                arr_78 [i_3] = ((1 ? (var_3 * 0) : (((((1 ? 1 : 1))) ? (1 * 1) : ((max(var_14, var_10)))))));

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    arr_83 [i_3] [i_7] [i_3] [i_18] [i_18] = min(1, 1);
                    arr_84 [i_18] [i_17 - 1] [i_7] = (max(var_10, (min(var_4, ((1 ? 1 : var_9))))));
                    arr_85 [i_3] [i_3 + 1] = (max((~1), (max(((min(1, 1))), (~var_14)))));
                    arr_86 [i_3 + 1] [i_7] [i_17 - 1] [i_18] [i_3 + 1] = (((max(var_1, 1))));
                }
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {

                    for (int i_20 = 1; i_20 < 1;i_20 += 1)
                    {
                        arr_94 [i_20] [i_20] [i_20] [i_7] [i_20] [i_20] [i_19] = ((((arr_67 [1]) ? var_4 : 1)));
                        arr_95 [i_17] [i_19] [i_20] = (min((((arr_15 [i_3]) ? (~1) : 0)), 1));
                        arr_96 [i_3] [i_20] [i_20] [1] [1] = ((~(((min(var_3, 1)) ? 1 : (!var_3)))));
                    }
                    arr_97 [i_3] [i_7] [i_7] [i_7] [i_17 - 1] = (((max(var_8, (max(1, 1)))) ? (((min(1, 0)))) : (((max(var_4, 0))))));
                }
                var_22 = (((var_1 || 1) ? ((max((min(1, 1)), 1))) : ((((min(var_1, var_14))) - (~1)))));
            }
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                var_23 = (min(var_23, ((max((((!(((1 ? var_10 : 0)))))), -var_12)))));

                /* vectorizable */
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    arr_104 [i_21] [i_21] [i_22] = ((((var_7 ? var_5 : var_9)) | ((1 ? var_4 : 1))));
                    arr_105 [i_3] [i_22] [i_3] [i_3] = var_12;
                }
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    var_24 += var_1;
                    arr_108 [i_3] [i_7] [i_21] [i_23] = ((((max(1, 1)) ? (~var_9) : (!var_10))) <= ((((!var_8) >= var_4))));
                }
                arr_109 [i_3] [i_3] [1] = var_0;
            }
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                arr_112 [i_24] [i_7] [1] = max(1, (max(1, 1)));
                arr_113 [i_7] [i_7] [i_3 + 1] = 0;
                arr_114 [i_7] [1] = (max(((0 - ((min(var_13, var_7))))), var_14));
                arr_115 [i_3] [1] [i_7] [1] = (max(((var_6 ? var_8 : var_1)), 1));
            }
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                arr_119 [i_7] [i_25] = (!(max(1, (min((arr_18 [1] [1] [i_25]), var_6)))));
                arr_120 [i_3 + 1] [i_25] = (((!(max(0, (arr_42 [i_3 + 1] [i_3 + 1] [i_7] [i_25] [i_7]))))) && ((((min((arr_35 [i_25] [i_7] [i_3]), var_2)) ? (((!(arr_106 [1])))) : ((1 ? 1 : 1))))));
            }
        }
        var_25 ^= 1;
        var_26 = (((min(0, 1))) || (min((max(var_1, (arr_106 [1]))), (min(1, 1)))));
        arr_121 [i_3] [i_3 + 1] = (max((((min(var_7, var_1)) ? -var_12 : (((var_1 > (arr_32 [i_3 + 1])))))), var_2));
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 1;i_26 += 1)
    {
        var_27 -= 1;
        arr_124 [i_26] [i_26] = (((var_10 ? 0 : var_8)) >= (arr_87 [1] [i_26] [1] [i_26] [i_26]));
        arr_125 [i_26] [i_26] = ((-((var_12 ? var_12 : (arr_99 [i_26] [1] [1] [i_26])))));
    }
    #pragma endscop
}
