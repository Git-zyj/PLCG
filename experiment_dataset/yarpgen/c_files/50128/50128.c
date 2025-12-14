/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(var_15, var_5);
    var_17 = -var_7;
    var_18 = ((var_2 ? var_5 : (max((min(var_3, var_8)), var_4))));
    var_19 = (((var_7 / ((var_15 ? var_15 : var_0)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_20 ^= (~68);
        arr_2 [i_0] = (max((arr_1 [i_0] [i_0]), (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_3] [i_0] = ((188 ? 185 : (arr_7 [i_3] [i_1] [i_0])));
                        arr_11 [i_0] [i_0] [22] [i_3] [i_0] = (671747507 | -6754723621119037679);
                        var_21 = ((((-32767 - 1) ? 1270403620 : -7944)));
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_22 = (max((max(var_10, (arr_13 [i_0] [i_1] [i_2] [i_4 + 1] [i_0]))), var_0));
                        arr_14 [i_4] = (((min(var_2, (arr_0 [i_0])))));
                        var_23 = (arr_12 [i_4] [i_4] [i_4 - 1] [i_4] [i_2]);
                    }
                    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_5] [i_5 - 1] [i_2] [i_1] [i_0] = var_14;
                        var_24 += var_7;
                        var_25 = (min(var_25, ((min(((max(var_14, var_14))), (max(var_10, var_11)))))));
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_2] [i_1] = (((var_6 ? (var_4 > var_7) : (min(var_2, var_4)))));

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_26 ^= (arr_12 [i_7] [i_7] [i_6 - 1] [i_7] [i_6 + 1]);
                            var_27 = ((var_12 ? (((arr_5 [i_6 - 1]) ? (arr_5 [i_6 - 1]) : (arr_5 [i_6 + 1]))) : 71));
                            var_28 = var_14;
                        }
                        for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_29 &= (-((((45523 ? 2721446760532157386 : 71)))));
                            var_30 = var_15;
                            arr_27 [i_0] = ((((-12 ? -107 : 193))));
                            arr_28 [i_2] [i_2] [i_2] [10] [9] = ((((((((var_5 <= (arr_0 [i_0])))) > (arr_3 [i_8 - 1])))) / var_1));
                        }
                        for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_31 = ((-4775143477428538368 ? var_3 : (((var_3 ? (((var_7 <= (arr_29 [8] [i_1] [i_2] [i_6 - 1] [i_9 + 1])))) : var_11)))));
                            arr_31 [i_0] [i_1] [i_9] [i_6 + 1] [i_9] = ((arr_16 [i_0] [i_1] [i_2] [i_6]) ? (arr_9 [i_6 - 1]) : ((((~(arr_30 [i_9 + 1] [9] [i_6] [i_2] [i_1] [i_0] [i_0]))) / (arr_12 [i_0] [i_9] [i_2] [22] [6]))));
                            arr_32 [i_0] [i_1] [i_6 + 1] [i_2] &= (~var_12);
                            arr_33 [i_9] [14] [i_9] [i_9] [i_9] [14] [i_9] = (arr_16 [4] [19] [i_2] [4]);
                        }
                        var_32 = (max(var_32, ((min(((((((min(var_1, var_8)))) <= var_14))), var_13)))));
                        var_33 = ((((((((arr_13 [i_6 - 1] [i_6] [i_0] [i_1] [i_0]) / (arr_12 [i_6] [i_2] [i_1] [i_2] [i_0])))))) / var_2));
                        var_34 = ((min(var_0, (arr_13 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]))));
                    }
                    arr_34 [i_0] [i_1] [i_2] = ((68 ? 705281409 : (-9223372036854775807 - 1)));

                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        arr_38 [i_0] [i_1] [15] = max(((min(var_9, var_8))), (arr_13 [i_0] [i_1] [i_2] [i_10 + 1] [i_10]));
                        arr_39 [i_0] [i_0] [i_2] [i_10 - 1] = (((((((min(var_1, var_12))) ? (~var_9) : (min(var_11, (arr_9 [i_0])))))) ? (((-(arr_26 [i_2] [i_2] [i_2] [10] [15])))) : (arr_29 [i_0] [i_0] [0] [3] [i_0])));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        arr_43 [i_0] = ((-((var_15 ? (~var_8) : var_6))));

                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            var_35 = (~(min((arr_30 [i_0] [i_1] [i_2] [i_2] [i_1] [i_12 - 1] [i_12 - 1]), ((((arr_8 [i_0] [i_1] [i_2] [i_11] [i_12]) / var_0))))));
                            var_36 *= (min(((((max((arr_16 [i_12 - 1] [i_11] [i_2] [i_0]), var_14))) ? (arr_25 [i_0] [i_12 + 1] [i_2] [i_0] [i_2]) : (((var_0 ? var_6 : var_4))))), (((((((arr_35 [i_0] [i_1] [i_0] [i_0]) > var_15))) >> (((arr_37 [i_0] [i_0] [i_2] [i_11]) - 194)))))));
                            var_37 = ((var_8 ? (max(var_15, var_12)) : (max(var_0, var_15))));
                            arr_46 [i_0] [i_0] [i_12] [1] [i_11] [1] [i_12] = ((!((max(var_1, -var_11)))));
                        }
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_49 [18] [i_0] = (((~(min(var_5, var_10)))));
                            var_38 = ((var_5 ? (((!(arr_0 [i_0])))) : (((!(arr_0 [i_13]))))));
                        }
                        arr_50 [i_0] = ((max((max(0, -3418010942367400346)), 79)));
                    }
                    var_39 = ((((~var_2) <= (min((arr_13 [i_0] [13] [13] [i_2] [13]), var_2)))));
                }
            }
        }
        var_40 = (min(var_40, (((!((var_11 <= (arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {
        var_41 *= max(188, (-32767 - 1));
        var_42 = (min(var_42, (((~((var_9 ? var_6 : var_3)))))));
        arr_53 [i_14] = var_3;
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
    {
        var_43 = (((arr_48 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) ? var_10 : (var_7 <= var_11)));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 19;i_17 += 1)
            {
                {
                    var_44 = var_4;
                    var_45 = var_3;
                    arr_62 [i_16] [i_17] = var_9;
                }
            }
        }
        var_46 = (max(var_46, (arr_58 [i_15] [i_15])));
        var_47 = (((((arr_21 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) > var_10)) ? (arr_51 [i_15] [i_15]) : (arr_30 [i_15] [i_15] [i_15] [19] [i_15] [19] [i_15])));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
    {
        var_48 -= (((~var_11) / (var_6 <= var_5)));
        arr_65 [i_18] [i_18] = (var_4 + 0);
        arr_66 [16] [i_18] = ((arr_15 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) ? (arr_15 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]) : (arr_15 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]));

        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 21;i_22 += 1)
                    {
                        {
                            var_49 *= var_0;
                            var_50 = (var_4 <= var_6);
                            var_51 = ((arr_67 [i_22 - 1] [i_20]) ? var_2 : var_14);
                            arr_79 [i_18] [i_19] [i_20] [18] |= (((!var_11) <= -var_1));
                        }
                    }
                }
            }
            var_52 ^= (arr_69 [i_19] [i_18]);
            arr_80 [i_18] [7] = (((arr_44 [i_19] [i_19] [i_19] [i_19] [i_18] [i_18]) ? var_15 : (arr_44 [i_18] [i_19] [i_19] [i_19] [i_19] [i_19])));
        }
        for (int i_23 = 2; i_23 < 20;i_23 += 1)
        {
            var_53 = var_1;

            for (int i_24 = 0; i_24 < 23;i_24 += 1)
            {
                /* LoopNest 2 */
                for (int i_25 = 1; i_25 < 19;i_25 += 1)
                {
                    for (int i_26 = 2; i_26 < 20;i_26 += 1)
                    {
                        {
                            arr_93 [i_18] [i_23 + 1] [i_24] [i_25] [i_25] [12] = ((((var_8 + (arr_91 [i_18] [i_23] [i_18] [i_25] [i_25] [i_24] [i_24]))) <= var_13));
                            var_54 = ((arr_16 [i_18] [i_18] [i_18] [i_18]) ? var_6 : (arr_86 [i_23] [i_23] [i_23] [i_25 + 3]));
                        }
                    }
                }
                var_55 = (((((~(arr_21 [i_18] [i_18] [i_23] [i_23] [i_23 + 3] [i_23] [i_18])))) | (arr_87 [i_18] [i_23] [i_18] [i_18])));
                arr_94 [i_18] [1] = var_5;
                var_56 = (min(var_56, (((var_12 ? var_4 : var_2)))));
            }
            for (int i_27 = 1; i_27 < 21;i_27 += 1) /* same iter space */
            {
                var_57 = (arr_69 [i_23 + 3] [i_23 + 3]);
                arr_99 [i_27] [i_23] [i_18] = (var_12 + var_6);
            }
            for (int i_28 = 1; i_28 < 21;i_28 += 1) /* same iter space */
            {
                arr_103 [10] [10] = (((arr_61 [19] [i_23 + 2] [i_23 + 1]) / var_1));
                var_58 = (max(var_58, (((((arr_12 [i_23] [10] [i_18] [10] [i_18]) + 9223372036854775807)) >> (var_8 - 37296)))));
                arr_104 [i_23 + 2] [i_23 + 2] [i_18] = (((((var_12 ? var_14 : var_6))) ? (arr_71 [i_23 + 2]) : var_3));
            }

            for (int i_29 = 0; i_29 < 23;i_29 += 1)
            {
                arr_109 [i_29] = ((~(arr_75 [i_23] [i_23] [i_23 - 2] [i_23 + 2] [i_23 + 1] [4])));
                /* LoopNest 2 */
                for (int i_30 = 1; i_30 < 19;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 23;i_31 += 1)
                    {
                        {
                            var_59 ^= (((arr_75 [i_23 - 2] [i_29] [i_30 + 1] [i_30] [i_30 + 1] [i_31]) | (arr_8 [i_18] [i_23 + 2] [i_29] [i_30 + 2] [i_31])));
                            arr_116 [i_31] [i_30] [i_29] [i_23] [i_18] = (((arr_75 [i_18] [i_18] [i_29] [i_23 - 1] [i_31] [i_30 + 1]) ? var_0 : (arr_37 [i_30 + 3] [i_23 - 1] [i_23 + 1] [i_23])));
                        }
                    }
                }
                var_60 = (((((var_3 ? var_5 : var_0))) ? var_9 : var_12));
            }
            for (int i_32 = 1; i_32 < 21;i_32 += 1)
            {
                var_61 ^= -var_11;
                var_62 = ((!(arr_69 [i_32 - 1] [i_23 - 2])));
                arr_120 [i_18] [1] = var_0;
            }
        }
    }
    #pragma endscop
}
