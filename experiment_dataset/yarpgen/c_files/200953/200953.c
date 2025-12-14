/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = var_9;
        var_13 = ((var_8 ? var_0 : (arr_0 [i_0] [i_0])));
    }
    var_14 = (~1854008791);

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = (max(-21981, 1));
        var_16 = var_7;
        var_17 = (~var_1);
        var_18 = ((((max((arr_0 [i_1] [i_1]), var_6))) ? (((-64 ? 11 : 1))) : (arr_0 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_19 = min(((var_9 ? var_8 : var_11)), ((var_0 ? ((min(var_10, (arr_5 [i_2])))) : (max(var_8, var_3)))));
        var_20 = var_3;
        var_21 = (min(var_21, ((max(((var_10 ? var_0 : (arr_1 [i_2]))), ((min(var_1, (arr_1 [i_2])))))))));
        var_22 = (max(var_22, var_3));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_23 = var_4;

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_24 = var_11;
            var_25 = (min(var_25, (((~(arr_8 [1]))))));
            var_26 -= (arr_1 [i_3]);
            var_27 = (((((var_7 ? var_3 : var_1))) ? ((var_6 ? var_1 : var_4)) : (((!(arr_0 [i_4] [i_3]))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_28 = var_11;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {
                        var_29 = var_3;
                        var_30 = (max(var_30, (arr_15 [i_3] [i_5])));

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_31 &= var_0;
                            var_32 = (min(var_32, var_8));
                            var_33 += var_6;
                            var_34 = var_1;
                        }
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_35 = (((arr_10 [i_7]) ? ((var_3 ? var_3 : var_6)) : -1));
                            var_36 = 0;
                            var_37 = (max(var_37, var_9));
                            var_38 &= var_1;
                        }
                        var_39 = var_10;
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {

            for (int i_11 = 3; i_11 < 19;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_40 = 47;
                            var_41 = -var_10;
                            var_42 = var_11;
                            var_43 = (max(var_43, var_8));
                            var_44 = ((!(((var_2 ? var_9 : (arr_15 [i_12] [i_10]))))));
                        }
                    }
                }
                var_45 = var_5;
                var_46 = (~var_7);
            }
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                var_47 = (max(var_47, (arr_30 [i_3] [i_10] [i_14])));

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_48 = (max(var_48, var_5));
                    var_49 = (-(~var_5));
                    var_50 ^= var_2;
                    var_51 = (((var_0 ? (arr_15 [i_14] [i_3]) : (arr_1 [i_15]))));
                }
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    var_52 = var_7;

                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        var_53 = var_3;
                        var_54 = 1;
                        var_55 = (~var_10);
                    }
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        var_56 *= (arr_21 [i_3] [i_14] [i_16]);
                        var_57 ^= (((((-(arr_31 [i_14] [i_16] [i_14])))) ? (((arr_32 [i_3] [i_10] [i_14]) ? var_7 : var_3)) : ((2474059263341347008 ? 1073741824 : (arr_29 [i_10])))));
                    }
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        var_58 |= var_2;
                        var_59 = (min(var_59, (((var_7 ? var_4 : (((arr_24 [i_3] [i_3] [i_14] [i_16]) ? (arr_23 [i_10] [i_10]) : (arr_35 [i_10]))))))));
                    }
                    for (int i_20 = 1; i_20 < 19;i_20 += 1)
                    {
                        var_60 = (arr_35 [i_3]);
                        var_61 ^= -0;
                        var_62 = var_8;
                    }
                }
                var_63 &= var_4;
            }
            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {

                for (int i_22 = 0; i_22 < 21;i_22 += 1)
                {
                    var_64 = var_4;
                    var_65 *= ((var_3 ? ((var_11 ? var_10 : var_3)) : (~33)));
                    var_66 = var_7;
                }
                for (int i_23 = 0; i_23 < 21;i_23 += 1)
                {
                    var_67 = (!var_0);
                    var_68 = var_9;
                    var_69 = (!var_11);
                    var_70 = var_8;
                }
                for (int i_24 = 0; i_24 < 21;i_24 += 1)
                {

                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        var_71 ^= (!var_10);
                        var_72 &= ((var_8 ? (arr_54 [i_3] [i_10] [i_21] [i_24] [i_3] [i_3]) : (arr_44 [i_3] [i_10] [i_21] [i_24] [i_25])));
                    }
                    var_73 = (~-1924040200);
                    var_74 = (min(var_74, -10));
                    var_75 = var_1;
                }
                var_76 = (((arr_32 [i_21] [i_10] [i_3]) ? 1 : (!var_7)));
            }
            var_77 = var_2;

            for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
            {
                var_78 = var_3;
                var_79 &= 1;
            }
            for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
            {
                var_80 = (min(var_80, (((var_1 ? var_10 : ((var_1 ? var_7 : var_10)))))));

                for (int i_28 = 0; i_28 < 0;i_28 += 1)
                {
                    var_81 |= var_3;
                    var_82 = (arr_15 [i_10] [i_27]);
                }
                for (int i_29 = 4; i_29 < 20;i_29 += 1)
                {
                    var_83 |= var_9;
                    var_84 = var_4;
                }
                var_85 = (min(var_85, var_11));
                var_86 = var_5;
            }
        }
        var_87 = var_6;
        var_88 -= var_11;
        var_89 = var_8;
    }
    #pragma endscop
}
