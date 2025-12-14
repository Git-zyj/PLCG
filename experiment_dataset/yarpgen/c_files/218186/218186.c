/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_0] [i_4] [i_3] [i_2] [i_1] [i_1] [i_0] = var_9;
                            var_14 = (max(var_14, (((((arr_3 [i_4] [i_1] [i_0]) + 9223372036854775807)) >> (-982828051 + 982828061)))));
                            arr_12 [8] [i_0] [i_0] = ((((-982828063 ? (arr_7 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4]) : (arr_6 [i_0])))) + (arr_0 [i_1]));
                            var_15 = (arr_0 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] = (min(((103 ? var_0 : (min(var_5, var_12)))), -1891502114122990953));
                            var_16 = (((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_7 [i_0] [i_1] [i_2] [i_3] [i_0] [2])))) * (arr_14 [i_0] [i_1] [0] [i_2] [i_2] [i_5]));
                            arr_16 [i_0] = (max(((min(var_8, -982828076))), (min((arr_8 [i_0] [i_0] [i_0] [i_5]), (arr_14 [3] [i_3] [i_3] [i_2] [i_1] [1])))));
                        }
                        arr_17 [i_0] [6] [i_0] [1] = ((((((((arr_9 [i_0] [i_0] [i_1] [8] [i_3]) || -434017795)) ? var_4 : (min(-109, 32767))))) ? (((((arr_1 [i_0]) && (((var_10 ? (arr_9 [i_3] [i_2] [i_1] [i_0] [i_0]) : -49))))))) : var_12));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_17 = ((!(((var_10 ? var_2 : (arr_1 [i_0]))))));
                        arr_20 [i_0] = (arr_8 [i_6] [i_0] [i_0] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_18 *= ((((((264941060 % 982828051) ? (arr_3 [i_0] [4] [4]) : ((((((arr_22 [i_0] [i_1] [i_2] [i_7]) + 2147483647)) >> (16320 - 16320))))))) ? 982828075 : 0));
                        arr_24 [i_7] [i_7] [i_0] &= (arr_18 [i_0] [i_0]);
                        var_19 = (min(var_19, (min((-32768 ^ 982828051), var_3))));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            var_20 = (-(var_5 / var_2));
                            var_21 = (min(var_21, var_1));
                            var_22 += ((-1851441726 ? -982828076 : 1));
                            var_23 = var_6;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_32 [i_0] [i_1] [i_0] [i_0] [i_10] [i_8] [i_1] = (((arr_29 [i_10] [1] [1] [i_1] [i_0]) / 1190473515));
                            arr_33 [i_0] [i_0] [i_2] [i_1] [i_0] = -982828063;
                            var_24 = (((arr_25 [i_0] [i_1] [i_2] [i_8] [i_8] [i_10]) - (arr_22 [4] [6] [i_2] [i_2])));
                        }
                        arr_34 [i_0] [i_0] [i_0] [3] = 5759644094662339243;

                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_25 = (max(var_25, ((min(var_0, ((((arr_9 [9] [i_1] [8] [i_8] [1]) == 5759644094662339243))))))));
                            var_26 = (((((var_6 ? 1735541548 : (arr_22 [i_11] [i_8] [i_1] [i_0])))) ? ((((arr_22 [i_0] [i_1] [i_2] [i_2]) && (arr_22 [i_0] [i_0] [i_8] [3])))) : ((max(var_13, (arr_22 [i_0] [i_0] [1] [i_0]))))));
                            arr_37 [i_0] [i_0] [i_0] [7] [i_8] = ((var_5 & (((arr_18 [i_2] [i_2]) / 9223372036854775807))));
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -32768;
                        }
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            var_27 = ((((arr_28 [i_8] [i_8] [i_12 + 1] [i_12] [i_12 + 1]) ? (arr_28 [i_1] [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1]) : var_13)));
                            var_28 = (-32767 + 1);
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_29 = (~-32767);
                            var_30 *= (arr_1 [i_1]);
                        }
                        var_31 = (min(var_31, (((((((arr_31 [i_8] [i_2] [i_1] [i_1] [4]) ? (arr_31 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_28 [i_0] [i_1] [i_2] [0] [0])))) ? (arr_10 [i_2]) : (907498881 && 32767))))));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                arr_48 [i_15] [i_0] [i_0] [i_0] = (!(((32768 ? -1916877054 : 9223372036854775807))));
                                arr_49 [i_0] [i_0] [i_2] [i_0] [i_2] [i_1] [i_0] = ((((((1 ? 1 : 982828063))) < var_9)));
                                var_32 = ((!(~-5759644094662339263)));
                                arr_50 [0] [0] [2] [i_2] [i_1] [i_0] [0] |= (max((arr_10 [6]), (arr_39 [i_15] [0] [i_14] [i_1] [i_1] [1] [i_14 - 2])));
                                var_33 = min((((!(arr_27 [i_0] [i_1] [i_0] [i_14 + 1] [i_1] [i_1] [i_2])))), var_11);
                            }
                        }
                    }
                    var_34 ^= arr_6 [10];
                }
            }
        }
    }
    var_35 = var_6;
    #pragma endscop
}
