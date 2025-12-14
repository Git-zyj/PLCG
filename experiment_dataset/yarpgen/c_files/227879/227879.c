/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((-((var_4 ? var_5 : 1181918287)))), ((((var_4 ? var_7 : var_9))))));
    var_13 = (min(var_10, ((~((73 ? 1293784142 : 3001183135))))));
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [17] [i_1] = (max(((+(((arr_3 [i_0] [13]) ? 1913255065005954997 : 1293784161)))), (((-(max(54, -4111298063769922179)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = (min((max((arr_3 [i_1 - 1] [i_1]), 1)), (((!(arr_10 [i_1 - 1] [i_1 - 3]))))));
                            var_16 = (min(-1394455689, ((((arr_6 [i_2] [i_1 - 2] [i_1]) <= (((-87 + 2147483647) >> var_5)))))));
                            arr_11 [16] [i_1] [10] [7] = (arr_2 [i_1 - 3]);
                            arr_12 [i_1] [i_1] = (((((var_8 ? var_0 : var_4)) - (min(-121, 658476572)))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_15 [i_1] [i_1 - 4] [11] [8] = ((((((((arr_0 [i_1] [8]) ? var_1 : var_0)) >= (arr_0 [i_4] [i_0])))) >= ((var_4 ? var_0 : -127))));
                    var_17 = ((((((max(var_11, (arr_14 [i_0] [i_1] [i_0])))) ? (arr_8 [i_0] [i_1 - 4]) : (arr_0 [i_1 - 4] [i_1 - 3])))) ? (arr_10 [i_1 + 1] [i_0]) : (max(126, (arr_3 [i_1 - 3] [i_1 - 2]))));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_18 = -3001183153;
                    var_19 = var_11;
                    var_20 = ((!((min((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1]))))));
                }
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_28 [i_1] [i_1] [i_1] [i_6 + 1] [i_7] [i_7] [i_8] = max((arr_9 [i_0] [i_1 - 2] [i_6 - 2] [i_6 + 2]), (min(var_0, (arr_1 [i_1 - 3]))));
                                var_21 = (min((max(9637324884725228149, -116)), (((~(arr_21 [i_1 - 1] [i_6 + 2] [i_6 - 2]))))));
                                var_22 = (arr_21 [i_6] [i_1 - 1] [i_6 - 2]);
                                var_23 = (max((((min(var_0, var_9)))), (min((17944879297068241319 * 63154), ((min((arr_9 [3] [i_1] [i_6] [i_6]), var_1)))))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_33 [i_1] [i_1] [i_6] [i_9] = arr_0 [i_0] [i_0];
                        var_24 = (((((((arr_2 [i_1 - 2]) <= (arr_2 [i_1 + 1]))))) >= (((((arr_24 [i_9] [5] [i_9] [i_9]) * (arr_21 [14] [17] [i_9]))) ^ ((((arr_8 [i_6] [i_0]) ? 43292 : 19932)))))));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_25 = (arr_0 [i_0] [i_1 - 4]);
                        var_26 = (((((arr_30 [i_1] [i_1 - 2] [i_1 - 4]) % (arr_31 [i_1 - 2] [i_6 + 2] [6] [i_6] [i_6] [i_6 - 3]))) >= ((-(arr_19 [i_1] [i_6 - 3] [i_6] [i_6])))));
                    }
                    var_27 = (((max(((45 ? var_4 : (arr_2 [i_0]))), 121)) != 2147483647));
                    var_28 = (((((max(var_5, (arr_1 [i_0]))))) != (((arr_2 [i_1 - 2]) ? (arr_2 [i_1 - 2]) : (arr_2 [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_43 [i_0] [i_1 - 4] [i_1] [i_11 + 1] [15] = (max(((((arr_6 [i_0] [i_0] [i_0]) ? (arr_37 [6] [6] [i_1]) : (((arr_8 [i_11 - 1] [12]) >> (var_6 - 30539)))))), (var_8 > var_0)));
                                arr_44 [i_1] = (min((((arr_3 [15] [i_1 - 3]) * (!60804))), var_7));
                                var_29 = -1;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                arr_53 [i_0] [i_1] [i_13] = (min(1293784154, 116));
                                arr_54 [i_1] [i_1] [i_14] [i_15] = ((((0 && 60804) ? ((var_0 >> (((arr_23 [i_0] [i_1] [i_13]) - 949638117082751918)))) : ((var_5 ? (arr_26 [i_1] [i_1] [13] [2] [i_15]) : var_5)))));
                                var_30 = ((18 ? (!116) : ((min((var_3 >= var_2), (((arr_17 [i_0] [i_1]) && var_7)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
