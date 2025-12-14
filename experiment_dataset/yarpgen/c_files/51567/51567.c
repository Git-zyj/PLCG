/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [6] [i_0] [i_0] = ((6319 + (var_8 < var_1)));
                            arr_16 [i_0] [i_0] [i_0] [8] [i_0] [i_0] [i_0] = (!var_9);
                        }
                        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] = ((((-(((arr_17 [i_0] [i_1] [i_2] [i_2] [i_5]) ? 6334 : var_13)))) - var_5));
                            arr_20 [i_0] [i_1] [i_2] [i_5] &= var_13;
                            var_14 = ((((max((arr_9 [i_0] [i_1] [i_2] [i_3]), ((-(arr_18 [i_0] [i_1] [i_2] [i_0] [i_5])))))) ? (((var_2 && (arr_0 [i_0])))) : (((arr_3 [i_2 - 1] [i_1 + 3] [i_1]) ? (arr_14 [i_2 + 1] [i_1 + 2] [i_1 + 2]) : (arr_14 [i_2 - 1] [i_1 + 1] [i_1 + 2])))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_15 *= var_4;
                            var_16 = (arr_13 [i_6 - 2] [i_1 - 1]);
                        }
                        var_17 = (arr_5 [9] [i_1] [i_0]);
                    }
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        var_18 = (arr_23 [i_7] [i_7] [i_0] [i_1] [i_0] [i_0] [i_0]);
                        var_19 = (((~6308) * var_11));
                        var_20 = (arr_3 [i_1 - 1] [i_7 - 1] [i_2 - 1]);
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_21 = (max(27439, (max(((var_10 << (var_10 - 11358926388426737538))), (((var_7 ? 6312 : 6312)))))));
                        var_22 = ((~((11610 ? (arr_0 [i_0]) : (94 >= 6308)))));

                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            var_23 |= -104;
                            var_24 = (~var_0);
                            var_25 = ((((var_6 ? var_13 : (arr_28 [9] [i_8] [i_0] [i_0] [i_0] [i_0]))) | (arr_11 [i_2] [12] [i_0] [i_0] [i_1 + 1] [i_1])));
                            var_26 = (((~8127056105968859812) ? (((var_6 < (arr_8 [8] [12])))) : (arr_3 [i_2] [8] [8])));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_27 *= var_9;
                            arr_33 [i_0] [i_0] [i_2 + 1] [i_8] [1] = (arr_6 [i_0] [i_1] [i_2 - 1] [i_8]);
                            arr_34 [i_0] = (arr_0 [i_0]);
                            var_28 = 6312;
                            arr_35 [i_0] [i_8] [i_2] [i_2] [i_0] [i_0] = var_13;
                        }
                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            arr_39 [2] [i_0] [i_1] [i_2] [i_8] [i_0] [i_11 - 1] = 217;
                            var_29 |= (arr_24 [i_11] [i_1] [i_11]);
                            var_30 = (!11056691656766115229);
                        }
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((((((0 + (arr_7 [11] [i_1] [i_2])))) ? ((var_7 ? var_7 : (arr_5 [i_0] [i_1 + 1] [i_0]))) : ((-(arr_8 [i_1] [i_12])))))), 11056691656766115224));

                        /* vectorizable */
                        for (int i_13 = 4; i_13 < 11;i_13 += 1)
                        {
                            var_31 -= (arr_10 [i_0] [i_2 + 1] [i_13 - 3] [i_1 + 3]);
                            var_32 = var_5;
                            var_33 = ((-((-(arr_38 [i_0] [11] [i_1] [i_2 - 1] [i_12] [i_13] [i_13])))));
                        }
                        for (int i_14 = 3; i_14 < 9;i_14 += 1)
                        {
                            var_34 = (max((max((!var_7), (((arr_27 [i_14] [i_2] [i_12] [i_2] [i_1] [7]) ? (arr_27 [i_14] [i_12] [i_2] [i_1] [i_0] [i_0]) : var_2)))), ((-(1 >= var_4)))));
                            var_35 = ((((((var_1 | var_4) ? (arr_13 [i_0] [i_1]) : (~var_7)))) ? (max((((-73 == (arr_26 [i_0] [i_1] [i_2] [10] [i_14])))), (22 & var_0))) : (var_12 && var_2)));
                        }
                        var_36 = arr_13 [i_0] [i_1];
                    }
                    var_37 = (((max((var_8 + var_12), ((var_3 / (arr_12 [i_0] [i_0] [i_0]))))) - (max(((-100 ? (arr_28 [i_2] [i_2 + 1] [6] [3] [i_0] [i_0]) : var_6)), var_13))));
                    var_38 = (max(((var_13 ? (arr_38 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_1 + 2]) : (max(6, 60207)))), ((max(((max(234, -88))), (arr_46 [i_0] [i_1] [8] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_39 = var_3;
    var_40 = ((var_12 ? 6312 : (~7)));
    var_41 = (max((max((var_4 == var_0), var_0)), var_0));
    #pragma endscop
}
