/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (((!1) | ((((arr_5 [i_1] [i_0 + 1] [i_1]) > var_12)))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_18 = (((min(1, (arr_4 [i_0] [i_1]))) ? (arr_5 [i_1] [i_1] [i_0 + 1]) : 4294967277));
                    var_19 = (arr_4 [i_0] [i_1]);
                    var_20 = ((((4294967257 > (arr_8 [i_1] [i_2 - 1] [i_2])))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_21 = (arr_0 [i_3 - 1]);

                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_22 += ((~(arr_11 [i_0] [i_1] [i_4])));
                            var_23 = (((arr_5 [i_1] [i_1] [i_3 - 1]) * (arr_2 [i_0 + 1])));
                            var_24 += (((arr_3 [i_3 - 1] [i_0 - 1]) + (arr_3 [i_3 - 1] [i_0 - 1])));
                            var_25 = (((arr_10 [1] [i_3 - 1] [i_1] [i_0]) ? (arr_10 [i_3] [i_3 - 1] [i_3] [i_3]) : (arr_9 [i_4 - 1] [i_1] [i_1] [i_0 - 2])));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_6] [i_4] [i_1] [17] [i_1] [17] [i_0] = ((-(~4294967277)));
                            var_26 += (arr_1 [i_0]);
                            var_27 = (((arr_0 [i_3 - 1]) ? (arr_9 [i_3 - 1] [i_3 - 1] [i_1] [i_3 - 1]) : (arr_0 [i_3 - 1])));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_28 = ((((((arr_5 [i_1] [i_7] [i_7]) ? (arr_12 [i_7] [i_3 - 1] [i_1] [i_0]) : (arr_19 [i_1] [i_3] [i_7])))) ? (((var_4 != (arr_20 [i_0] [i_1] [i_1] [i_1] [i_4] [i_7])))) : (18 && var_4)));
                            var_29 = ((1 ? ((16217 ? 18 : var_3)) : -var_13));
                            var_30 = -1;
                            var_31 = (arr_11 [i_0] [i_0 + 1] [i_0 - 1]);
                            var_32 = (max(var_32, (((~((1 << (arr_20 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_33 = (((0 / var_16) ? (arr_24 [i_0 + 1] [i_0 - 2] [i_8] [i_1]) : (~var_12)));
                                var_34 = (((((-(arr_4 [i_1] [i_1])))) ? 16217 : var_16));
                                var_35 = (min(var_35, 0));
                            }
                        }
                    }
                    var_36 = (arr_20 [i_0] [i_1] [i_3] [12] [i_1] [1]);
                }
            }
        }
    }
    var_37 = var_0;
    var_38 = var_2;

    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
        {
            var_39 = (max(var_39, (((-1 | (~1))))));
            var_40 = ((2603 && (((~(arr_2 [i_10]))))));
            var_41 = (max(var_41, var_0));
            arr_33 [i_10] [i_11] = ((-(((arr_11 [8] [i_10] [i_10]) ? 1 : (arr_4 [i_10] [i_10])))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_39 [i_10 + 1] [i_11] [i_10] [i_12] [i_13] [i_13] = (arr_34 [i_10] [i_12]);
                        var_42 = ((+((var_5 ? (arr_18 [i_10] [i_10] [i_11] [i_10] [i_13]) : var_14))));
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
            {
                var_43 = ((((min((((arr_36 [i_10] [i_14] [i_14] [i_15] [i_10]) ? 16228 : (arr_2 [i_10]))), -12480))) ? (arr_27 [i_10 + 1] [i_14] [i_15] [i_10] [i_14]) : ((~(((arr_3 [1] [i_10]) ? var_13 : var_8))))));
                var_44 = ((min(12, (arr_38 [i_10] [i_10]))) / (arr_5 [i_10] [i_14] [i_15]));
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        {
                            var_45 = (min((arr_16 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1] [4]), (arr_16 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1] [i_10])));
                            var_46 = (((((1 >= (((4294967282 == (arr_3 [i_15] [i_15]))))))) - ((((max(1, var_16)) || ((min(var_4, 4294967282))))))));
                            var_47 |= var_7;
                        }
                    }
                }
                var_48 = var_10;
            }
            /* vectorizable */
            for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
            {

                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    var_49 = (((var_14 / (arr_42 [i_18] [i_18] [i_14]))));
                    var_50 = (((arr_44 [i_10 + 1]) ? (arr_14 [i_10] [i_14] [i_18] [i_19]) : (arr_10 [i_18] [i_18] [i_10 + 1] [i_10 + 1])));

                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_51 = (~1);
                        var_52 = (1 || var_15);
                    }
                    var_53 = 7;
                }
                for (int i_21 = 2; i_21 < 15;i_21 += 1)
                {
                    var_54 = ((arr_24 [i_10 + 1] [i_18] [i_18] [i_10]) || 1);

                    for (int i_22 = 0; i_22 < 16;i_22 += 1)
                    {
                        var_55 = -1;
                        var_56 = (22 ^ 1);
                    }
                }
                var_57 = (~1);
            }
            /* LoopNest 3 */
            for (int i_23 = 1; i_23 < 1;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 16;i_24 += 1)
                {
                    for (int i_25 = 3; i_25 < 12;i_25 += 1)
                    {
                        {
                            arr_74 [i_10] [i_14] [i_10] [i_23] [i_24] [i_25 + 1] [i_10] = (max((arr_0 [i_23]), var_2));
                            var_58 = (arr_6 [i_23]);
                        }
                    }
                }
            }
        }
        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            arr_77 [1] [1] [i_26] |= ((((18 - (arr_41 [i_10 + 1] [i_10 + 1]))) - ((((arr_41 [i_10 + 1] [i_10 + 1]) ? (arr_67 [0]) : var_4)))));
            var_59 = (((arr_29 [i_10 + 1]) ? ((((max(var_13, (arr_47 [i_10] [i_26] [i_10] [i_26] [i_26] [i_26])))) - -1)) : ((((arr_38 [i_10] [i_10]) <= (((arr_62 [i_10] [i_10] [i_26] [i_26] [i_26] [i_26]) ? (arr_6 [i_26]) : (arr_14 [i_10 + 1] [i_26] [i_26] [i_10 + 1]))))))));
        }
        for (int i_27 = 0; i_27 < 0;i_27 += 1)
        {
            var_60 = ((+(((((arr_5 [i_10] [i_27 + 1] [i_27]) != (arr_37 [i_10] [i_10 + 1] [i_27 + 1] [i_27]))) ? (arr_76 [i_10]) : (((1 >= (arr_17 [i_27 + 1] [i_27 + 1] [i_27] [1] [i_10]))))))));

            for (int i_28 = 0; i_28 < 1;i_28 += 1)
            {
                var_61 = (min(((+(min((arr_18 [i_10] [i_10] [1] [i_10] [i_28]), 1)))), ((max(((1 ? var_9 : var_5)), -18454)))));
                var_62 = (((max(1, 4294967295))));
            }
            for (int i_29 = 0; i_29 < 16;i_29 += 1)
            {
                var_63 = (~var_14);
                var_64 = arr_3 [i_10 + 1] [i_27 + 1];
            }
            arr_86 [i_10] = arr_25 [i_10 + 1] [i_27 + 1] [i_27] [i_27 + 1] [i_10 + 1] [i_10 + 1];
        }
        var_65 = ((-((((~0) <= var_6)))));
        var_66 = ((((max((arr_82 [i_10] [i_10 + 1]), (arr_66 [i_10 + 1] [i_10] [i_10 + 1] [i_10] [i_10 + 1])))) ? ((((!(arr_62 [1] [6] [i_10] [i_10] [i_10] [i_10 + 1]))))) : (max((arr_75 [i_10 + 1]), (arr_16 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10] [i_10 + 1])))));
    }
    /* vectorizable */
    for (int i_30 = 0; i_30 < 1;i_30 += 1)
    {
        var_67 = (((((var_16 ? var_13 : (arr_17 [i_30] [i_30] [i_30] [i_30] [i_30])))) ? (arr_15 [i_30]) : 1));
        var_68 = (-(arr_23 [i_30] [i_30] [i_30] [i_30] [i_30]));
    }
    #pragma endscop
}
