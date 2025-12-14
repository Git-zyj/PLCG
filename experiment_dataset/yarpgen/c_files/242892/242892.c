/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-var_2 * (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    arr_10 [i_3] [i_1] [i_2] [i_3 + 2] = var_2;
                    var_19 = (+-1);
                    var_20 = ((~((~(~1)))));
                    var_21 = ((-((~(arr_6 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_1])))));
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_14 [i_4] [i_1] = (-48 + 215);
                    arr_15 [i_4] [i_2] [i_1] [i_0] = ((!(((~(arr_12 [i_0] [i_1] [i_2] [i_4] [i_1] [i_0]))))));
                    arr_16 [i_1] [i_1] = arr_0 [i_2];
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] = var_12;

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_22 = -var_7;
                        arr_25 [i_5] [i_2] = ((((~(arr_11 [i_5] [i_2] [i_1] [i_0]))) / var_9));
                        var_23 = ((arr_21 [i_0] [i_1] [i_2] [i_5] [i_6]) != (!var_1));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_28 [i_0] = var_2;
                        var_24 += ((!((((arr_24 [i_7] [i_2] [i_0]) & var_7)))));
                        arr_29 [i_0] [i_1] [i_2] [i_5] [i_1] = (arr_2 [i_1]);
                        var_25 = (~var_6);
                    }
                }
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    var_26 = (arr_17 [i_0] [i_1] [i_2] [i_2] [i_8]);
                    arr_33 [i_0] [i_1] [i_2] [i_1] [i_2] = (~var_13);

                    for (int i_9 = 4; i_9 < 19;i_9 += 1)
                    {
                        var_27 = var_9;
                        arr_36 [i_2] = (!var_1);
                    }
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        arr_39 [i_10] [i_2] [i_10] [i_10] [i_10 - 1] = ((-(arr_5 [i_0] [i_0])));
                        var_28 = ((~(arr_2 [i_0])));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_44 [i_0] [i_1] = ((var_5 || (!var_5)));
                        arr_45 [i_11] = (((~(arr_6 [i_8] [i_8] [i_8] [i_8]))));
                        arr_46 [i_11] [i_8] [i_2] [i_0] [i_0] = ((-(((!(!508))))));
                    }
                    arr_47 [i_8] [i_2] [i_1] [i_0] [i_0] = var_14;
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    var_29 *= -var_7;
                    arr_51 [i_0] [i_1] = arr_48 [i_2];
                }
            }
            var_30 ^= var_14;
            arr_52 [i_0] = (arr_32 [i_0] [i_0] [i_1] [i_1]);

            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                var_31 |= var_5;
                var_32 = var_11;
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                arr_59 [i_14] [i_1] [i_0] [i_0] = ((-(arr_11 [i_14] [i_1] [i_1] [i_0])));
                var_33 = ((-(!var_15)));
                var_34 = (arr_31 [i_14] [i_14] [i_1] [i_0] [i_0]);
            }
            for (int i_15 = 2; i_15 < 19;i_15 += 1)
            {
                arr_64 [i_0] [i_1] |= ((~(~var_3)));
                arr_65 [i_15 - 1] [i_0] = (arr_34 [i_15] [i_15] [i_15] [i_15] [i_15 - 2] [i_15 - 1] [i_0]);
                var_35 -= (arr_27 [i_0] [i_0] [i_1] [i_1] [i_15 + 1] [i_15] [i_15 + 1]);
                arr_66 [i_15 - 1] |= -var_14;
                var_36 |= ((!((!(((arr_12 [i_0] [i_0] [i_0] [i_1] [i_15] [i_15]) || var_7))))));
            }
        }
        arr_67 [i_0] [i_0] = (!91);
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        arr_70 [i_16] = arr_35 [i_16] [i_16] [i_16] [i_16] [i_16];
        arr_71 [i_16] = (((arr_62 [i_16] [i_16] [i_16] [i_16]) || -var_0));
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 14;i_17 += 1)
    {
        arr_74 [i_17 + 1] = (arr_31 [i_17] [i_17] [i_17 - 1] [i_17] [i_17 + 1]);
        var_37 = ((-(!var_0)));
        arr_75 [i_17] [i_17] = ((!(arr_24 [i_17] [i_17] [i_17 - 1])));
    }

    for (int i_18 = 0; i_18 < 23;i_18 += 1)
    {
        arr_78 [i_18] = (((((~(~-816004280682770407)))) && (!var_7)));

        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
        {
            arr_81 [i_19] [i_19] [i_18] = (arr_77 [i_18] [i_19]);

            /* vectorizable */
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {

                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    var_38 = (arr_79 [i_21] [i_19]);
                    arr_88 [i_19] = ((-(arr_79 [i_18] [i_21])));
                    arr_89 [i_21] [i_19] [i_19] [i_18] = var_3;
                    var_39 = (+-0);
                }
                arr_90 [i_20] [i_19] [i_18] [i_20] &= ((-((-(arr_87 [i_18] [i_19] [i_20])))));

                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    arr_93 [i_20] [i_19] = (!var_16);
                    var_40 = -29534;
                }
                for (int i_23 = 1; i_23 < 22;i_23 += 1)
                {
                    arr_97 [i_18] [i_19] [i_19] [i_20] [i_20] [i_19] = (!(arr_91 [i_23 - 1] [i_20] [i_19] [i_23]));
                    arr_98 [i_18] [i_19] [i_19] [i_23] = (arr_91 [i_19] [i_20] [i_23 + 1] [i_23]);
                }
                for (int i_24 = 3; i_24 < 20;i_24 += 1)
                {
                    arr_101 [i_18] [i_19] [i_19] [i_24] = 22263;
                    var_41 += var_16;
                    arr_102 [i_19] [i_19] [i_19] [i_20] = (arr_86 [i_18] [i_18] [i_24 + 2] [i_24 + 2] [i_24 + 2]);
                }
            }
            for (int i_25 = 0; i_25 < 23;i_25 += 1) /* same iter space */
            {
                var_42 = (min(var_42, -86));
                arr_107 [i_18] [i_19] = ((-(arr_86 [i_18] [i_18] [i_19] [i_19] [i_25])));
                arr_108 [i_18] [i_19] [i_25] = var_13;
            }
            for (int i_26 = 0; i_26 < 23;i_26 += 1) /* same iter space */
            {
                var_43 = (max(var_43, (((var_13 + (((arr_83 [i_18] [i_19] [i_26]) - var_8)))))));
                arr_111 [i_19] [i_18] = ((+(((arr_82 [i_26] [i_19]) + var_7))));
                var_44 = var_10;
            }
            arr_112 [i_19] [i_19] = ((!(((-(arr_106 [i_19] [i_18] [i_18] [i_18]))))));
        }
        /* vectorizable */
        for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
        {
            arr_115 [i_27] [i_27] = ((var_9 + (~var_18)));
            var_45 = var_6;
            arr_116 [i_27] [i_27] [i_27] = (arr_100 [i_27]);
            var_46 |= 1;

            for (int i_28 = 0; i_28 < 23;i_28 += 1)
            {
                var_47 = (arr_77 [i_18] [i_28]);
                var_48 = (max(var_48, (((((~(arr_113 [i_18] [i_18] [i_28]))) % var_17)))));
            }
        }
        for (int i_29 = 0; i_29 < 23;i_29 += 1)
        {
            arr_124 [i_18] [i_29] = (((((var_14 >> (var_8 - 17110)))) * var_16));
            arr_125 [i_29] [i_18] [i_18] = (arr_118 [i_18] [i_29] [i_29]);
            arr_126 [i_18] = ((-((~(arr_105 [i_18] [i_29] [i_29] [i_29])))));
        }
    }
    for (int i_30 = 0; i_30 < 21;i_30 += 1)
    {
        var_49 = (-((-(arr_103 [i_30] [i_30] [i_30]))));
        arr_130 [i_30] [i_30] = ((-((-(arr_129 [i_30])))));
        arr_131 [i_30] [i_30] = (arr_91 [i_30] [i_30] [i_30] [i_30]);
        arr_132 [i_30] = (arr_77 [i_30] [i_30]);
    }
    for (int i_31 = 0; i_31 < 12;i_31 += 1)
    {
        var_50 = (min(var_50, (!var_1)));
        var_51 *= ((!(arr_62 [i_31] [i_31] [i_31] [i_31])));
    }
    var_52 = (var_9 / var_8);

    /* vectorizable */
    for (int i_32 = 0; i_32 < 17;i_32 += 1)
    {

        for (int i_33 = 0; i_33 < 17;i_33 += 1)
        {
            arr_142 [i_32] [i_33] [i_33] = (arr_7 [i_33]);
            var_53 *= var_12;
        }
        for (int i_34 = 2; i_34 < 13;i_34 += 1)
        {
            var_54 = ((-((-(arr_32 [i_32] [i_34] [i_32] [i_34])))));
            arr_146 [i_32] [i_34] = (((-(arr_40 [i_32] [i_32] [i_32] [i_34] [i_34 - 1] [i_34 - 2]))));

            for (int i_35 = 4; i_35 < 14;i_35 += 1)
            {

                for (int i_36 = 0; i_36 < 17;i_36 += 1)
                {
                    arr_151 [i_35] = (!var_9);
                    var_55 = -var_11;
                    var_56 = -var_18;
                }
                var_57 &= var_2;
                arr_152 [i_32] [i_34] [i_35 + 3] [i_35] = ((arr_76 [i_35 + 3]) < (((!(arr_100 [i_34])))));
            }
            for (int i_37 = 4; i_37 < 13;i_37 += 1)
            {
                arr_156 [i_37] = (~var_10);
                arr_157 [i_32] [i_34] [i_37] = (!var_15);
            }
            for (int i_38 = 2; i_38 < 15;i_38 += 1)
            {
                arr_160 [i_32] [i_38] [i_38] [i_38] = ((!((!(arr_55 [i_32])))));
                arr_161 [i_32] [i_34] [i_38] [i_38] = (arr_92 [i_34]);
            }
            var_58 = var_8;
            var_59 = (max(var_59, (((-(var_10 - var_9))))));
        }
        arr_162 [i_32] = var_0;
        arr_163 [i_32] = (arr_22 [i_32] [i_32] [i_32] [i_32] [i_32]);
    }
    #pragma endscop
}
