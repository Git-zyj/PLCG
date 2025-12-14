/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_12 = (min((max((arr_2 [i_0] [i_0 - 1]), (arr_0 [1] [i_0 + 1]))), var_9));
        var_13 = ((~((var_6 << (175 - 164)))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = var_3;
        arr_8 [i_1] [i_1] = (((((255 & (arr_0 [i_1 - 1] [i_1 + 1])))) % ((~(max((arr_6 [i_1 + 1] [i_1]), var_1))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_2] [i_1] [i_1] = ((-(arr_5 [i_1])));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_14 = arr_5 [i_1];
                var_15 = var_3;
                arr_15 [i_1] = (((arr_2 [i_1] [i_1]) + (arr_4 [i_1 - 1])));
                arr_16 [1] [i_1] [i_1 + 1] = -5462400861877534753;
            }
            var_16 = (arr_4 [i_1]);
            var_17 = (((arr_5 [i_1]) ? ((8535521273684890864 ? (arr_5 [i_1]) : 13893)) : ((var_2 ? 193 : (arr_3 [i_1] [1])))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_18 = (arr_0 [i_4] [i_4]);
            var_19 = ((1 ? ((((arr_18 [i_1 - 1] [i_1]) ? (((arr_17 [i_4]) ? 3 : (arr_14 [i_1] [i_4] [i_4] [i_4]))) : 22040))) : ((var_1 ? (arr_9 [i_1 - 1]) : (((min(var_5, -106))))))));
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (arr_20 [i_5])));
        arr_21 [11] = var_9;
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {
                        var_21 = var_6;
                        var_22 = 95;
                    }
                }
            }
        }
        arr_31 [i_5] = (arr_22 [2] [i_5]);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_23 = (41 & var_9);

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                var_24 = (((arr_28 [i_11] [i_10] [i_9]) < (arr_37 [i_9] [i_10])));
                var_25 = arr_26 [i_9] [i_10] [i_11];
                arr_38 [7] = ((var_11 ? var_11 : (arr_36 [i_11] [i_10] [i_10] [9])));
                var_26 = (arr_27 [i_9] [i_9]);
            }
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                arr_42 [i_9] [i_9] [i_10] [i_12] = ((-(arr_26 [i_9] [i_10] [13])));
                arr_43 [i_12] = (arr_22 [i_9] [i_10]);

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_27 = var_2;
                    arr_48 [i_10] [i_12] [i_10] = ((9223372036854775807 ^ (43496 ^ -13)));
                    arr_49 [i_9] [i_10] [i_10] [i_10] [i_12] [i_13] = ((22040 ? (arr_36 [i_12 - 2] [i_12 - 1] [i_12 - 2] [i_12 - 2]) : ((var_11 / (arr_32 [i_13])))));
                    arr_50 [i_9] [i_10] [i_12] [i_13] = (arr_37 [i_12 - 1] [i_12 - 3]);
                }
                var_28 = 211;
            }
            var_29 = var_5;
            var_30 = (63 >= var_3);
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 14;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    {
                        var_31 = (((arr_20 [i_16]) ? var_3 : ((1 ? var_0 : (arr_44 [i_9] [i_14] [i_15 + 2] [i_14])))));
                        var_32 += (((arr_34 [i_9]) ? ((0 ? -5462400861877534753 : (arr_20 [i_14]))) : var_8));
                        var_33 = var_1;
                        var_34 = var_4;
                    }
                }
            }
            var_35 -= (~var_7);
        }

        for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
        {
            var_36 = (((arr_40 [i_9] [i_17 - 1]) | (arr_53 [i_9] [i_17 - 1] [i_17 - 1])));
            var_37 = (min(var_37, -91));
        }
        for (int i_18 = 1; i_18 < 1;i_18 += 1) /* same iter space */
        {

            for (int i_19 = 3; i_19 < 15;i_19 += 1)
            {
                var_38 = -6020901517962235962;
                var_39 = var_0;
                var_40 += ((var_6 ? (arr_26 [i_19 - 1] [i_18] [i_18 - 1]) : 1));
                var_41 = (((arr_68 [i_18] [i_18] [i_18 - 1]) ? 1 : 140));
            }
            for (int i_20 = 3; i_20 < 15;i_20 += 1)
            {
                var_42 = (arr_66 [i_9] [i_18]);
                var_43 = ((var_9 ? -6020901517962235956 : 1));
                arr_73 [i_9] [i_18] [i_9] [i_20] &= (((arr_62 [i_9] [i_18] [i_20]) * 7));
            }
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                var_44 = (~1);
                var_45 = (max(var_45, -5462400861877534753));
            }

            for (int i_22 = 0; i_22 < 16;i_22 += 1)
            {
                var_46 = (-89 > 19);
                var_47 = ((1 ? 0 : (arr_59 [i_18 - 1] [i_18] [i_18 - 1] [i_18])));

                for (int i_23 = 0; i_23 < 16;i_23 += 1) /* same iter space */
                {
                    var_48 = ((var_1 ? var_7 : var_1));
                    var_49 += (arr_35 [9] [i_18 - 1]);
                    var_50 *= (((arr_33 [i_9] [i_9]) - (var_3 | 0)));
                }
                for (int i_24 = 0; i_24 < 16;i_24 += 1) /* same iter space */
                {

                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        var_51 += ((95 << (((arr_27 [i_18 - 1] [i_18 - 1]) - 72))));
                        arr_87 [i_9] [i_18] [i_22] [i_18] [i_25] = ((59554 ? (arr_47 [i_9] [i_9] [i_18 - 1] [i_9] [i_24] [i_25]) : ((0 ? (arr_25 [i_9] [i_18]) : (arr_60 [i_9] [i_9] [i_18])))));
                    }
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        var_52 *= ((((var_8 ? var_4 : var_2))) ? ((7525721663236909648 ? 7525721663236909648 : var_3)) : ((((arr_44 [i_9] [i_9] [i_9] [i_9]) ? var_5 : 24))));
                        var_53 = (((((((arr_33 [i_9] [i_18 - 1]) != (arr_62 [i_9] [1] [i_9]))))) / (arr_35 [i_9] [i_24])));
                        var_54 += (((arr_71 [i_9] [i_18 - 1] [1]) & (arr_71 [12] [i_18 - 1] [i_22])));
                    }
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        var_55 = ((3764421604832359134 ? var_7 : (arr_26 [i_18] [i_22] [4])));
                        var_56 = ((((37 ? 1 : 1)) - 1));
                    }
                    arr_92 [i_18] = var_2;
                }
                arr_93 [i_18] [i_18] = ((7447025685075823742 * ((((arr_77 [1] [i_18 - 1] [i_22] [i_18 - 1]) * var_0)))));
                var_57 = (min(var_57, (((-(arr_27 [i_18] [i_18]))))));
            }
            for (int i_28 = 0; i_28 < 16;i_28 += 1) /* same iter space */
            {
                var_58 = (min(var_58, (arr_83 [i_18 - 1] [i_18] [1] [i_18 - 1])));
                arr_96 [i_9] [i_18] [i_18] [4] = (((arr_90 [i_9] [i_18] [i_18] [i_28] [i_28]) ? var_3 : (arr_76 [i_18])));
                var_59 = (min(var_59, (arr_51 [i_18] [i_18 - 1])));
                arr_97 [i_18] [i_18] [i_28] = (~var_5);
            }
            for (int i_29 = 0; i_29 < 16;i_29 += 1) /* same iter space */
            {
                var_60 = var_10;
                var_61 = var_1;
            }
            for (int i_30 = 0; i_30 < 16;i_30 += 1) /* same iter space */
            {
                var_62 = var_9;
                arr_102 [i_9] [i_18] [i_18] = (((((var_4 ? -89 : 0))) ^ ((1 | (arr_80 [i_9] [i_18] [i_18] [i_18])))));
                var_63 = (((arr_27 [i_18 - 1] [i_18 - 1]) | (arr_76 [i_18])));
            }

            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                arr_106 [i_9] [i_18] [i_9] [i_31] = (arr_88 [i_9] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18] [i_31]);
                var_64 *= ((-(((arr_77 [i_9] [i_18] [i_31] [i_9]) ? (arr_65 [i_31] [i_9] [1]) : var_7))));
                var_65 = (((((var_4 >> (((arr_66 [i_18] [i_18]) + 87))))) ? ((-89 ? (arr_26 [i_9] [i_9] [i_9]) : var_0)) : ((var_1 ? 1 : var_1))));
                var_66 = (min(var_66, 1));
            }
            for (int i_32 = 4; i_32 < 14;i_32 += 1)
            {
                var_67 = ((var_8 ? var_8 : (arr_76 [i_18])));
                arr_109 [i_9] |= ((var_4 ? 1 : ((var_9 ? var_7 : -3557702369147151900))));
                var_68 = (arr_26 [i_9] [i_18 - 1] [i_32 + 2]);
            }
            var_69 *= 1;
            var_70 = (((~var_8) ? 112 : var_1));
        }
    }
    var_71 = var_9;

    for (int i_33 = 0; i_33 < 1;i_33 += 1)
    {
        var_72 = -249;
        var_73 += 1;
    }
    for (int i_34 = 0; i_34 < 17;i_34 += 1)
    {
        var_74 = (((((max(var_6, var_2)))) + ((var_4 ? (((arr_112 [i_34]) ? (arr_111 [i_34] [2]) : var_2)) : (((arr_114 [i_34]) + var_6))))));
        /* LoopNest 2 */
        for (int i_35 = 0; i_35 < 1;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 17;i_36 += 1)
            {
                {
                    var_75 = (max(var_75, ((((((arr_116 [i_34] [i_35] [i_35]) ? -1 : (arr_112 [i_34]))) ^ ((((max((arr_116 [5] [i_35] [5]), var_4)) <= (arr_116 [i_36] [i_34] [i_34])))))))));
                    arr_120 [i_35] [i_36] = (arr_119 [i_34] [i_35] [i_36]);
                    arr_121 [i_35] [i_35] [i_36] = -var_4;

                    for (int i_37 = 0; i_37 < 17;i_37 += 1) /* same iter space */
                    {
                        var_76 = (arr_111 [i_34] [i_35]);
                        arr_124 [i_35] = (arr_116 [i_34] [i_35] [i_36]);
                        var_77 = (min(var_77, (arr_114 [i_34])));
                    }
                    /* vectorizable */
                    for (int i_38 = 0; i_38 < 17;i_38 += 1) /* same iter space */
                    {
                        var_78 = (((arr_110 [i_35]) * (arr_116 [1] [1] [i_34])));
                        var_79 = 3072;
                        var_80 |= (((((1 ? (arr_125 [i_36]) : var_4))) ? ((((arr_123 [i_34] [i_34] [i_36] [i_38] [15] [i_38]) == 127))) : (((arr_122 [i_36] [i_36] [i_36] [i_36]) ? 0 : var_7))));
                    }
                    var_81 = (-(min(0, ((var_5 ? 1 : var_8)))));
                }
            }
        }
        var_82 *= arr_110 [0];
    }
    /* vectorizable */
    for (int i_39 = 0; i_39 < 23;i_39 += 1)
    {
        arr_132 [i_39] = (((((arr_131 [i_39]) ? 255 : (arr_131 [11]))) <= ((((var_0 >= (arr_128 [i_39])))))));
        var_83 -= -1471647711779003334;
    }
    var_84 = (((1 == 0) ? 127 : -var_7));
    var_85 = (max(var_85, var_8));
    #pragma endscop
}
