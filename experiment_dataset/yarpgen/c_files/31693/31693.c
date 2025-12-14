/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_21 += (arr_2 [i_0] [i_0]);
            var_22 = (arr_0 [i_0]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_23 = (var_11 != ((-(arr_1 [i_0] [i_0]))));
            var_24 = (max(var_24, ((((((var_5 ? (arr_5 [i_0] [i_2] [i_2]) : (arr_1 [i_2] [1])))) ? ((var_18 ? var_1 : var_17)) : 1)))));
            var_25 = ((1 | (arr_4 [i_0])));

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_26 = (max(var_26, ((!(arr_10 [i_0] [i_0] [1])))));
                            var_27 = 1;
                            var_28 = ((var_15 ? (arr_7 [i_4] [i_0] [i_3] [i_4]) : (((!(arr_10 [i_0] [i_0] [i_0]))))));
                            var_29 = (min(var_29, ((((var_0 | var_17) ? (!var_15) : var_10)))));
                        }
                    }
                }
                var_30 |= (((~var_6) % ((var_7 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_2] [i_2] [i_3])))));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_31 = ((-(arr_0 [i_3])));
                    arr_17 [i_0] = ((var_11 ? (~var_6) : var_1));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_32 |= (((((var_7 ^ (arr_0 [i_7])))) ? (arr_8 [0] [i_2]) : (((!(arr_4 [i_3]))))));
                    var_33 = (((arr_11 [i_0] [0] [i_2] [i_2] [i_3] [i_3] [i_7]) * var_13));
                }

                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_2] [i_3] [i_3] [i_0] [i_0] = (((arr_7 [i_0] [i_0] [i_0] [1]) | 1));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_34 = (((arr_20 [i_9]) ? (var_4 + var_15) : (arr_0 [i_0])));
                        arr_28 [i_0] [1] [i_3] [1] [i_9] = (arr_15 [i_0] [i_0]);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_35 = (max(var_35, (arr_27 [i_10] [i_8] [i_3] [i_2] [i_0])));
                        var_36 = arr_14 [i_0];
                        var_37 = (max(var_37, (arr_11 [i_8] [i_2] [i_3] [i_3] [i_3] [i_8] [i_0])));
                        var_38 |= var_14;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_39 = (!((((arr_21 [i_0]) ? var_0 : var_18))));
                        arr_34 [i_0] [i_2] [i_3] [i_0] [i_11] = (((arr_29 [i_11] [i_8] [i_3] [i_2] [i_0]) ? var_13 : (arr_10 [i_8] [i_8] [i_0])));
                        var_40 ^= ((-(~var_13)));
                        var_41 = (arr_7 [i_11] [i_0] [i_0] [i_0]);
                        var_42 = ((((-(arr_1 [i_0] [i_0]))) * ((-(arr_1 [i_0] [i_0])))));
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_43 = (((arr_3 [i_0] [i_3] [i_8]) ? (arr_3 [i_0] [i_2] [i_2]) : (arr_3 [i_0] [i_8] [i_3])));
                        var_44 += var_4;
                    }
                    var_45 *= ((var_8 - (arr_23 [i_2] [1] [i_2] [i_2])));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    var_46 = (min(var_46, 1));
                    var_47 = ((!var_8) || (var_15 && var_4));
                    var_48 ^= (((((var_6 == (arr_30 [1])))) << (arr_9 [i_0] [i_2] [i_2] [i_3] [1])));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    var_49 = (max(var_49, var_18));
                    var_50 = (min(var_50, (~var_11)));
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    var_51 = (((((arr_21 [i_2]) + (arr_25 [i_0] [i_2] [i_3] [i_3] [i_2] [i_0]))) - (arr_43 [i_0] [i_2] [1] [i_2])));

                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        arr_46 [i_0] [i_0] = ((var_7 ? (arr_5 [1] [i_2] [i_2]) : (arr_5 [1] [i_16] [i_3])));
                        var_52 += (!(arr_22 [i_0] [i_2] [i_3] [i_15]));
                        var_53 = var_10;
                        var_54 = (var_1 == (arr_33 [i_16] [1] [i_3] [1]));
                        var_55 ^= (!(arr_26 [1] [i_15] [i_3] [i_2] [1]));
                    }
                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        var_56 -= (arr_18 [i_17 - 1] [i_17 - 1] [i_17 - 1] [1] [i_17 - 1] [i_17 - 1]);
                        var_57 = (((arr_30 [i_17 - 1]) & (arr_0 [i_0])));
                    }
                    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                    {
                        var_58 ^= var_5;
                        var_59 = (var_10 == (arr_52 [i_0] [i_2]));
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                    {
                        var_60 = ((~(arr_10 [i_0] [i_15] [i_0])));
                        arr_57 [i_19] [i_19] [1] [i_0] [i_19] = var_16;
                    }
                    var_61 -= ((var_12 == var_9) != var_11);
                }
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
            {

                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    arr_64 [i_2] [i_0] [i_21] = (((arr_32 [i_0] [i_2] [i_2] [i_20] [i_21]) >> var_1));
                    arr_65 [i_21] [0] [i_0] |= (!(arr_27 [1] [i_20] [1] [i_2] [i_0]));
                    arr_66 [i_0] [i_0] [1] = (~var_13);
                }
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    arr_69 [i_0] [0] [i_20] [i_0] = ((-(arr_44 [i_0] [i_2] [1] [1])));
                    arr_70 [i_0] [i_20] [i_20] [i_2] [i_0] = (((((~(arr_33 [i_0] [i_0] [i_0] [i_0])))) ? var_1 : ((((arr_23 [i_20] [i_2] [i_20] [i_22]) || 1)))));
                }
                var_62 = (var_17 >= 1);
            }
            for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
            {
                arr_73 [1] [1] [i_0] = (arr_67 [i_0] [i_0] [i_2] [i_23]);
                arr_74 [i_0] = ((!var_3) || var_19);
                var_63 = var_17;
                var_64 = (((arr_9 [i_0] [0] [i_0] [i_0] [i_0]) >> (var_16 >> var_10)));
            }
            for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
            {
                var_65 = (min(var_65, (arr_13 [i_0] [i_2] [i_2] [i_24] [i_24])));
                var_66 = arr_11 [i_24] [i_24] [1] [i_2] [i_2] [1] [1];
            }
        }
        for (int i_25 = 0; i_25 < 1;i_25 += 1)
        {
            arr_80 [i_0] [i_0] [i_25] = var_17;

            for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
            {
                var_67 = (var_0 < (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]));
                var_68 = (((arr_25 [i_25] [i_25] [i_26] [i_25] [i_25] [i_0]) ? var_11 : (arr_26 [i_0] [i_25] [i_25] [i_25] [i_0])));
            }
            for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
            {

                for (int i_28 = 0; i_28 < 0;i_28 += 1)
                {

                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        arr_90 [i_29] [i_28 + 1] [1] [i_0] [i_25] [i_0] [1] = 1;
                        var_69 = (!var_18);
                        var_70 = var_5;
                        var_71 ^= (((var_4 - (arr_63 [i_0] [i_25] [i_25] [i_28]))));
                    }
                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        arr_93 [i_0] [i_28] [i_0] [i_0] [i_0] [i_0] = ((arr_40 [i_28 + 1] [i_28 + 1] [i_28] [i_28 + 1]) > (arr_40 [i_28 + 1] [i_28 + 1] [i_28 + 1] [i_28 + 1]));
                        arr_94 [i_0] [i_28] [i_27] [i_0] [i_0] = (arr_49 [1] [1] [1] [i_28 + 1] [i_28 + 1] [i_28 + 1]);
                        arr_95 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [1] = (arr_56 [i_0] [1] [i_0] [1] [i_0]);
                    }
                    var_72 = -var_9;
                }
                for (int i_31 = 0; i_31 < 1;i_31 += 1)
                {
                    var_73 = ((~(((var_6 < (arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_74 &= var_16;
                }
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 1;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 1;i_33 += 1)
                    {
                        {
                            var_75 = (arr_62 [i_27] [i_33]);
                            var_76 = (((arr_76 [i_33] [i_32] [i_25]) ? (arr_76 [i_32] [i_27] [i_25]) : (arr_7 [i_33] [i_0] [i_0] [i_25])));
                        }
                    }
                }
                arr_107 [i_0] = (!(arr_67 [i_27] [i_25] [i_0] [i_0]));
            }
            var_77 = (arr_50 [i_0] [1] [0] [i_0] [i_0] [i_0] [i_0]);
            arr_108 [i_0] [i_0] = (!(arr_5 [i_0] [i_0] [i_0]));
        }
        var_78 = (arr_89 [i_0] [1] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_34 = 0; i_34 < 0;i_34 += 1) /* same iter space */
    {
        var_79 += (var_4 <= (((arr_111 [i_34 + 1] [i_34 + 1]) - var_18)));
        var_80 += ((var_0 << (arr_110 [i_34 + 1])));
        arr_112 [i_34 + 1] [i_34] = (arr_110 [i_34 + 1]);
        var_81 -= arr_109 [1] [1];
        /* LoopNest 2 */
        for (int i_35 = 0; i_35 < 1;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 1;i_36 += 1)
            {
                {
                    var_82 *= (((arr_114 [i_34 + 1] [i_35] [i_35]) ^ (((arr_109 [0] [i_35]) ? (arr_116 [i_35] [1] [i_36]) : (arr_113 [i_34] [i_35])))));
                    arr_118 [i_34] [i_34] = 0;
                }
            }
        }
    }
    for (int i_37 = 0; i_37 < 0;i_37 += 1) /* same iter space */
    {
        var_83 -= (((arr_117 [1] [i_37 + 1] [i_37 + 1] [1]) ? ((min((arr_119 [i_37]), (!1)))) : ((~(arr_120 [i_37 + 1])))));
        var_84 = (((((((var_15 ? (arr_109 [1] [1]) : var_18))) ? var_6 : (arr_117 [1] [i_37] [i_37 + 1] [1]))) * (((min((arr_115 [1] [i_37] [i_37]), 1)) ? (var_4 * var_16) : (arr_109 [1] [1])))));
        var_85 = (min(var_85, (((((!(((var_6 ? var_4 : var_14))))))))));
    }
    var_86 = (min(var_86, var_4));
    var_87 = 1;
    #pragma endscop
}
