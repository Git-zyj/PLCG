/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max((((arr_0 [i_0]) ? var_5 : (arr_0 [i_0]))), var_2));
        arr_2 [i_0] = var_11;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 *= ((!(arr_3 [i_0])));
            arr_6 [i_0] = (max(var_10, var_9));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = 9223372036854775785;

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_12 [i_0] [i_2] [i_3] [i_0] = var_7;
                var_17 = 9223372036854775805;
                var_18 = ((-(min(((var_0 ? var_9 : var_3)), (((arr_3 [i_2]) ? var_10 : (arr_0 [i_0])))))));
            }
            var_19 = max(((((((var_6 >= (arr_1 [i_2])))) >= 97))), 9223372036854775805);
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_20 = arr_18 [i_5] [i_6];
                        var_21 = (!(var_4 > var_3));
                        var_22 = 9223372036854775805;
                        var_23 = 4;
                        arr_20 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = (((min(var_6, var_4))));
                    }
                }
            }
            var_24 = max((min(var_8, (min(var_5, var_7)))), (var_1 != var_5));
        }
        var_25 = max((((-4 < (var_8 + 9)))), (min((arr_10 [i_0] [i_0] [i_0] [i_0]), 9223372036854775807)));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_26 = ((var_1 < (((var_1 > var_7) ? (min(var_12, (arr_13 [i_7]))) : var_9))));
        var_27 = ((max(1, -9223372036854775805)) ^ var_7);
        var_28 = ((max(var_5, -1)));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_29 = var_0;
            var_30 = (arr_10 [i_7] [i_7] [i_7] [i_7]);
            var_31 = (((var_12 ? var_1 : var_11)));
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_32 = -1;
                            arr_32 [i_11] [i_10] [i_8] [i_8] [i_7] = 3;
                        }
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {
            var_33 = var_5;
            arr_35 [i_7] [i_7] = ((max(-10, var_0)) ^ (((((max((arr_18 [i_7] [i_12 - 1]), var_10)) < var_12)))));

            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                var_34 = var_0;
                var_35 = ((((min((min(var_2, var_6)), (max((arr_10 [i_7] [i_7] [i_7] [i_7]), var_2))))) ? 11 : (((((max(8096268365065492341, (arr_21 [i_12]))) >= ((var_9 ? (arr_29 [i_13] [i_13]) : var_9))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 0;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_36 = ((var_10 ? -5 : var_8));
                            var_37 = ((((arr_1 [i_14 + 1]) && ((((arr_4 [i_15 - 2] [i_7]) ? -3 : var_6))))) && -24);
                            arr_46 [i_14] = var_9;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 0;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_38 = (max(var_2, (1 || var_4)));
                            var_39 *= (max((((var_5 == ((max(120, var_1)))))), (((1 ? (arr_19 [i_7] [i_7] [i_12 - 1] [i_13] [i_13] [i_13]) : 42)))));
                            var_40 = var_2;
                        }
                    }
                }
            }
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    var_41 = ((!(((-(arr_53 [i_12 - 1] [i_19] [i_19] [i_18] [i_12 - 1] [i_7]))))));

                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        arr_61 [i_20] [i_12] [i_18] [i_12] [i_12] = min(((max(17, (13 < var_0)))), var_9);
                        var_42 = max(9223372036854775807, -5);
                        var_43 = (max(var_8, ((16 << (-24 + 39)))));
                    }
                    var_44 ^= ((((var_1 ? (max(7173008856995557095, 5)) : -17))) ? (max(var_9, ((var_4 ? 27 : (arr_23 [i_7] [i_12]))))) : (((5 >> (var_5 + 146)))));
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 13;i_21 += 1)
                {
                    var_45 = -5;
                    var_46 = var_6;
                    var_47 = 0;

                    for (int i_22 = 1; i_22 < 10;i_22 += 1)
                    {
                        var_48 = ((var_3 && -10) ? var_5 : ((1 ? (arr_51 [i_18]) : var_1)));
                        var_49 |= (arr_0 [i_7]);
                        var_50 = 12;
                        var_51 = (var_6 ? var_7 : var_7);
                    }
                    for (int i_23 = 0; i_23 < 13;i_23 += 1)
                    {
                        var_52 = var_8;
                        var_53 = var_1;
                    }
                    for (int i_24 = 2; i_24 < 12;i_24 += 1)
                    {
                        var_54 = var_7;
                        var_55 = 1;
                        var_56 = (min(var_56, var_9));
                    }
                    for (int i_25 = 0; i_25 < 13;i_25 += 1)
                    {
                        arr_77 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = (1 ^ 1);
                        arr_78 [i_7] [i_12] [i_18] [i_18] [i_21] [i_25] = ((var_6 ? var_8 : ((-13 ? 7174736843536848648 : 9223372036854775807))));
                        var_57 = (var_4 >= 1);
                        var_58 = (1 > var_9);
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 3; i_26 < 9;i_26 += 1)
                {
                    for (int i_27 = 1; i_27 < 11;i_27 += 1)
                    {
                        {
                            var_59 = (((arr_75 [i_26 + 2] [i_26] [i_18] [i_18] [i_18]) ^ ((((~var_8) == ((var_1 ? var_2 : -9223372036854775806)))))));
                            var_60 = (max((min((arr_19 [i_26 + 2] [i_12 - 1] [i_27] [i_26] [i_7] [i_7]), var_10)), (arr_19 [i_26 + 3] [i_27] [i_18] [i_27] [i_18] [i_27])));
                            var_61 = min(7174736843536848621, 1061946714472447650);
                            arr_85 [i_27] [i_7] [i_7] [i_7] [i_7] [i_7] |= var_8;
                        }
                    }
                }
            }
            for (int i_28 = 1; i_28 < 10;i_28 += 1)
            {
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 13;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 13;i_30 += 1)
                    {
                        {
                            var_62 = var_8;
                            var_63 = (arr_25 [i_7] [i_7] [i_7]);
                            var_64 = (min(var_64, (((var_2 ? ((30 ^ (min(var_12, (-9223372036854775807 - 1))))) : var_11)))));
                        }
                    }
                }
                var_65 |= (max(1, var_2));
            }
        }
        /* vectorizable */
        for (int i_31 = 0; i_31 < 1;i_31 += 1)
        {

            for (int i_32 = 2; i_32 < 9;i_32 += 1)
            {

                for (int i_33 = 0; i_33 < 13;i_33 += 1)
                {
                    var_66 = (var_9 < var_12);
                    var_67 = (((1 > var_10) >> (-124 + 129)));
                    var_68 = (((5702294983147210930 ? var_4 : var_9)));
                }
                for (int i_34 = 0; i_34 < 13;i_34 += 1)
                {
                    var_69 = var_2;
                    var_70 = (var_6 ? ((var_1 ^ (arr_107 [i_7] [i_7] [i_7] [i_7] [i_7]))) : var_5);
                    var_71 = var_10;
                }
                var_72 = ((arr_18 [i_31] [i_32]) < (arr_79 [i_32] [i_31] [i_31] [i_7]));
                var_73 = (min(var_73, 0));
            }
            var_74 = var_5;
        }
    }
    #pragma endscop
}
