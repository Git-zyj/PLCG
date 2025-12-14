/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [16] [i_0] = (((((max(var_10, 1))) ? ((0 ? (arr_3 [i_0] [3] [i_0]) : (arr_4 [i_1] [i_1] [i_0]))) : (arr_2 [i_0]))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] = ((4 & ((max(((((arr_7 [i_1] [i_1] [i_1]) || var_9))), (~0))))));
                    var_14 = ((var_10 <= (((arr_8 [i_1] [i_2]) - (arr_2 [i_0])))));
                    arr_10 [i_0] [i_1] [i_2] = ((((arr_8 [i_0] [i_2]) ? (0 - 18446744073709551611) : (arr_7 [i_2] [i_2] [i_2]))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_15 = (max((~5), (arr_17 [i_0] [i_0] [5] [i_5])));
                                arr_19 [i_0] [i_4] [i_3] = ((min((arr_15 [i_0] [i_3] [i_3] [i_4] [i_5]), ((18446744073709551611 ? 26286 : (arr_16 [i_0] [12] [i_3] [i_5]))))) == (((56 != var_9) / var_7)));
                                arr_20 [i_3] = (arr_12 [i_0] [2] [i_3]);
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_24 [i_3] [i_6] [i_3] [1] [10] [i_3] = 1733546903;

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_3] = -1733546916;
                            arr_28 [i_0] [1] [10] [i_3] [i_7] = 201;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_16 = ((~(var_10 < -1733546899)));
                                arr_36 [i_0] [i_3] [i_3] [i_8] [i_3] = ((((min(var_0, (var_11 || 55931)))) != (((var_12 || (arr_12 [i_0] [i_1] [i_3]))))));
                                arr_37 [i_3] = (((((((min(1, 128))) >> var_8))) || (arr_34 [i_0] [i_1] [i_0] [22])));
                            }
                        }
                    }
                    arr_38 [i_3] [i_0] [i_3] = 0;
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_42 [1] = 0;
                    var_17 = (min(var_12, (arr_40 [1] [18] [i_10])));
                    var_18 = min(((min((arr_29 [7] [7] [i_10] [i_10]), (arr_29 [i_0] [23] [i_1] [17])))), (arr_34 [19] [i_0] [i_0] [i_0]));
                    arr_43 [i_0] [i_0] [i_0] = var_7;
                    arr_44 [i_10] = (max((~243), ((((var_4 ? (arr_6 [i_0] [i_1] [i_10]) : 41)) - (((max(249, (arr_14 [3] [i_10] [i_0] [i_0])))))))));
                }
                var_19 = ((~(arr_35 [i_0] [i_0] [i_0] [2] [i_0])));
                arr_45 [i_0] = (((arr_23 [1] [i_1] [1] [19]) ? var_10 : (min((55008 - 1), (var_5 & var_1)))));
            }
        }
    }
    var_20 = (max(var_20, (var_6 != var_6)));
    var_21 = var_3;
    #pragma endscop
}
