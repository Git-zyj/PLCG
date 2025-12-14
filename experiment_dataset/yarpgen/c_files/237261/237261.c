/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = var_0;
    var_17 = 83;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [i_2] [i_0] [i_0] = (max(((var_0 ? (arr_6 [i_0] [i_1 - 1] [1]) : 79)), ((-(var_7 ^ 1)))));

                            for (int i_4 = 0; i_4 < 22;i_4 += 1)
                            {
                                var_18 = -var_7;
                                arr_15 [i_0] [i_1] [5] [i_3] [i_0] = ((((var_14 ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))) ? 83 : var_6);
                                var_19 = ((61440 ? 1473 : (arr_7 [i_0] [i_0])));
                                var_20 = (min(var_20, -92));
                                var_21 = var_7;
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] = (arr_13 [i_1] [9] [i_0 - 1] [i_0] [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_22 = (max(var_22, 18446744073709551601));
                            var_23 = max(((min(var_2, var_3))), (min((arr_0 [i_0 - 1]), var_4)));
                            arr_21 [i_0] [8] [8] [i_6] [i_0] = var_4;
                        }
                    }
                }

                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    var_24 = (max((~var_11), (min(var_11, ((var_12 ? var_0 : var_5))))));
                    arr_24 [1] [i_1] [i_0] = ((244 ? var_5 : (min((arr_2 [i_7 + 2] [i_0] [i_0 + 1]), (arr_0 [i_7 - 2])))));
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        var_25 = var_13;

                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            arr_31 [i_1] [i_8] [i_0] = var_0;
                            var_26 = (min((arr_10 [i_0] [i_1 - 1] [i_8] [i_9] [i_10 + 2] [i_9]), var_1));
                            var_27 += (max((((((arr_10 [i_10 + 1] [i_1] [i_8] [i_1] [i_1] [i_0 - 1]) > (arr_27 [i_10] [15] [i_9] [i_8] [i_1] [i_0 - 1]))) ? var_0 : (min((arr_11 [i_0] [i_1] [i_8] [i_9] [i_0] [i_8]), 32)))), (arr_14 [i_0] [9] [i_8] [i_8] [i_8] [i_9] [i_10])));
                        }
                        var_28 += ((((max(4294967295, (arr_0 [i_0 + 1])))) ? (arr_13 [i_1] [i_1] [i_1] [i_9] [i_1 - 1]) : ((max(var_10, var_3)))));
                        arr_32 [i_0] [i_0] [i_0] = (((((arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 1]) ? (arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 1]) : 61440))) ? (((arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 1]) ? var_12 : (arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 1]))) : (arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 1]));

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            arr_35 [i_0] [i_1] [i_8] [i_9] [i_11] [i_8] [i_0] = ((((180822984 ? (arr_8 [i_0] [i_1 - 1] [i_9] [i_11]) : var_1)) > ((-(arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))));
                            var_29 = min(((~(((arr_26 [i_0] [i_1] [i_0]) ? var_11 : 1476)))), var_4);
                            arr_36 [i_0] [i_9] = var_13;
                            var_30 = (max(((max(((var_1 ? var_4 : var_11)), 61461))), ((-(arr_0 [6])))));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_40 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_12] = 64062;
                            arr_41 [i_0] [i_1] [i_8] [i_9] [i_8] = ((15 ? var_12 : (((arr_5 [12] [i_0 - 1] [i_0]) ? var_13 : (((~(arr_5 [14] [i_9] [i_12]))))))));
                            arr_42 [i_0] [i_0] [13] [i_0] = (((!25025) ? ((((!((((arr_19 [i_0] [14] [i_1 - 1] [14]) ? var_4 : 10))))))) : (((((-(arr_20 [i_0])))) ? (((var_7 ? (arr_34 [i_0 - 1] [i_0] [i_0 + 1] [i_0]) : var_9))) : (arr_0 [i_0 + 1])))));
                        }
                        for (int i_13 = 4; i_13 < 21;i_13 += 1)
                        {
                            var_31 = (max(var_13, (((4294967295 ? 61451 : 176)))));
                            var_32 = (max(var_32, (((((min(((max(var_9, var_10))), var_12))) ? var_7 : (arr_14 [i_13 - 4] [6] [i_9] [i_9] [i_8] [i_1] [i_0 + 1]))))));
                        }
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 18;i_15 += 1)
                        {
                            var_33 = (min(var_33, (arr_25 [i_0])));
                            arr_51 [i_0] [i_0] [i_8] [i_14] [i_15 + 2] [i_0] [i_8] = 52;
                            var_34 = var_11;
                            arr_52 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_14] = ((arr_45 [7] [7] [i_8] [i_14] [i_0]) ? var_7 : (arr_2 [i_0 + 1] [i_0] [i_15 + 1]));
                        }
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            arr_56 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_8] [i_0] [i_16] = (arr_38 [i_16] [i_14] [i_8] [i_1] [i_0 - 1]);
                            var_35 = (((arr_47 [i_0 + 1] [6] [i_8] [i_14]) ? var_7 : var_6));
                        }
                        arr_57 [i_0] [i_8] [i_0] = (min((((!((min((arr_1 [i_0 + 1]), (arr_26 [i_0] [i_0] [i_0]))))))), ((var_5 ? (arr_46 [i_0]) : var_8))));
                    }
                    for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                    {

                        for (int i_18 = 0; i_18 < 22;i_18 += 1)
                        {
                            var_36 = var_7;
                            var_37 = (max(var_37, ((max((max(1504835819, 4294967295)), (~127))))));
                            var_38 = -88;
                            arr_65 [i_0] [i_1 - 1] [i_8] = var_14;
                            var_39 = ((+(((arr_11 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) ? 1 : (arr_11 [i_0 - 1] [8] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))));
                        }
                        for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
                        {
                            arr_69 [i_0] [i_1 - 1] [i_8] [i_17] [i_19] = ((((max((arr_30 [i_0 + 1] [i_17] [i_8] [i_1 - 1] [i_1 - 1] [i_0 + 1] [i_0 + 1]), (arr_34 [i_0 - 1] [i_1 - 1] [i_8] [i_0])))) ? (arr_30 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_8] [i_17] [i_19]) : (min(1776906957417097926, (arr_43 [i_8] [i_8] [i_8] [i_8])))));
                            arr_70 [i_1] [i_0] = var_10;
                        }
                        for (int i_20 = 0; i_20 < 22;i_20 += 1) /* same iter space */
                        {
                            arr_73 [i_0] [18] [18] [18] [i_0] = var_1;
                            arr_74 [2] [1] [i_0] [i_0] [i_1 - 1] [i_0] = 830748071;
                        }
                        arr_75 [i_0 + 1] [i_0] [i_0 + 1] [i_0] = ((((((arr_72 [i_0 - 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_0 - 1] [i_8]) ? (arr_72 [i_0 + 1] [i_1 - 1] [i_17] [i_17] [i_1 - 1] [i_1 - 1] [i_17]) : (arr_72 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_8] [i_0 + 1] [i_17] [7])))) ? (((607902435 ? var_4 : var_1))) : (max((arr_72 [i_0 - 1] [i_1 - 1] [i_1] [i_8] [i_8] [i_17] [i_17]), (arr_72 [i_0 - 1] [i_1 - 1] [i_1] [1] [i_1] [i_8] [i_1])))));
                        var_40 -= var_7;
                        var_41 = var_1;
                    }
                    var_42 = 34;
                    arr_76 [i_0] [i_1] = ((-((var_0 ? 126 : (max((arr_64 [i_0] [i_1] [i_0] [i_8] [i_1 - 1] [i_1]), var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
