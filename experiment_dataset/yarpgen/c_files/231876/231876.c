/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((!var_15) ? var_16 : var_16)), ((~(~20221)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (((-112 ^ var_8) ? (((~(arr_1 [i_2] [i_1])))) : (arr_6 [i_0] [i_2])));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_20 = max((max((arr_10 [i_3] [3] [i_1] [i_0]), (max((arr_4 [i_0] [i_1]), (arr_8 [4] [i_3]))))), ((max((arr_10 [9] [i_0 - 3] [i_2] [i_3]), 112))));
                        var_21 = (min(((((~(arr_13 [15] [i_0] [i_1] [11] [i_3] [i_3]))) | (arr_1 [i_0] [i_0 - 1]))), ((((arr_9 [i_3] [i_2] [i_1] [i_0]) ? ((~(arr_9 [i_0] [i_1] [18] [i_3]))) : var_8)))));
                        var_22 &= ((((min(((min((arr_4 [i_3] [3]), -99))), (min((arr_13 [0] [19] [i_2] [i_2] [i_3] [i_3]), (arr_11 [i_0] [i_1] [i_2] [7])))))) || (((var_12 * (arr_6 [i_0 - 3] [1]))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_23 = (min(var_23, (arr_5 [i_0] [8])));
                            var_24 = (((~var_2) ? (-114 * 32767) : (arr_2 [i_0 - 3])));
                        }
                        var_25 = (((((~(min(var_7, var_14))))) ? ((((min((arr_7 [i_1] [i_4]), (arr_14 [13] [7] [i_2] [i_4])))) + ((~(arr_6 [18] [2]))))) : (((((min((arr_9 [15] [i_1] [i_2] [i_4]), var_6))) ? ((~(arr_18 [i_0] [7] [2] [i_4]))) : -32767)))));
                        var_26 = (~var_1);
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_27 = arr_22 [i_0 + 2] [i_0] [i_0] [13];
                        arr_23 [i_6] [11] [i_1] [i_0] = (arr_12 [i_6] [i_6] [i_2] [i_1] [i_0] [i_0]);
                        var_28 *= (min((min((arr_1 [i_0] [0]), (arr_2 [13]))), 9223372036854775807));
                        var_29 = (arr_21 [0] [i_1]);
                    }
                    arr_24 [1] [9] [i_0] [i_0] = ((((((((arr_1 [i_0] [i_0]) ? (arr_6 [i_2] [i_1]) : (arr_18 [19] [13] [i_2] [i_2]))) << (arr_17 [i_0] [i_1] [i_2] [i_1] [i_2])))) ? ((((~var_16) & (min((arr_13 [15] [i_2] [7] [i_1] [i_0] [i_0]), -1))))) : (arr_2 [18])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                arr_31 [14] [i_7] [i_8] = ((-((var_6 ? -1 : ((var_10 ? (arr_26 [i_7]) : (arr_21 [14] [9])))))));
                arr_32 [i_7] [2] = var_15;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_46 [i_9] [i_9] [i_11] [i_12] [11] [11] = var_13;
                                arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] [9] [i_9] = (min(((min((arr_22 [i_12] [i_10] [1] [2]), (-127 - 1)))), ((~(min((arr_3 [9]), (arr_0 [i_9])))))));
                                var_30 = var_8;
                            }
                        }
                    }
                    var_31 = (arr_42 [11] [17] [i_11] [i_9]);
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_32 = var_3;
                                var_33 = (((((((9223372036854775804 || (arr_39 [i_9] [i_10] [i_11]))) ? ((min((arr_0 [i_15]), 597612184))) : ((var_2 ? (arr_52 [14] [15] [18] [i_10] [2]) : (arr_39 [i_9] [17] [i_11])))))) ? (arr_6 [1] [16]) : (((arr_45 [11] [i_11] [18]) ? (((arr_48 [i_9] [i_10] [0] [2] [i_15]) ^ (arr_50 [i_9] [i_10] [i_11] [i_11] [i_14 - 1] [i_15]))) : (((min(10, -114))))))));
                                arr_53 [i_9] = (((min(((19 ? 0 : 122)), (arr_0 [i_9])))) ? 65535 : (arr_39 [8] [i_10] [i_10]));
                                var_34 = ((((((~var_0) ? (min(var_17, 5)) : (arr_42 [i_14] [i_14] [0] [i_14])))) | (min((arr_51 [i_9] [13] [i_10] [12] [i_14] [i_15]), (arr_13 [i_15] [i_14] [i_11] [i_10] [i_9] [i_9])))));
                                var_35 = (max(var_35, 1999319563));
                            }
                        }
                    }
                    arr_54 [i_10] [18] = -7389001510687993925;
                }
            }
        }
    }
    var_36 = (var_15 + var_13);
    #pragma endscop
}
