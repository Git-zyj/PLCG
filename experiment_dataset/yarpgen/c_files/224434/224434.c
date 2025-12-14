/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(var_5, var_8))) ? ((var_0 ? var_4 : ((1 ? var_14 : 0)))) : (var_7 | -2137401615)));
    var_16 = 3153306672;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (min(-var_11, var_10))));
                                arr_13 [i_1] [i_3] [i_3] [i_3] [i_3] = (!18196);
                            }
                        }
                    }
                    var_18 &= (((((-23356 ? 844808839 : 1141660629))) ? (((3736212432 ? 0 : (arr_11 [i_0])))) : (((127 ? 0 : 2063618097)))));
                    var_19 = (min(var_19, var_4));
                    arr_14 [i_1] [i_1] [i_2] = ((((((arr_10 [i_0] [i_0] [2] [i_2]) / (~var_9)))) ? ((max((arr_5 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 4]), var_12))) : var_4));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_5] [i_1] [i_1] = ((!(arr_3 [i_1])));
                        var_20 = var_6;
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_5] [i_1] = (arr_1 [i_0] [i_1]);
                        var_21 = -var_7;
                        arr_26 [i_0] [i_0] [i_1 - 4] [i_1] [i_7] [i_7] = ((((arr_15 [i_1] [1]) ? (arr_6 [i_5] [8] [i_5] [i_5]) : var_7)));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_22 = ((~((~(arr_18 [i_0] [i_1 - 3] [i_1] [i_1] [i_5] [i_8])))));

                        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_23 = (((arr_17 [1] [7] [i_5] [i_5] [i_5] [i_5]) | (arr_1 [i_0] [i_8])));
                            arr_32 [i_1] [i_0] [i_1] [i_5] [i_8] [i_9] [i_9] = 511980613;
                            var_24 = (max(var_24, 2063618097));
                            var_25 = (max(var_25, ((((arr_24 [i_1 - 2] [9] [1]) ? (arr_24 [i_1 - 2] [i_9] [i_9]) : (arr_10 [i_8] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_1] [0] [i_5] [i_8] [i_10] = (arr_4 [i_1 - 3]);
                            var_26 = ((-(arr_5 [i_1 - 3] [i_1 - 3] [i_1 + 2] [i_1 - 4])));
                            arr_37 [i_10] [i_8] [i_0] [i_8] [i_1] [i_1 - 2] = ((-(((arr_5 [i_0] [i_0] [i_0] [i_0]) | (arr_6 [i_0] [i_1] [12] [i_8])))));
                        }
                    }
                    var_27 = 3153306672;
                    var_28 = (~8178);
                }
                arr_38 [i_1] [i_1] = (((-2063618074 >= (arr_3 [i_1]))));

                for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                {
                    arr_41 [i_1] [i_1] = (max((arr_8 [i_0] [i_1 + 2] [i_0]), ((-(arr_15 [i_0] [i_1 - 1])))));
                    var_29 = ((((((!(arr_7 [i_11] [i_0]))) ? 4214557664733574903 : (((0 & (arr_33 [i_0] [i_0] [i_1] [i_1 - 4] [i_1] [i_0])))))) + var_5));

                    for (int i_12 = 3; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_1] [i_1] = (((arr_9 [i_1] [i_11] [i_11]) ? ((-((2833852663344520520 ? 1141660623 : 23782)))) : (((~(17535 * -1))))));
                        var_30 = (arr_4 [i_12]);
                    }
                    for (int i_13 = 3; i_13 < 14;i_13 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_31 -= ((0 >> (42 - 40)));
                            arr_53 [i_14] [i_13 - 3] [i_1] [i_1] [4] = arr_48 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0];
                        }
                        var_32 = (max(18214, -1432));
                        arr_54 [i_1] [i_0] [i_0] = ((((max((arr_31 [i_0] [i_1 - 4] [i_1 - 4]), (arr_52 [12] [2] [i_1] [i_11] [i_1] [i_1] [i_13 - 1])))) ? (((((arr_3 [i_1]) >= var_6)) ? (arr_27 [3] [i_1] [i_13 - 2] [14]) : (arr_51 [i_11] [7] [i_1] [i_0] [i_1]))) : ((((max(56, (arr_15 [i_1 - 4] [i_1 - 1])))) ^ 0))));
                    }
                    for (int i_15 = 3; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        var_33 = (arr_15 [i_1 - 2] [i_1 - 2]);
                        arr_59 [i_0] [i_1] [i_0] [i_15] &= var_14;
                        var_34 = (max((arr_57 [i_0] [i_0] [i_1] [i_1] [i_11] [i_15 - 3]), ((~(arr_0 [i_0])))));
                    }
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    arr_63 [i_1] [i_16] [i_1] [i_1] = (((!((max(18196, (arr_11 [i_16])))))));
                    var_35 = -2063618097;
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 12;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 15;i_18 += 1)
                        {
                            {
                                arr_69 [i_0] [1] [i_0] [i_1] [i_0] = (arr_60 [i_0] [i_0] [6] [14]);
                                arr_70 [i_0] [i_1] [i_1] [i_17 + 3] [i_18] = ((4564105064418260160 < (((min(var_6, (arr_49 [i_17 + 1] [i_17] [i_1 + 2] [i_0])))))));
                                var_36 = (((arr_62 [i_1 - 1] [i_17 + 1] [i_17 - 1] [i_1]) ? 0 : 1));
                                arr_71 [i_18] [i_1] [i_0] [i_1 + 2] [i_1] [i_0] = 47339;
                                var_37 -= ((((((~var_1) ? (~0) : (!var_1)))) ? (min((var_12 || 22582), (-272186500 ^ -2147483624))) : (arr_44 [1] [i_1 - 3])));
                            }
                        }
                    }
                    arr_72 [i_0] [i_0] [i_1] [i_16] = (((((~-1501837235) ? var_11 : ((var_14 ? (arr_28 [i_0] [i_0] [i_0]) : (-127 - 1)))))) ? ((((!var_7) <= var_3))) : ((max(29995, var_5))));
                    var_38 = (min(var_38, (((~114) == (max(272186502, (arr_7 [i_1 + 2] [i_1 - 3])))))));
                }
                arr_73 [i_1] [i_1] = (-(max(var_7, 2063618122)));
            }
        }
    }
    var_39 = (min(var_1, ((var_11 ? (var_5 * 47163) : var_6))));
    #pragma endscop
}
