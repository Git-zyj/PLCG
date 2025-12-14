/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = -364063785;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] [2] [i_0] = ((59 <= (arr_2 [i_1] [15])));
                    arr_11 [i_0] = ((-525407590 > (arr_5 [i_2])));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_14 [i_3] [i_2] [i_1] = (198 ? (arr_0 [2]) : (arr_0 [i_3]));
                        var_15 = (arr_8 [i_1] [6] [6]);
                        arr_15 [i_0] [i_0] [i_0] [8] = ((~(arr_4 [i_1] [i_1] [i_0])));
                        var_16 += (arr_9 [i_0] [i_1] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_21 [2] [i_1] [i_1] [6] = (-(arr_6 [i_5]));
                            arr_22 [9] [i_1] [i_1] [i_4] [i_5] = (arr_4 [i_0] [i_1] [i_2]);
                            var_17 = ((~(((arr_20 [i_0] [17] [i_1] [i_5] [i_5] [10] [i_2]) + (arr_7 [i_1] [1] [13])))));
                            var_18 = 4194303;
                        }
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            arr_25 [i_6] [i_4] [i_2] [i_2] [i_1] [11] = (((arr_18 [i_6 + 3] [7] [i_6 - 3] [i_6 - 3] [i_6] [i_1]) || (arr_23 [10] [i_6 - 3] [i_6 - 3] [10] [i_4])));
                            arr_26 [12] [i_4] [i_2] [i_1] [i_1] [i_0] = (arr_3 [i_6 - 2] [i_6 + 3]);
                            arr_27 [i_6 - 1] [i_6] [i_6 + 1] [i_4] [i_2] [15] [i_0] = ((-(arr_12 [i_6 + 1] [i_6 + 3] [i_6 + 3] [i_6 + 4])));
                            var_19 = (arr_24 [i_6] [i_6] [i_6 - 3] [i_1]);
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_4] [i_1] |= (arr_19 [i_0] [1] [i_2]);
                            var_20 ^= (~15781);
                        }
                        var_21 = (max(var_21, (-1 == 74)));
                    }

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_22 += 14;
                        arr_34 [i_8] [i_1] [i_2] [0] = ((arr_24 [i_8] [i_2] [i_1] [i_0]) & (arr_24 [i_1] [i_8] [i_2] [i_8]));

                        for (int i_9 = 4; i_9 < 17;i_9 += 1)
                        {
                            var_23 = (~1);
                            var_24 = (-9223372036854775807 - 1);
                        }
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_25 = (((arr_36 [i_0] [i_10] [i_0] [i_10] [i_1] [i_10] [15]) ? (arr_36 [i_0] [i_0] [i_2] [i_2] [3] [i_10] [i_10]) : 74));

                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_26 = (((arr_5 [i_11]) ? var_6 : (arr_18 [i_0] [3] [i_0] [i_10] [i_10] [i_0])));
                            var_27 = var_11;
                            arr_45 [i_0] [i_0] [1] = 1713011705394113145;
                            var_28 ^= (((arr_23 [i_1] [i_1] [i_1] [i_1] [i_1]) * (arr_9 [i_2] [i_1] [i_1])));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            arr_50 [i_0] [i_0] [i_2] [i_10] [i_12] = 1912443529;
                            var_29 += (arr_2 [i_0] [i_10]);
                            arr_51 [i_12] [i_2] [i_2] = (((arr_32 [11] [10] [i_10] [i_10]) ? (arr_9 [i_12] [i_1] [i_1]) : (((arr_33 [14] [i_10] [i_10] [14]) ? (arr_43 [i_12] [6] [6] [i_1] [6]) : var_10))));
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                        {
                            var_30 = ((((arr_46 [i_13] [i_10] [i_2] [i_2] [i_1] [i_1] [i_0]) + 2147483647)) >> (((arr_46 [i_0] [i_1] [3] [i_10] [5] [3] [1]) + 994373321)));
                            arr_54 [i_13] [i_10] [i_2] [i_1] [14] = (arr_13 [i_10] [i_0]);
                            var_31 = (min(var_31, (((-(arr_7 [i_0] [i_0] [i_0]))))));
                        }
                        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                        {
                            arr_57 [i_14] [i_2] [i_2] [15] [i_0] = ((~(arr_8 [i_0] [i_0] [i_0])));
                            var_32 = (((arr_31 [i_0] [i_1] [i_2] [i_10]) ? (arr_2 [i_0] [i_0]) : 4188101224655987870));
                            var_33 = (min(var_33, (((13351592686901139989 || (arr_56 [i_14]))))));
                        }
                    }
                }
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                var_34 = var_8;
                                var_35 = (arr_38 [12] [i_16] [12] [i_16]);
                            }
                        }
                    }
                    var_36 = (((((arr_43 [i_1] [i_1] [i_15] [i_15] [i_1]) % (arr_62 [i_0] [i_1] [i_0] [i_1] [i_1])))) ? (arr_49 [i_0] [11] [1] [1] [i_0] [i_0] [i_0]) : (((arr_37 [i_15]) ^ 227)));
                    var_37 = 111;
                }
                for (int i_18 = 1; i_18 < 16;i_18 += 1) /* same iter space */
                {
                    var_38 ^= (-(max((arr_9 [7] [i_18 + 2] [i_1]), (arr_9 [i_0] [i_18 - 1] [i_18]))));
                    var_39 = (min((arr_6 [i_18 + 1]), ((var_10 ? (arr_6 [i_18 + 2]) : (arr_6 [i_18 + 1])))));
                }
                for (int i_19 = 1; i_19 < 16;i_19 += 1) /* same iter space */
                {
                    var_40 = (arr_17 [i_0] [i_0] [i_19] [i_19] [i_1]);
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 18;i_21 += 1)
                        {
                            {
                                var_41 = (max(var_41, (arr_66 [1] [1] [i_19] [16])));
                                var_42 = ((~(arr_29 [i_20])));
                            }
                        }
                    }
                    arr_77 [i_0] [i_0] [i_0] [i_0] = (((((arr_12 [i_0] [i_1] [i_19 - 1] [i_1]) / (arr_12 [16] [16] [i_19 + 1] [16]))) != (((arr_12 [i_0] [i_1] [i_19 + 2] [i_1]) ? (arr_12 [i_0] [i_1] [i_19 + 2] [i_1]) : 49843))));
                    var_43 = ((+(((arr_69 [i_0] [i_19 - 1] [i_1]) / (arr_69 [i_1] [i_19 + 2] [i_1])))));
                }
            }
        }
    }
    var_44 = (min((max(var_6, var_6)), (((!(((var_10 ? -83 : var_0))))))));
    var_45 = (var_6 / (min(43, var_5)));
    var_46 += (((min(var_9, 197)) + (!var_3)));
    #pragma endscop
}
