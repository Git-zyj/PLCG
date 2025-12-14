/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((min(-26954, 14282)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = ((135 ? 10448314040047173640 : -92));
                    arr_9 [i_0] [i_0] = (((arr_7 [i_0] [i_0] [i_1] [i_0]) ? (((max(0, ((max(1, 37))))))) : ((-3223873404558040685 - (arr_1 [i_0])))));
                    arr_10 [i_0] [i_1] [i_2 - 1] = (((((max((arr_4 [i_0] [i_0]), var_3))) ? (arr_0 [i_0] [i_0]) : ((var_9 ? (arr_2 [i_0] [i_1]) : -37)))));
                }
            }
        }
        arr_11 [8] |= -13332;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] = var_10;
            var_14 = ((var_5 ? (arr_15 [i_4]) : (arr_13 [i_3])));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_21 [i_3] [i_3] [i_3] [i_3] = 37;
                arr_22 [i_4] = (((arr_14 [i_3] [i_4] [i_5]) ? var_1 : var_4));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_15 = ((-1 <= (((arr_23 [i_6] [i_6] [i_5] [i_3] [1] [i_3]) ? var_11 : var_8))));
                            var_16 = (min(var_16, ((((arr_25 [i_3]) ? (arr_25 [i_7]) : (arr_25 [i_5]))))));
                        }
                    }
                }
                var_17 = (((arr_24 [i_3] [i_4] [i_4] [i_4]) ? (arr_24 [i_5] [i_5] [i_5] [i_5]) : (arr_24 [i_3] [i_4] [i_5] [i_4])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        {
                            var_18 = (arr_30 [1] [i_4] [11] [i_3] [i_4]);
                            var_19 = (min(var_19, ((((((var_2 ? (arr_17 [i_5]) : (arr_24 [i_4] [i_4] [i_5] [i_4])))) || (!0))))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
        {
            var_20 = ((~(arr_20 [i_3] [i_3])));
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_43 [i_11] [0] [0] [i_11] = 29;
                        var_21 = (arr_20 [i_10] [i_10]);
                        arr_44 [i_3] [i_3] [i_11] = ((-(arr_17 [i_11 + 1])));
                    }
                }
            }
        }
        var_22 = ((((((arr_40 [i_3] [i_3] [i_3] [i_3]) ? var_11 : -37))) || (arr_31 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            {

                for (int i_15 = 3; i_15 < 16;i_15 += 1)
                {
                    arr_53 [i_14] = (((min(var_1, (var_10 || 255)))));
                    arr_54 [i_14] [i_14] = var_2;
                    var_23 |= -1;
                    var_24 = ((((arr_50 [i_13]) ? (arr_45 [i_15 - 2]) : ((-(arr_52 [i_13] [i_13]))))));
                }

                for (int i_16 = 2; i_16 < 16;i_16 += 1)
                {
                    var_25 = (arr_49 [i_16 + 1] [i_16 - 2]);

                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        arr_60 [i_13] [i_13] [i_16] [i_14] = (min(11414, (max(((var_11 ? (arr_59 [i_13] [i_13] [i_16] [i_14]) : (arr_47 [i_13] [i_14]))), (((-(arr_55 [i_13]))))))));
                        arr_61 [i_13] [16] [i_16] [i_14] [13] = ((((((var_9 != (arr_58 [i_16 + 2] [i_16 - 1] [i_16 - 1]))))) >= var_6));
                    }

                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        var_26 = ((20 || ((((var_1 + 2147483647) >> ((((var_2 ? -15288 : 28209)) + 15318)))))));
                        arr_65 [i_14] [i_16] [i_14] [i_18] [15] = ((-805989206 != (((0 >= var_5) ^ (arr_47 [i_13] [i_14])))));
                    }
                }
                for (int i_19 = 3; i_19 < 14;i_19 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_20 = 4; i_20 < 17;i_20 += 1)
                    {
                        for (int i_21 = 4; i_21 < 16;i_21 += 1)
                        {
                            {
                                arr_74 [i_13] [i_14] [i_19] [i_20 + 1] [i_21] = ((-37 ? 1 : 48));
                                arr_75 [i_14] [i_14] [i_19 + 1] [i_20] [i_19 + 4] = (((-var_3 || -28) ? var_4 : var_7));
                                arr_76 [i_13] [i_14] [1] [i_14] [11] [i_14] = ((((max(0, 6100621149394911428))) ? (((arr_59 [i_13] [0] [16] [i_14]) ? -1 : (arr_59 [i_21] [i_13] [i_19] [i_14]))) : (((max(43, 254))))));
                                var_27 = (min(var_27, (0 || 113)));
                            }
                        }
                    }
                    var_28 = ((max(((~(arr_72 [i_13] [i_13] [i_13])), 60))));
                    arr_77 [i_14] [i_14] [i_14] = 1973540809;
                    arr_78 [i_14] [i_14] [i_14] [i_14] = -18;
                }
                for (int i_22 = 3; i_22 < 14;i_22 += 1) /* same iter space */
                {
                    arr_82 [i_13] [i_14] = ((((max((arr_57 [i_22] [i_14] [i_13] [i_13]), 24))) != (max(120, var_0))));
                    var_29 |= -1;
                }
                /* vectorizable */
                for (int i_23 = 3; i_23 < 14;i_23 += 1) /* same iter space */
                {
                    arr_85 [i_14] [i_14] [i_13] = (arr_46 [i_23 + 4]);
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 18;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 18;i_25 += 1)
                        {
                            {
                                var_30 = 15731528183464771263;
                                var_31 |= (var_3 / -18);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 1; i_26 < 14;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 18;i_27 += 1)
                        {
                            {
                                arr_99 [i_13] [i_14] [i_23] [i_26] [i_14] = (((arr_79 [2] [16] [i_23] [16]) ^ ((var_10 ? (arr_79 [i_13] [0] [i_26] [i_27]) : (arr_72 [i_13] [i_13] [i_14])))));
                                var_32 += (((arr_59 [i_23 - 3] [i_14] [i_23] [i_13]) ? var_11 : var_5));
                                arr_100 [5] [i_14] [5] [i_26] = (((arr_98 [i_23 - 3] [i_23 + 3] [i_23 - 1] [i_26 + 2] [i_26 + 3]) ? (arr_98 [i_23 - 1] [i_23 + 4] [i_23 - 2] [i_26 + 3] [i_26 + 3]) : (arr_98 [i_23 - 2] [i_23 + 1] [i_23 + 1] [i_26 + 3] [i_26 + 3])));
                                arr_101 [i_14] [i_26 + 2] [3] [8] [i_14] = (arr_64 [i_14] [i_26] [14] [i_14] [i_13]);
                            }
                        }
                    }
                    arr_102 [i_14] [i_14] [10] [7] = (var_9 * var_3);
                }
                var_33 = ((~(arr_73 [i_14])));
                var_34 = var_9;
            }
        }
    }
    #pragma endscop
}
