/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(var_0, var_13);
    var_15 = 5167830366184879177;
    var_16 = ((var_0 * ((max(var_13, var_13)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((-((max(var_3, var_12)))));
        var_18 = (min(var_18, (((~((max(-30804, 252))))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_19 = (((max((arr_3 [i_1 + 1]), (arr_3 [i_1 + 2]))) <= (arr_3 [i_1 + 3])));

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_20 = (max(var_20, var_10));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_21 = 22;
                            arr_13 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 2] [i_1 + 3] [i_1] = -10424;
                            arr_14 [i_5] [i_3] [i_1] [i_3] [i_2] [i_1] = (((arr_12 [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 3] [i_1] [i_1] [i_1]) << (arr_12 [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 + 2])));
                        }
                    }
                }
            }
            var_22 = (max(var_22, (arr_0 [i_1])));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            arr_18 [i_1] [i_6] [i_6] = (((max((((arr_4 [i_1] [i_1] [i_1]) ? var_5 : var_4)), var_10)) > ((((max(var_2, (arr_7 [i_1] [i_1] [i_6]))) > var_13)))));

            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                var_23 = ((((~((max(var_8, var_9))))) ^ ((max((arr_0 [i_7 - 2]), (arr_0 [i_6]))))));
                arr_21 [i_1] [i_6] [i_1] = ((((!(arr_5 [i_7] [i_7 + 1]))) ? (((!(arr_8 [i_7 - 1] [i_7 - 1] [i_7 - 2])))) : ((((((arr_20 [i_1] [i_6] [i_7]) ? var_1 : (arr_8 [i_1] [i_6] [i_7])))) ? (arr_20 [i_7 + 2] [i_7 + 2] [i_7]) : (arr_12 [i_1 + 1] [i_6] [i_1 + 1] [i_7] [i_7] [i_7 - 1] [i_7 - 1])))));

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_24 &= (((((var_5 ? var_2 : var_6))) ? (((arr_20 [i_1 + 2] [i_6] [i_8]) ? (arr_22 [i_6] [i_7] [i_7] [i_8] [i_7] [i_8]) : (arr_20 [i_1 + 2] [i_6] [i_7]))) : ((var_3 ? 20525 : (arr_20 [i_6] [i_7 - 1] [i_8])))));
                    var_25 *= min((max((arr_15 [i_1 - 1]), var_6)), ((min((arr_15 [i_1 + 1]), (arr_15 [i_1 + 1])))));
                    var_26 = max(243, var_0);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                {
                    var_27 = (max(var_27, (((63488 - (arr_12 [i_1] [i_1] [i_6] [i_6] [i_7] [i_7 + 2] [i_9]))))));

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_28 = (max(var_28, (arr_6 [i_1] [i_6] [i_7])));
                        var_29 += var_3;
                        var_30 = var_3;
                    }
                }
                for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                {
                    var_31 = (min(((min((arr_34 [i_1 + 2] [i_7 + 1] [i_7] [i_11]), (arr_34 [i_1 + 2] [i_7 + 1] [i_11] [i_11])))), (max(var_1, (arr_34 [i_1 - 1] [i_7 + 1] [i_7] [i_7 + 2])))));
                    arr_35 [i_1] [i_7] [i_11] = (((201 < 20) * (14893335928759121583 >= -27370)));
                    var_32 = arr_25 [i_1] [i_1] [i_7] [i_7] [i_7];
                    var_33 = (arr_31 [i_6] [i_11] [i_7] [i_11] [i_6]);
                }
            }
            for (int i_12 = 3; i_12 < 17;i_12 += 1)
            {
                var_34 = (max(var_34, ((min(245, 83)))));
                arr_38 [i_12] [i_12] [i_12] [i_12 - 1] = (min(234, 234));
            }
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            var_35 = (min((((!(arr_28 [i_13] [i_1] [i_13] [i_1] [i_13] [i_1])))), (max(189, (arr_23 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 - 1])))));
            arr_41 [i_1] [i_13] [i_13] = (max(30297, 252));
        }
    }

    /* vectorizable */
    for (int i_14 = 2; i_14 < 18;i_14 += 1) /* same iter space */
    {
        var_36 = 48;
        var_37 = ((!(arr_45 [i_14 - 1] [i_14 + 1])));
        var_38 = ((-(arr_43 [i_14 - 1])));
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 18;i_15 += 1) /* same iter space */
    {
        var_39 = var_2;
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                {
                    var_40 = ((((((arr_43 [i_17]) ? var_11 : (arr_42 [i_15])))) % ((248 ? 22 : -10))));
                    arr_54 [i_15] = (((((4202464597931035208 ? -1492 : 24))) ? 1748597828996793309 : (((25571 ? (arr_46 [i_15]) : var_6)))));
                    var_41 = var_3;
                    var_42 = (((arr_42 [i_15 - 1]) / var_2));
                    var_43 = (arr_43 [i_17]);
                }
            }
        }

        for (int i_18 = 0; i_18 < 0;i_18 += 1)
        {

            for (int i_19 = 1; i_19 < 18;i_19 += 1)
            {
                var_44 = (min(var_44, (((-(var_8 > var_6))))));

                for (int i_20 = 3; i_20 < 16;i_20 += 1)
                {
                    arr_62 [i_15] [i_15] [i_18] [i_15] [i_20] = var_8;
                    var_45 = (arr_53 [i_15] [i_19] [i_20]);
                }
            }
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                arr_66 [i_15] [i_18 + 1] [i_18 + 1] = -var_11;
                var_46 = ((-(arr_52 [i_15 - 2] [i_18 + 1])));
                var_47 = ((~(!var_5)));
                var_48 = (((arr_63 [i_15] [i_15 - 1] [i_18 + 1] [i_15]) ? (arr_63 [i_15] [i_15 + 1] [i_18 + 1] [i_21]) : (arr_63 [i_15] [i_15 - 2] [i_18 + 1] [i_21])));
            }
            for (int i_22 = 1; i_22 < 18;i_22 += 1)
            {
                arr_69 [i_18] = ((~(arr_47 [i_22 + 1])));
                var_49 = (max(var_49, (((((var_12 ? (arr_45 [i_15] [i_15]) : -253927458233743414)) - var_2)))));
            }
            arr_70 [i_18] &= var_2;
        }
        for (int i_23 = 0; i_23 < 19;i_23 += 1)
        {
            arr_73 [i_15 + 1] [i_15] = (!176);
            arr_74 [i_15] [i_23] [i_23] = (arr_46 [i_15 - 2]);
        }
        for (int i_24 = 0; i_24 < 19;i_24 += 1)
        {
            var_50 = ((((((arr_0 [i_15]) > (arr_50 [i_15] [i_24] [i_24])))) <= -1339219399));

            for (int i_25 = 0; i_25 < 19;i_25 += 1)
            {
                arr_80 [i_15] [i_24] [i_25] = (arr_65 [i_15] [i_24] [i_25]);
                var_51 = var_3;
                arr_81 [i_15] [i_15] = 1;
            }
            for (int i_26 = 1; i_26 < 17;i_26 += 1)
            {
                var_52 = (max(var_52, 1));
                var_53 = (max(var_53, (!var_6)));
                arr_85 [i_15] [i_24] [i_26 + 2] = ((3690 ? 7736192478925950378 : 1892129408));
                arr_86 [i_15] [i_24] [i_24] = (arr_48 [i_24]);
            }
            arr_87 [i_15] [i_15] [i_15] = (arr_53 [i_15 - 2] [i_24] [i_24]);
        }
        for (int i_27 = 0; i_27 < 19;i_27 += 1)
        {
            var_54 = (max(var_54, var_4));
            var_55 = var_0;
            var_56 = (min(var_56, (arr_43 [i_15])));
        }
        var_57 = ((var_7 ? (arr_59 [i_15] [i_15] [i_15 + 1]) : (arr_57 [i_15] [i_15] [i_15] [i_15])));
    }
    /* vectorizable */
    for (int i_28 = 0; i_28 < 19;i_28 += 1)
    {
        arr_95 [i_28] [i_28] = (arr_61 [i_28] [i_28] [i_28] [i_28] [i_28]);
        var_58 *= ((229 ? -29140 : 7912));
        var_59 = ((~(arr_64 [i_28] [i_28] [i_28] [i_28])));
        var_60 = ((-((var_7 ? -20531 : var_10))));
    }
    #pragma endscop
}
