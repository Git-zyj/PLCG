/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = var_5;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]), 52726)));
                            arr_14 [i_0] [i_2] [i_2] = (((var_4 ? (arr_9 [i_1] [i_2] [i_3]) : (arr_5 [i_0] [i_0] [i_0]))));
                            var_11 = ((-((-(arr_2 [i_0])))));
                            var_12 = 1;
                        }
                    }
                }
                arr_15 [i_0] [i_1] = (((!239) && ((min((arr_3 [i_0] [i_1] [i_0]), (min(1, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    var_13 = ((((min(var_1, var_5))) && (((2626732677 ? (1 || 1) : (!52744))))));
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 7;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_14 = 17;
                                arr_31 [i_8] [i_5] [i_5] [i_5] = (arr_27 [i_4] [i_4] [i_4] [i_4]);
                                var_15 = 1;
                            }
                        }
                    }
                    var_16 -= ((((min((arr_27 [i_4] [i_4] [i_4] [i_4 - 2]), 255))) ? (min((~3282654416227285430), var_6)) : (((97 ? var_1 : ((~(arr_8 [i_4] [i_5] [i_6]))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 7;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_17 = ((var_9 - (((((1 ? 99 : -7222))) ? 8253071945782857429 : (((arr_30 [i_4] [i_5] [i_6] [i_9] [i_10] [i_10]) + (arr_8 [i_4] [i_4] [i_4])))))));
                                var_18 = (max((arr_5 [i_4 - 1] [i_5 - 1] [i_6 + 1]), (((arr_5 [i_4 + 1] [i_5 - 1] [i_6 - 1]) % var_3))));
                                var_19 = (max(var_19, ((((9754 << (((arr_10 [i_4 + 1] [i_5 + 2] [i_6 + 3] [i_9 + 1]) - 1774100683))))))));
                            }
                        }
                    }
                    var_20 = (min((max(1, -6942445187527330565)), (arr_1 [i_6 + 1])));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 7;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            {
                                arr_43 [i_5] [i_11] [i_6] [i_5] [i_5] = (min((max((arr_12 [i_12] [i_12 + 1] [i_5] [i_5] [i_4 + 1] [i_4]), (arr_37 [i_4] [i_5] [i_4] [i_4] [i_4]))), (arr_35 [i_4] [i_5])));
                                arr_44 [i_5] [i_5] [i_5] [i_5] [i_12] = 23904;
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {

        for (int i_14 = 3; i_14 < 17;i_14 += 1)
        {
            var_21 = arr_49 [i_13] [i_14] [i_14 + 1];
            arr_50 [i_13] = 800330708;
            /* LoopNest 2 */
            for (int i_15 = 3; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 4; i_16 < 16;i_16 += 1)
                {
                    {
                        arr_56 [i_13] [i_16] [i_15] [i_14] [i_13] [i_13] = 8253071945782857429;
                        var_22 = (arr_54 [i_14] [i_15 + 1]);
                        arr_57 [i_13] = (10184093951901583605 >> (158 - 106));
                        arr_58 [i_13] [i_14] [i_13] [i_16] = (arr_51 [i_14] [i_15] [i_16]);
                    }
                }
            }
        }
        for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_18 = 1; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 4; i_19 < 17;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            arr_69 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = var_3;
                            var_23 = ((!(arr_62 [i_19] [i_18 - 1] [i_17 - 1])));
                            arr_70 [i_13] [i_19] [i_13] = ((((arr_65 [i_20]) * 1)));
                        }
                    }
                }
            }
            arr_71 [i_13] [i_17] [i_13] = 156;
            var_24 -= (((-86 + 2147483647) << (122 - 122)));
        }
        for (int i_21 = 1; i_21 < 1;i_21 += 1) /* same iter space */
        {
            arr_76 [i_13] = var_3;
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                for (int i_23 = 2; i_23 < 19;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 20;i_24 += 1)
                    {
                        {
                            var_25 = ((1 ? (arr_54 [i_21] [i_21]) : (arr_77 [i_21] [i_21] [i_21] [i_21 - 1])));
                            var_26 += var_4;
                            var_27 &= 8253071945782857420;
                            var_28 = (arr_68 [i_23] [i_13] [i_23 - 2]);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_25 = 1; i_25 < 18;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 17;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 20;i_27 += 1)
                    {
                        {
                            var_29 = 0;
                            var_30 = var_10;
                            var_31 = (arr_67 [i_13] [i_13]);
                            var_32 = (arr_64 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_25 - 1] [i_25 - 1]);
                        }
                    }
                }
            }
        }
        for (int i_28 = 1; i_28 < 1;i_28 += 1) /* same iter space */
        {
            var_33 = ((0 - (arr_78 [i_28 - 1] [i_13])));
            var_34 = 97;
            arr_94 [i_13] [i_13] [i_13] = 8262650121807968011;
            arr_95 [i_13] [i_13] [i_28] = (!158);
        }
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 20;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 20;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 20;i_31 += 1)
                {
                    {

                        for (int i_32 = 1; i_32 < 19;i_32 += 1)
                        {
                            var_35 = var_0;
                            var_36 = (((arr_64 [i_32 + 1] [i_32] [i_32] [i_32] [i_32]) != 1));
                        }
                        var_37 = (max(var_37, (arr_78 [i_13] [i_30])));
                    }
                }
            }
        }
        var_38 = ((12599803147815246986 ? 1 : 943791468375241720));
        arr_106 [i_13] = 9381;
    }
    #pragma endscop
}
