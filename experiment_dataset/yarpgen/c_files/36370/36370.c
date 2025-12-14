/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((max(8605612353565603158, 125829120)), ((-(var_3 - 547608330240)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_20 += 0;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [6] [i_3] [i_2] [1] [i_0] = (arr_3 [i_3] [i_2] [8]);
                        arr_10 [i_0] [i_1] = (~238);
                    }
                }
            }
            var_21 = ((~var_1) ? ((((!-547608330232) & ((((arr_2 [1] [7] [i_0]) != var_8)))))) : ((max(var_12, 2890306237244306143))));
            var_22 *= (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) > (arr_6 [i_1])));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_23 -= ((((((arr_3 [i_4] [i_0] [i_4]) + (arr_4 [5] [i_4] [3] [8])))) ? var_2 : ((((var_11 || ((!(arr_8 [9] [i_4] [1] [i_0])))))))));
            arr_13 [i_0] [i_4] = (~154);
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_19 [i_6] = (arr_3 [i_6] [i_5] [i_0]);
                    var_24 = (~var_7);
                }
            }
        }

        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            arr_22 [i_0] [i_7 - 1] = var_6;
            var_25 = (((max((arr_21 [i_7 - 1] [i_7 - 1] [i_7]), (arr_21 [i_7 + 1] [4] [4]))) & (max(var_8, var_5))));

            for (int i_8 = 2; i_8 < 7;i_8 += 1)
            {
                var_26 = (max(var_26, (arr_8 [6] [i_8] [i_8 - 2] [3])));
                arr_25 [i_0] [2] [i_8] = (arr_14 [i_8 - 2]);
                arr_26 [5] [7] [i_8] &= ((-((~(arr_11 [i_0])))));
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_27 = (((arr_23 [i_0] [i_7] [9] [i_9 + 1]) ? var_11 : (arr_20 [i_7])));
                            var_28 = var_4;
                            arr_32 [9] [9] [9] = ((~(((!(arr_7 [i_7 + 1] [8] [i_10] [9] [i_10] [i_10]))))));
                            arr_33 [5] [i_7] [i_8] [9] [i_10] = var_5;
                        }
                    }
                }
            }
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            var_29 = ((+(((arr_23 [i_11] [i_11] [i_11 - 1] [i_13]) ? var_4 : (arr_41 [i_12])))));
                            arr_42 [i_13] [i_11] [i_11 - 1] [i_11] [i_0] = var_11;
                            arr_43 [i_0] [i_7] [4] [i_12] [i_11 + 1] [i_11] [5] = ((((((((238 ? var_11 : var_11))) ? (!var_7) : (((arr_31 [3] [i_11 + 1] [i_12] [i_13]) ? (arr_30 [i_13] [i_13]) : var_2))))) ? var_10 : ((var_6 ? (((arr_18 [i_0] [i_0]) ? var_18 : var_10)) : (1 / 126)))));
                            arr_44 [i_13] [i_11] [i_0] [i_11] [i_0] = var_11;
                        }
                    }
                }
                var_30 ^= (((~(arr_31 [i_0] [i_7 - 1] [i_11] [1]))));
                arr_45 [i_11] [i_0] [i_7] [i_11] = (234 / -2199023255551);
                arr_46 [i_11] [i_7] [i_11] = ((-((~(arr_1 [i_7 + 1])))));
            }
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_31 = (min(var_31, 146));
                            arr_53 [i_16] [i_15] [i_15] [i_0] = (arr_0 [i_15]);
                            var_32 = ((((var_18 ? var_4 : var_4))) && ((max((arr_4 [i_7] [i_7] [7] [i_7 - 1]), var_1))));
                        }
                    }
                }
                arr_54 [i_14] [i_7] [8] &= ((var_9 & ((((!((1 || (arr_15 [2])))))))));

                /* vectorizable */
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    var_33 = var_13;
                    var_34 -= (arr_34 [i_7] [i_7] [i_7 + 1] [i_7]);
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    arr_59 [i_0] [i_7 - 1] [i_14] [i_18] [i_18] [8] = (547608330258 + (((var_10 - (arr_0 [i_0])))));
                    var_35 = (((arr_7 [i_0] [i_0] [2] [i_7 - 1] [8] [i_14]) && (arr_7 [1] [0] [8] [i_7 + 1] [i_14] [i_0])));
                }
            }
            var_36 = (!var_4);
        }
        arr_60 [i_0] [i_0] = (((((max((!var_14), (arr_30 [i_0] [i_0]))))) & (var_0 & var_1)));
    }
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 1;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            {
                arr_67 [i_19] = var_0;
                var_37 = 1;
            }
        }
    }

    for (int i_21 = 0; i_21 < 1;i_21 += 1)
    {
        var_38 = (min(var_38, (1 + 631292693)));
        var_39 = -32758;
    }
    for (int i_22 = 1; i_22 < 8;i_22 += 1)
    {
        /* LoopNest 2 */
        for (int i_23 = 2; i_23 < 8;i_23 += 1)
        {
            for (int i_24 = 2; i_24 < 7;i_24 += 1)
            {
                {
                    arr_81 [1] [3] [i_24] = var_13;
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 10;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 10;i_26 += 1)
                        {
                            {
                                var_40 = (arr_89 [i_22] [0] [i_24] [i_26] [i_26] [0] [i_24]);
                                arr_90 [i_22 + 1] [i_23 - 2] [i_24] [i_25] [i_26] = (var_4 & var_11);
                            }
                        }
                    }
                    var_41 = -126;
                    arr_91 [i_24] [3] [i_22 - 1] [i_22 - 1] = var_14;
                    arr_92 [i_24] [5] [3] = (((((!((var_8 && (arr_82 [i_22] [i_24 + 2] [i_24 - 1] [3] [i_22]))))))) & (((arr_77 [i_22 - 1] [i_23] [2]) & var_18)));
                }
            }
        }
        var_42 = ((~((var_3 & (!var_8)))));
    }
    for (int i_27 = 0; i_27 < 23;i_27 += 1)
    {
        var_43 = (min(var_43, ((max(-32755, ((~((max(var_10, 0))))))))));
        arr_96 [i_27] [i_27] = var_7;
        var_44 = 8945615162321853606;
    }
    var_45 = (~var_12);
    #pragma endscop
}
