/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_13 = (min((max((arr_1 [13]), (arr_1 [i_2]))), (max((arr_1 [i_0]), (arr_1 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (!6280)));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [0] = (((((-14 ? (arr_0 [1] [1]) : 104795018)) > ((max((arr_6 [i_1] [i_1]), (arr_6 [19] [12])))))));
                                arr_12 [i_0] [13] [24] |= arr_0 [i_0] [i_1];
                            }
                        }
                    }
                    var_15 = (max((((var_1 ? var_9 : 0))), (((!(var_1 - 1))))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_16 *= (arr_2 [i_0] [i_0]);

                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_1] [1] [1] &= (min((!var_3), ((!(arr_17 [i_6 + 1] [i_6] [i_6 + 1] [15])))));
                        var_17 = (max(var_7, (max((!-1), -9223372036854775807))));
                        var_18 = ((-((min((arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1]), ((((arr_15 [i_6] [i_1] [i_0]) == 242))))))));
                        arr_19 [i_6] [i_1] = (arr_15 [i_0] [10] [19]);
                        var_19 = (((arr_10 [i_6 - 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1]) ? ((~(arr_2 [i_6 - 1] [i_6 - 1]))) : ((max(8452911542512608883, (arr_15 [i_6 + 1] [2] [i_6 - 1]))))));
                    }
                    var_20 = (max(-16, var_9));
                    var_21 *= (59 >= (((var_1 > (arr_13 [i_0] [i_0] [i_5])))));
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_26 [i_9] [i_8] [i_7] [i_1] [i_0] = 78;
                                var_22 = ((-(~6)));
                                arr_27 [18] [13] [i_9] [i_7 + 2] [i_7 + 2] [i_1] [i_0] &= -9223372036854775806;
                                var_23 = (min(var_23, ((min(1, 4023312875329565240)))));
                                var_24 &= ((!(((~72) < (max(var_12, 3905915420))))));
                            }
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_25 ^= ((!(((!19) || ((((arr_23 [i_10] [i_10] [i_1] [i_1] [i_0] [5]) ? 15314051199574233933 : var_5)))))));

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_33 [4] [4] [4] [i_11] = (max(5, -2522507093760951924));
                        var_26 = 1;
                    }
                    var_27 = (((max(37608, (((arr_32 [i_0] [10] [i_10] [i_10]) ? 2147483647 : 37634)))) | ((~((1 ? 4109999638 : 18446744073709551615))))));
                    arr_34 [i_10] [i_1] [21] = var_0;
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_28 = (max(var_28, (arr_15 [i_0] [i_0] [i_0])));
                    arr_38 [i_12] [i_1] = ((~(arr_8 [i_0] [i_0])));
                    var_29 = (max(var_29, (arr_2 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 21;i_14 += 1)
                        {
                            {
                                arr_43 [i_14] [i_14] [i_14] [i_14] [23] [i_14] = (((((arr_23 [i_14 + 4] [i_14] [i_14] [i_14 + 4] [i_14 + 4] [i_14]) ? 0 : (((arr_37 [13] [13] [i_12]) ? var_6 : var_4)))) * ((min((!var_11), var_7)))));
                                arr_44 [i_14] [i_14] [i_13] [i_12] [5] [i_14] [i_0] = (arr_39 [i_1]);
                            }
                        }
                    }
                }
                var_30 = ((!((((1 || 254) ? (arr_4 [i_0] [i_0]) : (((arr_39 [i_0]) ? var_2 : (arr_36 [i_0] [i_0] [i_1] [i_1]))))))));
                var_31 = (arr_20 [i_0] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 4; i_15 < 14;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            {
                var_32 = 13185574179040721;
                var_33 = (min(var_33, (((!((((-32767 - 1) ^ 6))))))));
            }
        }
    }
    var_34 = (max(var_34, ((max(var_7, (min((((32767 ? var_0 : 5492))), 36267)))))));
    var_35 = (-434130005 / 25108);
    #pragma endscop
}
