/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_12, (max(var_15, (var_7 | var_13)))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) ? ((-((var_5 ? var_5 : var_4)))) : ((min(-3332154, 3332162)))));
        var_18 = (min(var_18, (((~(arr_1 [i_0 + 1]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 = (min(var_19, (arr_15 [i_2] [i_4] [i_3] [i_2] [i_1])));
                            var_20 = (min(var_20, var_9));
                            arr_17 [8] = (((((min(0, 7)))) ? (((arr_9 [i_3] [i_3] [i_3] [i_4 - 1]) + (arr_9 [1] [i_4] [i_4] [i_4 - 1]))) : ((max(63233, (arr_4 [i_1]))))));
                            arr_18 [i_1] [i_1] [1] [i_1] [i_1] [i_1] [i_1] = (max((min(((max(0, 65064))), (min(256, 8331476333725076428)))), ((min(255, (arr_15 [i_4 - 1] [i_1] [i_1] [9] [i_1]))))));
                        }
                    }
                }
                arr_19 [i_1] [i_2] [i_3] = ((var_8 ? (min(((min(var_8, 0))), (max(var_4, (arr_4 [i_2]))))) : (((1 ? (arr_8 [i_1]) : var_5)))));
            }
            arr_20 [5] = max((max((var_14 * var_1), 0)), 0);
            arr_21 [i_2] = (min((max(((min(22961, 0))), var_11)), 50937));
            var_21 = (min(((max(64792, var_9))), (max((max(var_13, (arr_10 [i_1]))), ((min(34808, var_7)))))));
            arr_22 [i_1] &= ((-(((!((min(var_3, 23183))))))));
        }
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_22 -= var_4;
            var_23 *= var_6;
        }
        for (int i_7 = 3; i_7 < 6;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 8;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_38 [i_1] [i_1] [i_1] [4] [i_8] [6] = (var_11 ? ((min(2289945995052418667, (arr_14 [i_1] [i_8 + 1] [i_1])))) : (max(var_0, var_10)));
                            var_24 ^= (min((min(76, 1311566967008228969)), var_8));
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    var_25 = (min(65530, (arr_3 [i_7 + 2])));
                    var_26 = (max((min((max((arr_14 [1] [i_7] [i_7]), 173)), 20435)), ((min(4032, var_12)))));
                }
                var_27 = (min(3332165, ((-(((arr_25 [i_8] [1] [i_1]) & (arr_10 [i_8])))))));
            }
            /* vectorizable */
            for (int i_12 = 4; i_12 < 7;i_12 += 1) /* same iter space */
            {
                var_28 = (min(var_28, 124));
                var_29 += 1;
                arr_44 [i_12] = ((var_5 ? 0 : var_13));
                arr_45 [i_12 + 1] &= ((var_11 ? (arr_36 [1] [i_7 + 2] [i_12 - 3] [0] [6]) : var_4));
            }
            for (int i_13 = 4; i_13 < 7;i_13 += 1) /* same iter space */
            {
                arr_49 [3] [i_7] [i_13] = var_7;
                arr_50 [i_13] [i_7] [i_1] [i_1] = arr_40 [1] [i_7 - 3] [7] [3] [i_13] [7];
                var_30 = var_11;

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    arr_54 [i_7] [i_7] [0] = (arr_13 [i_13] [i_7 + 1] [i_7] [i_7]);

                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        arr_57 [i_1] [i_1] [i_1] [i_7] [i_13] = var_11;
                        var_31 = (min(var_8, (((arr_15 [i_7 + 2] [i_7] [i_7 + 2] [i_7 - 2] [i_7]) ? 3836299261 : (arr_24 [i_7 - 1] [i_7 + 3] [i_14])))));
                        var_32 ^= (max(1, (max(1, var_15))));
                    }
                    for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        arr_61 [i_1] [i_1] [i_16] [2] = (max((((arr_14 [i_7 + 1] [i_16 - 1] [i_13 + 1]) ? (arr_14 [i_7 + 1] [i_16 - 1] [i_13 - 3]) : -3332171)), ((max(var_12, 30127)))));
                        arr_62 [i_1] [i_16] [i_7] [i_16] [i_16] [i_7] [i_16] = (max(-9223372036854775779, 3332152));
                    }
                    for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
                    {
                        arr_67 [i_1] [i_7] [i_13] [i_17] [i_14] [i_14] [i_17 - 1] = (min((max((((arr_28 [i_1] [i_1] [i_13]) ? var_9 : var_11)), (arr_5 [i_1] [i_7 - 2]))), (max((((arr_58 [i_1] [i_7 + 3] [i_13] [i_14] [i_13]) + (arr_6 [i_1] [0] [1]))), var_7))));
                        arr_68 [i_1] [i_1] [i_17] [i_14] [i_17] = (max(((max(var_9, (arr_40 [i_7 - 1] [i_7] [i_13 - 1] [i_13] [i_17 - 1] [i_17])))), (((arr_40 [i_7 + 3] [i_7 + 3] [i_13 - 3] [i_7 + 3] [i_17 - 1] [i_17]) | (arr_40 [i_7 - 1] [i_13] [i_13 - 1] [i_14] [i_17 - 1] [i_14])))));
                    }
                    for (int i_18 = 1; i_18 < 1;i_18 += 1) /* same iter space */
                    {
                        arr_71 [i_1] [i_18] [i_18] [i_1] [i_18 - 1] [i_13] [i_7] = ((!((!(arr_42 [2] [i_7 - 3] [i_13 - 1] [2])))));
                        var_33 ^= var_9;
                        var_34 = (min((max((min(2097024, 50937)), ((min(7528, 6149906982228740954))))), (max((((!(arr_15 [i_1] [1] [1] [i_14] [3])))), (arr_51 [3] [0] [i_13] [i_13 - 3] [i_13])))));
                    }
                }
                for (int i_19 = 2; i_19 < 7;i_19 += 1)
                {
                    arr_74 [6] [i_1] [i_7] [1] [i_13 + 1] [i_19 + 1] = var_10;
                    arr_75 [i_1] [i_7 + 2] [i_13] [i_19] = -13554;
                }
                arr_76 [i_1] [i_13 - 2] = ((min(0, (min(15512680041270048327, var_15)))));
            }
            var_35 = max((max((var_15 | 3149537546), var_0)), (arr_34 [i_7 - 2] [i_7]));
            var_36 = var_4;
        }
        var_37 = (!(((var_10 ? 4171 : 49))));

        /* vectorizable */
        for (int i_20 = 0; i_20 < 10;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    {
                        arr_85 [i_21] [i_21] [i_20] [i_21] = ((var_13 ? (arr_59 [i_1] [i_21] [i_22]) : (arr_42 [i_1] [9] [4] [i_22])));

                        for (int i_23 = 0; i_23 < 10;i_23 += 1)
                        {
                            var_38 = var_12;
                            arr_89 [i_21] [i_20] [i_22] [i_22] [i_20] = ((~(arr_7 [i_22] [i_20])));
                        }
                        for (int i_24 = 1; i_24 < 8;i_24 += 1)
                        {
                            var_39 = 512;
                            arr_93 [i_1] [i_24] [i_21] [i_21] [i_24] = -var_9;
                            var_40 = (((arr_41 [3] [3] [i_24 - 1] [6] [i_24 + 2] [i_24 + 2]) ? var_13 : var_10));
                        }
                        arr_94 [1] [i_21] = (!58293);
                    }
                }
            }
            arr_95 [i_1] [1] = (arr_83 [i_1] [6] [3] [1]);
            arr_96 [i_20] [i_20] = ((var_1 ? var_10 : var_5));

            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {

                for (int i_26 = 0; i_26 < 10;i_26 += 1)
                {
                    arr_102 [i_1] [i_1] [6] [i_26] = ((3332165 ? 46838 : -6149906982228740954));
                    var_41 = ((35387 ? -225713645662859457 : -7871157544145489108));
                    arr_103 [i_1] [i_20] [0] [4] [i_25] = (((201 ? var_10 : var_13)));
                }
                var_42 = ((var_1 / ((-(arr_1 [i_1])))));
                var_43 = (min(var_43, var_1));
            }
        }
        var_44 = (max(var_44, (arr_58 [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_27 = 0; i_27 < 10;i_27 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_28 = 2; i_28 < 7;i_28 += 1)
        {
            for (int i_29 = 3; i_29 < 9;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 10;i_30 += 1)
                {
                    {
                        var_45 = (max(((~(min(-14626, var_2)))), (arr_8 [i_28])));
                        var_46 -= 14777;
                        arr_112 [i_29] = 58303;
                        var_47 = ((-((min(4921, (arr_25 [i_27] [i_27] [i_27]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_31 = 2; i_31 < 6;i_31 += 1)
        {
            for (int i_32 = 0; i_32 < 10;i_32 += 1)
            {
                {
                    var_48 = ((((~(~var_10))) & var_12));
                    arr_119 [i_31] [i_31] [4] = (max(((max(var_12, var_3))), 23286));
                    arr_120 [i_31] [i_31] [i_32] [i_32] = (min((min((arr_86 [i_32]), ((var_14 ? (arr_46 [2]) : 9223372036854775807)))), ((((arr_8 [i_31 + 2]) != var_3)))));
                }
            }
        }
        arr_121 [i_27] = var_0;
        var_49 = -361198985;
    }
    #pragma endscop
}
