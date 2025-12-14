/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [3] [6] = (arr_0 [i_1 + 1]);
                arr_5 [i_0] [i_1] = (((((~(((!(arr_3 [i_0] [i_1] [i_1]))))))) ? (!65535) : ((((min(var_10, var_17))) ? var_10 : (arr_0 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_3] [i_2 + 1] [i_0] [i_0] = 34;
                                var_19 = ((-(1 != var_9)));
                                arr_16 [i_0] [5] = ((-65535 ? (((-(arr_8 [i_1])))) : ((((((arr_8 [i_2]) / var_10))) - (min((arr_7 [i_0] [i_0] [15]), 2992021253))))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_1] [i_1] = (min((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_1]) ? (min((arr_12 [1]), var_17)) : 221)), -3955707861499395975));
            }
        }
    }
    var_20 = (!139);
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                var_21 = (min(var_21, ((min(((~(((arr_20 [i_5 - 2] [i_6]) ? var_1 : (arr_25 [i_6]))))), (max((((arr_22 [22] [i_5] [i_6]) ? 117 : var_16)), (arr_18 [i_5 - 2]))))))));
                var_22 = (arr_24 [4]);
            }
        }
    }
    var_23 *= (max(var_17, var_18));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                var_24 = (((arr_29 [i_8]) % (min(((-(arr_26 [i_7]))), ((5359 / (arr_21 [12])))))));

                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_40 [i_7] [i_8] [i_8] [i_8] = (-(arr_39 [i_7] [i_8] [i_9] [i_10] [i_11]));
                                var_25 += ((((min(((3668472231 ? 65528 : 18446744073709551596)), ((min(39, (arr_32 [1]))))))) ? (((!(arr_36 [i_8] [11] [18] [i_11 + 2])))) : (arr_38 [i_11 + 2] [i_8] [i_9 - 1] [i_10] [i_11])));
                            }
                        }
                    }
                    arr_41 [i_7] [i_7] [i_8] [i_8] = ((!(arr_30 [i_7] [i_8])));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_26 = 228;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 17;i_14 += 1)
                        {
                            {
                                arr_52 [i_8] [i_8] [i_13] [i_12] [i_8] [i_7] = ((~(min((~-12095), ((min(32488, 48663)))))));
                                arr_53 [i_8] = (max((((~9223372036854775807) ^ var_17)), (((-(max((arr_26 [i_8]), var_10)))))));
                                var_27 += 1263629393;
                                arr_54 [i_7] [i_8] [4] [i_12] [i_13] [i_13] [i_14 - 1] = ((5 ? 14555551402247410359 : 14476086435404794977));
                            }
                        }
                    }
                    arr_55 [i_8] [i_12] = var_10;
                    var_28 = 127;
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        {
                            arr_62 [1] [i_8] [i_8] [1] = (((arr_42 [i_16] [i_8] [i_8] [i_7]) ? (arr_49 [i_16] [i_8] [i_15] [i_16] [i_7] [i_16] [i_16]) : (min((((arr_29 [i_8]) * (arr_43 [i_8]))), ((max(9, 4)))))));
                            var_29 = (min((((arr_34 [i_7] [i_15] [i_16]) ? ((max(0, 208))) : (arr_23 [i_7]))), -65530));
                            arr_63 [i_7] [i_8] [i_8] [i_15] [i_8] [i_16] = ((((!((max(229, (-9223372036854775807 - 1))))))));
                            var_30 = (max(var_30, (((~(arr_44 [i_7] [i_15] [i_15] [i_16]))))));
                        }
                    }
                }
                var_31 = (min(((((max((-2147483647 - 1), 25095)) + ((min((arr_27 [i_8]), (arr_46 [i_7] [i_7] [i_8] [i_8]))))))), (((arr_49 [i_7] [i_8] [i_7] [17] [i_7] [i_8] [i_8]) ? ((var_6 * (arr_39 [i_7] [i_7] [2] [i_8] [i_8]))) : (arr_43 [i_8])))));
            }
        }
    }
    #pragma endscop
}
