/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0]) << (((((arr_1 [i_0] [i_0]) * var_3)) - 5269))))));
        arr_3 [i_0] = (~-var_2);
        var_11 = (max(var_11, ((max((((!(arr_0 [i_0])))), (min((arr_0 [i_0]), (arr_0 [i_0]))))))));
        var_12 = (1 & -3610098333860707017);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 ^= (~((~(arr_4 [i_1]))));
        arr_6 [i_1] [i_1] = (((arr_5 [i_1]) ? 80 : var_0));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_14 = (min(var_14, (arr_7 [1] [1])));
        var_15 ^= ((-((~(arr_1 [i_2] [i_2])))));
        var_16 &= ((1 ? 99 : 1));
        arr_11 [i_2] = (arr_0 [i_2]);
        var_17 = ((~(arr_0 [i_2])));
    }
    var_18 = var_6;

    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        arr_15 [i_3] = max(((((arr_13 [i_3 + 1]) ? (arr_13 [i_3 - 2]) : (arr_13 [i_3 + 1])))), (arr_14 [i_3 - 2]));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {
                    {
                        var_19 = (((((var_1 ? var_2 : (arr_17 [i_3] [i_3])))) ? (arr_13 [i_3]) : var_10));
                        var_20 = (max(var_20, var_2));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 24;i_8 += 1)
                {
                    {
                        var_21 = (arr_26 [i_7 - 1] [i_4] [i_4] [i_7 - 1]);
                        arr_29 [i_8] [i_4] [i_3] [i_3] [i_3] [i_8] = var_3;
                    }
                }
            }
            arr_30 [i_3] [i_3] = ((!(arr_12 [i_3])));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 8;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        {
                            var_22 = (max(var_22, 1486730909885001950));
                            var_23 = (max(var_23, ((((((arr_40 [i_9] [i_10] [i_10] [i_10] [i_13]) && var_1)) || (arr_22 [i_9] [i_11] [i_9] [i_11 - 1] [i_10] [i_13 + 1]))))));
                            arr_42 [i_12] [i_11] = (arr_26 [i_9] [i_10] [i_11] [i_9]);
                            arr_43 [i_9] [i_11] [i_11] [i_9] [i_13] = (arr_18 [i_11] [i_13]);
                        }
                    }
                }
            }
            var_24 = (max(var_24, (((~(arr_18 [i_9] [i_9]))))));

            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                var_25 = ((var_9 ? (arr_26 [i_14] [i_14] [i_10] [i_9]) : (((var_10 ? var_6 : (arr_32 [i_10] [i_9]))))));

                for (int i_15 = 2; i_15 < 7;i_15 += 1)
                {
                    arr_51 [i_9] [i_14] [i_10] [i_14] [i_9] = ((-(arr_18 [i_15 + 2] [i_15 - 1])));
                    arr_52 [i_14] [i_14] = (arr_46 [i_9] [i_14]);
                    var_26 = ((!(2475950087 || 1)));
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    arr_56 [i_14] [i_10] = var_3;
                    var_27 ^= var_4;
                }

                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    arr_59 [i_14] = (-11490 || var_4);
                    var_28 = (arr_0 [i_9]);
                }
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    arr_62 [i_14] [i_14] = (((arr_50 [i_9] [i_10] [i_14] [i_14]) ? (arr_50 [i_18] [i_18] [i_9] [i_14]) : var_4));

                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_67 [i_9] [i_14] [i_18] [i_14] [i_14] [i_9] = arr_66 [i_19];
                        arr_68 [i_9] [i_10] [i_10] [i_10] [i_14] [i_18] [i_14] = (((arr_53 [i_14]) ? (arr_53 [i_14]) : (arr_31 [i_9])));
                    }
                    for (int i_20 = 3; i_20 < 9;i_20 += 1)
                    {
                        var_29 = var_4;
                        arr_72 [i_14] [i_20] = 1;
                    }
                }
                for (int i_21 = 0; i_21 < 10;i_21 += 1) /* same iter space */
                {
                    var_30 ^= (!var_9);
                    arr_75 [i_9] [i_9] [i_14] [i_14] = (((arr_35 [i_14] [i_10] [i_10] [i_21]) / (arr_35 [i_14] [i_10] [i_14] [i_14])));
                    var_31 &= (arr_16 [i_9] [i_9]);
                    var_32 -= 65520;
                    arr_76 [i_14] = ((((arr_58 [i_14] [i_14] [i_14] [i_14]) && var_7)));
                }
                for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
                {
                    arr_79 [i_9] [i_9] [i_10] [i_10] [i_9] &= arr_64 [i_9] [i_9] [i_9] [i_9] [i_9];
                    arr_80 [i_10] [i_10] [i_14] = (((~var_7) == var_4));
                    var_33 = (arr_21 [i_14] [i_14] [i_22]);

                    for (int i_23 = 0; i_23 < 10;i_23 += 1)
                    {
                        var_34 = var_5;
                        arr_85 [i_23] [i_14] [i_9] [i_14] [i_9] = ((var_1 ? (!var_1) : var_1));
                    }
                    var_35 |= 1819017209;
                }
            }
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {

                for (int i_25 = 0; i_25 < 10;i_25 += 1)
                {
                    var_36 = ((~(~1)));
                    arr_90 [i_9] [i_9] [i_9] [i_25] = (((arr_89 [i_9] [i_25]) / (arr_89 [i_25] [i_25])));
                }
                for (int i_26 = 3; i_26 < 9;i_26 += 1)
                {
                    arr_95 [i_9] [i_10] [i_26] [i_26] = (!89);
                    var_37 ^= var_10;
                    arr_96 [i_9] [i_9] [i_26] [i_9] = -13005;
                }
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 10;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 10;i_28 += 1)
                    {
                        {
                            var_38 = (!var_6);
                            var_39 = (!var_4);
                        }
                    }
                }
            }
            for (int i_29 = 0; i_29 < 10;i_29 += 1)
            {
                var_40 = (max(var_40, (arr_16 [i_9] [i_9])));
                /* LoopNest 2 */
                for (int i_30 = 0; i_30 < 10;i_30 += 1)
                {
                    for (int i_31 = 1; i_31 < 7;i_31 += 1)
                    {
                        {
                            var_41 = (~var_1);
                            var_42 = (!(arr_44 [i_31] [i_30] [i_30] [i_31 + 1]));
                            arr_110 [i_9] [i_10] [i_10] [i_10] [i_31] = (arr_107 [i_31 - 1] [i_31 + 2] [i_31 + 3]);
                            var_43 ^= var_5;
                            arr_111 [i_9] [i_9] [i_9] = var_3;
                        }
                    }
                }
            }
            for (int i_32 = 0; i_32 < 10;i_32 += 1)
            {
                var_44 -= (((~2965683099) ? 15 : var_6));
                arr_114 [i_9] = var_6;
                var_45 = (min(var_45, var_8));
            }
        }

        for (int i_33 = 1; i_33 < 9;i_33 += 1)
        {

            for (int i_34 = 0; i_34 < 10;i_34 += 1)
            {
                var_46 = (max(var_46, var_4));
                var_47 = (arr_8 [i_9] [i_33]);
            }
            for (int i_35 = 0; i_35 < 10;i_35 += 1)
            {
                arr_122 [i_9] [i_33] [i_33] [i_9] = ((~(arr_14 [i_33 + 1])));
                arr_123 [i_33] = ((1 ? 64238 : 18446744073709551588));
            }
            arr_124 [i_9] [i_33] = var_7;
        }
        for (int i_36 = 0; i_36 < 10;i_36 += 1)
        {
            arr_127 [i_9] [i_9] [i_9] = (~0);
            var_48 = arr_64 [i_9] [i_9] [i_9] [i_36] [i_9];
            var_49 = (max(var_49, (((var_9 ? var_5 : var_1)))));
        }
        var_50 = (arr_61 [i_9] [i_9] [i_9] [i_9]);
    }
    for (int i_37 = 0; i_37 < 10;i_37 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_38 = 0; i_38 < 10;i_38 += 1)
        {
            for (int i_39 = 0; i_39 < 10;i_39 += 1)
            {
                {
                    arr_135 [i_37] [i_38] [i_37] [i_37] = ((max((arr_132 [i_37] [i_37]), (arr_132 [i_37] [i_38]))));

                    for (int i_40 = 0; i_40 < 10;i_40 += 1)
                    {
                        var_51 = (((((-(arr_134 [i_37] [i_37] [i_37])))) ? ((min((arr_99 [i_38] [i_40] [i_40] [i_40] [i_38] [i_38]), (arr_103 [i_37] [i_38] [i_39] [i_40])))) : ((max((arr_99 [i_37] [i_38] [i_38] [i_40] [i_40] [i_39]), (arr_99 [i_37] [i_37] [i_37] [i_37] [i_37] [i_37]))))));
                        var_52 = (arr_65 [i_37] [i_38] [i_37] [i_38] [i_39] [i_38]);
                        arr_138 [i_37] [i_37] [i_37] = 65520;
                    }
                    /* vectorizable */
                    for (int i_41 = 0; i_41 < 1;i_41 += 1)
                    {
                        arr_142 [i_37] [i_37] [i_37] = (~(arr_32 [i_37] [i_37]));
                        var_53 = 22551;
                    }
                    for (int i_42 = 2; i_42 < 9;i_42 += 1)
                    {
                        var_54 = (max(var_54, var_0));
                        var_55 = ((var_7 ? ((((min((arr_21 [i_37] [i_38] [i_42]), (arr_125 [i_37] [i_38] [i_39]))) == (arr_82 [i_37] [i_37] [i_37])))) : (((arr_137 [i_42 - 1]) ? (arr_137 [i_42 - 2]) : var_0))));
                        arr_145 [i_37] [i_42] [i_42] = (arr_92 [i_37] [i_37] [i_37] [i_42]);
                    }
                }
            }
        }
        arr_146 [i_37] = var_8;
    }
    var_56 = -var_10;
    #pragma endscop
}
