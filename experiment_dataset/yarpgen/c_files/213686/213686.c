/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (arr_1 [i_0 + 2])));
        var_20 = var_9;
        var_21 += (~-9036);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (arr_5 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_2] [i_3] = 1;
                    var_23 = (((((11 && (-112309974 && var_5)))) << ((((-(min(var_17, 0)))) - 8))));
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_24 = ((((((55 & var_3) | var_3))) ? ((~((((arr_1 [i_4]) || 1))))) : ((~(arr_9 [i_4 - 1])))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_16 [i_5] [i_4] [i_4] = var_3;
            arr_17 [i_4] [i_4] [i_4] = ((((min(var_0, (arr_4 [i_4])))) & -9012));

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_25 -= (min(((max((((var_15 < (arr_0 [i_6] [i_4])))), (max((arr_19 [i_4] [i_5] [i_6]), 1))))), (((arr_12 [i_6]) & -9012))));
                arr_21 [i_4] = (min((((+(((arr_4 [i_5]) + var_3))))), (max(((max(-112, var_17))), (min(var_14, var_17))))));
            }
            for (int i_7 = 4; i_7 < 19;i_7 += 1)
            {
                var_26 = (min(var_26, ((((arr_18 [14]) && (((-(arr_15 [10])))))))));
                var_27 = (min(var_27, ((max(var_6, 18115130920693765776)))));
                arr_24 [i_4] [i_5] [i_4] [i_7] = (((~(~var_17))));
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_28 = (max(var_28, ((((((arr_18 [i_8]) && 14759)) ? (~331613153015785839) : (((arr_18 [i_8]) ? var_14 : 1)))))));
                var_29 -= (((1 ? 62 : 3580)));
                var_30 = ((((arr_14 [i_5] [i_4 + 1]) ? 31683 : (112 / var_11))) >= ((((9029 ? var_13 : (arr_13 [i_4] [i_5]))) * var_16)));
                arr_27 [i_4] = (arr_11 [i_4]);

                /* vectorizable */
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    var_31 = (max(var_31, var_6));
                    arr_30 [i_4] = var_3;
                    var_32 = 1;
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {

                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        arr_36 [i_4] [i_5] [i_10] [i_4] [i_11] [i_8] [i_8] = (max(var_9, (!-30528)));
                        var_33 = var_11;
                        var_34 += ((+(((arr_28 [i_4 + 2]) ^ var_16))));
                    }
                    for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        arr_40 [i_4] [i_4] [i_8] [i_10] [i_12] = (((var_4 ? var_13 : 642854058)));
                        arr_41 [i_4] [i_5] [i_8] [i_4] [i_12] = (5763883165278592412 - 1);
                    }
                    for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        var_35 = (min(var_35, (103 - var_16)));
                        arr_46 [i_8] [i_5] [i_8] [i_4] [i_4] [i_8] [i_4] |= (arr_20 [i_8] [i_8]);
                    }
                    var_36 = (((-(((arr_15 [i_4]) * var_8)))));
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 20;i_14 += 1)
                {
                    var_37 = ((466306005 ? (arr_44 [i_4] [i_4] [i_4] [i_4 - 2] [i_14 + 1] [i_14] [i_14]) : (arr_44 [i_4] [i_4] [i_4] [i_4 + 1] [i_14 + 1] [i_14] [i_14])));

                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        var_38 = -var_1;
                        var_39 = var_1;
                        var_40 = (max(var_40, (arr_0 [i_4 - 2] [i_4 - 2])));
                    }
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        var_41 = (max(var_41, 0));
                        arr_56 [i_4] = var_5;
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_42 = (((arr_25 [i_4] [i_4] [i_4] [i_14 + 1]) * (var_6 * var_0)));
                        var_43 |= -19963;
                        var_44 *= (1 >= 22);
                        arr_59 [i_4] [i_5] [i_8] [i_14] [i_4] = (((arr_18 [i_4]) < (arr_45 [i_4 + 2] [i_4 - 1] [i_4] [i_4] [i_14 + 1])));
                    }
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        var_45 = (min(var_45, ((var_7 / (arr_28 [i_14 + 1])))));
                        var_46 |= ((-(arr_54 [i_14] [i_14] [i_14] [i_14] [i_14 - 1])));
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            arr_66 [i_4] [i_19] = ((max(1580666312678753717, 11471964136197673677)));
            arr_67 [i_4] [i_19] [i_4] = arr_43 [i_4] [i_4] [i_19] [i_19] [i_19] [i_19] [i_19];
        }
        for (int i_20 = 0; i_20 < 21;i_20 += 1) /* same iter space */
        {
            arr_72 [i_4] = 1;
            var_47 = 1580666312678753721;
            arr_73 [i_4] [i_4] [i_4] = (var_8 >> 1);
            arr_74 [i_4] [i_20] = ((((0 == (arr_25 [i_4 + 2] [i_4] [i_4 - 2] [i_4 - 1]))) ? (0 < var_9) : (-12 + 6)));
        }
        for (int i_21 = 0; i_21 < 21;i_21 += 1) /* same iter space */
        {
            var_48 = (max(var_48, (((~(4294967295 % 1))))));
            arr_77 [i_4] [i_4] [i_4] = var_12;
            var_49 = ((19 == (1 % 103)));
        }
        /* LoopNest 2 */
        for (int i_22 = 1; i_22 < 19;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                {
                    arr_83 [i_4] [i_4] [i_23] = var_4;
                    arr_84 [i_4] [i_23] = (max((0 % 6), ((var_4 ? (arr_32 [i_23]) : 1))));
                }
            }
        }
        var_50 |= ((!(!0)));
    }
    for (int i_24 = 1; i_24 < 10;i_24 += 1)
    {
        var_51 *= (arr_57 [i_24] [i_24] [i_24]);

        for (int i_25 = 0; i_25 < 13;i_25 += 1)
        {
            var_52 = (min(var_52, (arr_81 [i_24 - 1] [i_25] [i_24] [i_24])));
            var_53 += ((((((arr_19 [i_24] [i_25] [i_25]) ? ((var_6 ^ (arr_58 [i_24] [i_25]))) : (max((arr_39 [i_24] [i_24] [i_25]), var_11))))) ? (((!((max((arr_13 [i_25] [i_25]), var_5)))))) : (var_8 & var_2)));
            var_54 = (max((min(1, 4294967284)), 1));
            arr_91 [i_24] [i_25] = var_0;
        }
        for (int i_26 = 0; i_26 < 13;i_26 += 1)
        {
            var_55 ^= var_12;

            for (int i_27 = 2; i_27 < 9;i_27 += 1)
            {
                var_56 = (max(var_56, ((((~(~2973084568721061958))) ^ (arr_62 [i_24] [i_26] [i_27] [i_26] [i_26] [i_24] [i_27])))));
                var_57 *= ((~(var_8 >= var_5)));
            }
        }
        /* LoopNest 2 */
        for (int i_28 = 0; i_28 < 13;i_28 += 1)
        {
            for (int i_29 = 0; i_29 < 0;i_29 += 1)
            {
                {
                    arr_103 [i_24] [i_28] [i_24] = var_1;
                    var_58 += -1;

                    /* vectorizable */
                    for (int i_30 = 0; i_30 < 13;i_30 += 1)
                    {
                        var_59 = (min(var_59, 1));
                        var_60 *= ((25643 ? -120 : (arr_9 [i_24])));
                        var_61 = (min(var_61, (((100 + (arr_3 [i_24 + 1]))))));
                        arr_106 [i_29] [i_24] [i_29] [i_29] [i_29] [i_29] = ((-3 / (arr_37 [i_24] [i_28] [i_28] [i_29] [i_29] [i_30] [i_30])));
                    }
                    var_62 += (-(((((((arr_9 [i_24]) * var_9))) == (arr_33 [i_29 + 1] [i_24 + 3])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_31 = 2; i_31 < 9;i_31 += 1)
        {
            for (int i_32 = 2; i_32 < 12;i_32 += 1)
            {
                {
                    arr_111 [i_24] [i_31] [i_24] = ((1 ? 9011 : 33));
                    var_63 *= ((var_11 >= ((~(max((arr_79 [i_24] [i_31] [i_31]), -22))))));
                }
            }
        }
    }
    #pragma endscop
}
