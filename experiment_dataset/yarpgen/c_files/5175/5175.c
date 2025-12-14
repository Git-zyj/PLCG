/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_8, var_3);
    var_13 = ((((!65508) && var_0)) ? (max(var_11, (min(var_2, var_10)))) : ((min(var_3, var_3))));
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_15 = arr_1 [i_0] [i_0];
                    arr_6 [i_2] [i_1] = (arr_4 [i_2] [i_1] [i_1]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_16 = arr_5 [i_0] [i_0] [i_1] [i_3];
                    arr_9 [i_0] [i_0] [i_3] = ((!65534) & (arr_8 [i_3]));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_17 = arr_10 [i_0] [i_1] [i_3] [i_5];
                                var_18 = ((arr_2 [7] [i_3]) << (((arr_2 [i_4] [i_5]) - 40650)));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_19 = ((~(arr_5 [i_0] [i_1] [i_3] [i_6])));
                        var_20 = arr_0 [i_3] [i_1];

                        for (int i_7 = 4; i_7 < 16;i_7 += 1)
                        {
                            arr_21 [i_1] [i_3] [i_3] [i_0] [i_1] [i_3] [i_3] = (((arr_1 [i_7 - 4] [i_7 + 1]) ? (((arr_19 [i_0] [i_0] [i_3] [i_0] [i_0]) / 15028)) : 34));
                            arr_22 [i_3] [i_6] [i_3] [i_1] [i_3] = arr_8 [i_3];
                            var_21 = ((arr_1 [i_7 - 3] [i_7 + 2]) ? 6 : (arr_16 [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 + 2] [i_7 - 2] [i_7 - 2]));
                            var_22 = (((arr_17 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 2]) > (arr_17 [i_7] [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 3])));
                            var_23 = ((65508 ? ((var_8 ? (arr_0 [i_1] [i_1]) : (arr_16 [3] [i_6] [i_3] [i_3] [i_1] [i_0]))) : (((arr_19 [i_7 - 4] [12] [i_3] [i_1] [i_0]) ^ 65532))));
                        }
                        var_24 = (32768 ? (arr_14 [i_6] [i_6] [i_3] [i_6] [i_6]) : var_7);
                        arr_23 [i_1] [i_1] [i_3] [i_1] [13] [i_1] = var_0;
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = 62478;
                        arr_27 [i_3] [i_3] [12] [i_8] = (((((!(arr_20 [i_0] [i_1] [i_3] [i_8] [4])))) * var_3));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_25 = (((~var_0) ? (arr_1 [i_1] [i_1]) : (var_6 & var_5)));
                        var_26 = ((((633950484 && (arr_7 [i_0] [i_3]))) || var_9));
                        arr_30 [i_3] = (arr_13 [i_0] [i_3] [i_1] [i_3] [i_9]);
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_27 = var_2;
                        var_28 = ((arr_34 [i_3] [i_1] [i_1] [i_1]) ? (~65485) : ((((arr_31 [i_3]) != 28))));
                        var_29 = (arr_24 [i_1] [i_1] [i_3] [i_1]);
                        var_30 = ((arr_3 [i_1] [i_10]) / var_0);
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 17;i_13 += 1)
                        {
                            {
                                arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_17 [i_13 + 2] [i_11 - 1] [i_11 + 1] [i_11 + 2] [i_11 + 2]) * (arr_17 [i_13 - 2] [i_11 + 2] [i_11] [i_11] [i_11 + 2])));
                                var_31 = ((arr_39 [i_12] [i_11 + 1] [i_13 - 2] [i_12] [i_0]) ? (arr_39 [i_1] [i_11 - 1] [i_13 - 2] [i_12] [i_13 - 1]) : (arr_39 [i_0] [i_11 - 1] [i_13 - 1] [i_12] [i_12]));
                            }
                        }
                    }
                    var_32 = ((arr_39 [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11 + 1]) ? var_4 : (arr_16 [i_0] [i_0] [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11 + 1]));
                }
                /* LoopNest 2 */
                for (int i_14 = 4; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_33 = (((((-1938948184 || 65525) || (arr_40 [i_14 + 2] [i_14 - 3] [i_14 + 1] [i_14] [i_14 + 3]))) ? (((((min(var_2, 4))) || 21713))) : 65499));
                            arr_46 [i_0] [i_15] [i_0] = max((max(var_1, (min((arr_25 [i_1] [i_14] [i_1] [i_15] [i_1]), var_7)))), ((max((arr_25 [i_0] [i_0] [i_0] [i_14 + 1] [i_0]), (arr_44 [i_0] [i_0] [i_14 - 4] [i_15] [i_15])))));
                            var_34 = (max((((arr_43 [i_1] [i_1] [i_14 + 3]) ? (arr_43 [i_14] [i_14 + 3] [i_14 - 2]) : (arr_43 [i_14 + 2] [i_14 + 2] [i_14 - 1]))), ((-(arr_43 [i_0] [17] [i_14 + 2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
