/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_1] [i_1 - 3] = (~-144115188071661568);
                    arr_9 [i_0] [1] [i_0] [i_1] = (arr_6 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2 - 2] [i_3] [i_4] = (arr_1 [i_0]);
                                arr_17 [i_1] = var_11;
                                arr_18 [i_0] [i_0] [i_1] = (((arr_10 [i_1] [i_2] [i_1] [i_4]) ? (((+(((arr_12 [i_0] [i_4]) ? 128 : var_4))))) : ((+(max((arr_5 [i_2]), -7182328967198248510))))));
                            }
                        }
                    }
                }
                for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    var_12 = (((!2022289911171391519) ? (arr_6 [i_1]) : -2022289911171391519));
                    arr_21 [i_0] [i_0] [i_1] [i_1] = (arr_1 [i_5 - 1]);
                }
                for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    arr_24 [i_1] = (max((((-9223372036854775807 - 1) - (~var_4))), (((var_8 ? (arr_20 [i_6] [14] [i_0]) : ((((arr_20 [i_0] [i_0] [i_0]) && (arr_1 [i_0])))))))));
                    var_13 = (min((arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1]), var_7));
                    var_14 = (min(var_14, (max(((min(var_6, (max((arr_10 [i_0] [i_1] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0])))))), ((~(arr_6 [i_0])))))));
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = (max(var_6, (((0 >> var_3) ? (arr_29 [i_0] [i_7]) : (arr_15 [i_0] [i_1] [i_1] [i_7] [i_1] [i_8])))));
                        var_15 = -6646020120445791980;
                        var_16 &= (arr_12 [i_1 + 2] [i_1 - 1]);
                        var_17 = (~var_1);
                        var_18 = (arr_4 [i_8] [i_1 + 2] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_19 |= (arr_11 [i_0] [i_0] [i_0] [18]);
                        arr_35 [i_1] = (((arr_14 [i_1] [i_9] [i_1] [i_1] [i_1]) - (arr_0 [i_7] [i_1 + 3])));
                        arr_36 [i_0] [i_1] [i_0] [i_0] [i_0] = -90;
                        var_20 = (min(var_20, ((((arr_19 [i_1 - 3] [i_9] [i_1 + 1]) - (arr_29 [i_1 - 2] [i_1 + 3]))))));
                    }

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_40 [8] [8] [i_1] [8] = ((2847708111 ? (!var_7) : (((arr_32 [i_0] [i_1] [i_1] [i_10]) & (arr_14 [i_0] [i_0] [i_1] [i_1 - 1] [i_1])))));

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_21 = ((((((min((arr_11 [i_10] [i_11] [13] [i_11]), 1))) ? ((-(arr_0 [i_11] [15]))) : 88)) <= var_2));
                            arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_1] = ((1 + (((arr_32 [i_0] [i_0] [i_1] [i_0]) ? var_3 : ((var_11 ? (arr_29 [i_10] [i_11]) : (arr_1 [11])))))));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (max(((~(arr_37 [i_1 - 2] [i_1 - 3] [i_1 + 2]))), (arr_33 [i_0] [i_1 - 2] [i_1 - 3] [1] [i_1] [i_1 - 3])));
                            arr_48 [i_10] [i_1] [i_10] [i_7] [i_0] [i_1] [i_0] = (min((arr_28 [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_12] [i_0]), (((max((arr_1 [i_0]), (arr_42 [i_0] [i_0] [i_1] [i_1] [i_10] [i_12]))) / (arr_23 [i_1 - 3] [i_7] [i_12])))));
                        }
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    arr_51 [i_0] [i_1] [i_1] [i_0] = (var_7 == 3658982315042830711);
                    var_22 = (arr_46 [i_1 + 1] [i_1 + 1] [i_13] [i_13] [i_1 + 1]);
                    var_23 = (max(var_23, (arr_28 [i_0] [4] [14] [13] [i_13] [i_13])));
                }
            }
        }
    }
    var_24 = (min(var_0, ((min(var_5, (min(var_1, var_11)))))));
    var_25 *= (~32766);

    /* vectorizable */
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        var_26 = (((arr_2 [i_14]) + (arr_2 [i_14])));
        arr_54 [i_14] = (arr_50 [i_14] [i_14] [i_14]);
        var_27 = (arr_29 [i_14] [i_14]);
    }
    #pragma endscop
}
