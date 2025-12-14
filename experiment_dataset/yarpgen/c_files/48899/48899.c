/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(-78, -48));
    var_20 = (min((var_17 != var_18), 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = var_8;
                    arr_8 [i_2] [i_1] = (min((min((arr_7 [i_0] [i_1] [i_2]), (arr_0 [i_1]))), (((((74 ? (arr_4 [i_0] [i_1] [i_2] [i_0]) : (arr_2 [i_0] [i_1] [i_2])))) ? (!var_16) : (arr_0 [i_1])))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_22 = ((((!(arr_9 [i_2]))) ? (((arr_9 [i_2]) | var_12)) : (((arr_3 [i_3] [i_1]) ? (arr_9 [i_2]) : (arr_9 [i_2])))));
                        var_23 = var_12;
                        var_24 = ((((~(arr_10 [i_0] [9] [i_0] [8]))) < (arr_4 [i_2] [i_2] [i_1] [5])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [i_2] [i_4] [i_2] [i_3] [i_4] [1] = ((max((min(4294967292, (arr_10 [i_0] [i_1] [i_0] [i_3])), (min(4248630051, (arr_7 [1] [i_1] [i_1])))))));
                            arr_14 [i_2] [8] [i_2] [8] [i_2] = ((~(((var_14 / var_4) ? (((arr_1 [i_2]) ? var_5 : var_4)) : 58))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_25 = (arr_7 [i_0] [i_2] [i_0]);
                            arr_18 [i_2] [i_3] [i_1] [i_1] [i_0] [i_0] [i_2] = (max(65529, 4));
                            var_26 = (max(var_26, (((((max(74, (min(1, var_16))))) ? 9223372036854775807 : 65520)))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_27 = arr_16 [i_0] [i_1] [i_2] [i_3] [i_2];
                            var_28 = (max(var_28, var_6));
                            var_29 = 5;
                        }
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_24 [i_2] [8] [i_2] [i_1] [i_2] [i_7] = (min(((var_17 ? (min(var_3, (arr_12 [i_2]))) : 255)), (~var_5)));
                        var_30 = ((((arr_5 [i_1] [i_0]) ? var_11 : (arr_15 [i_0] [i_1] [i_2] [i_7]))));
                    }
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_31 = ((min(4294901798, (arr_30 [i_0] [i_2]))) <= (arr_23 [i_9] [1] [7] [i_2] [i_0] [i_0]));
                            var_32 ^= ((((-(((arr_23 [i_0] [i_0] [i_0] [10] [i_0] [i_0]) ? var_15 : var_2)))) > (~1584356956)));
                            arr_31 [i_1] [i_1] [i_1] [i_2] [i_1] = (arr_19 [i_2] [4] [i_1] [i_2] [i_8 - 1] [4]);
                            arr_32 [i_2] [i_0] [i_1] [i_1] [i_2] = (14689176937925797709 ^ 932085797);
                        }

                        for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
                        {
                            var_33 = ((((1 <= (min(46337220, 20))))));
                            arr_35 [i_0] [i_2] [i_0] [i_0] [i_0] = 4248630059;
                            var_34 -= ((~(max(-721276943, 1))));
                            var_35 = (min(var_35, 0));
                        }
                        for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
                        {
                            var_36 = (arr_15 [i_8 + 1] [i_1] [6] [i_11 + 3]);
                            arr_38 [i_0] [i_0] [i_1] [i_2] [0] [i_2] [6] = (((((max(var_9, (arr_12 [i_0]))) >= var_12)) ? (((((arr_9 [i_2]) ? 1 : var_16)))) : (((((var_4 / (arr_33 [0] [i_1] [i_2] [i_11] [i_11] [i_8] [i_1])))) ? ((min(var_4, var_18))) : ((var_9 ? (arr_36 [i_11] [i_8] [i_0] [i_0] [i_0]) : var_17))))));
                            arr_39 [i_0] [0] [i_2] [i_2] [i_11 + 3] = 1;
                            var_37 = (arr_27 [i_8] [i_1] [i_2] [1] [i_11] [i_0]);
                        }
                        var_38 *= ((((!((max(var_8, (arr_2 [5] [i_0] [i_2]))))))));

                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            arr_42 [i_2] [i_8] [i_2] [i_2] = (max((arr_15 [2] [i_8] [i_2] [i_0]), var_10));
                            arr_43 [i_0] [11] [i_2] [8] [i_8] [i_12] = 65516;
                        }
                    }

                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        arr_47 [i_2] [i_2] [i_1] [i_2] = ((((((~var_16) || ((max(var_14, (arr_12 [i_0]))))))) <= (arr_20 [i_0] [i_1] [7] [i_2] [i_2])));
                        arr_48 [i_1] [i_1] [i_1] [i_2] = ((~(var_12 < var_3)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 7;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            {
                var_39 = 6;
                arr_53 [i_14] [i_14] = (~-var_3);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            {
                var_40 = (max(var_40, ((1 ? ((~(arr_54 [i_16] [i_17]))) : var_16))));
                arr_62 [i_17] [i_17] [i_17] = (arr_54 [i_16] [0]);
                arr_63 [i_17] [i_17] = ((var_8 < (((!(((-(arr_60 [i_16] [i_17])))))))));
            }
        }
    }
    #pragma endscop
}
