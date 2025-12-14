/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] = (((((~(!-245)))) ? (max((4294967295 && var_8), (((arr_8 [i_0] [1] [i_2]) ? (arr_8 [i_0] [4] [i_2]) : 4294967295)))) : 245));
                        var_14 -= var_5;
                        arr_14 [i_0] = (max((!244), (arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 2])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [11] [i_0] = ((arr_0 [i_0]) + (0 < var_4));
                        var_15 -= (arr_3 [i_0] [6]);
                        var_16 = (max(var_16, 136));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_17 &= (((arr_6 [i_1] [i_2]) / (255 || var_7)));
                            var_18 &= var_2;
                        }
                        for (int i_7 = 3; i_7 < 18;i_7 += 1)
                        {
                            var_19 = (arr_11 [i_1] [i_2] [i_5] [i_7 - 1]);
                            var_20 += 2335847867986375865;
                            arr_28 [i_2] [i_1] [i_1] [i_5] [4] [i_7] &= (((((arr_4 [i_0] [i_2] [i_7]) | ((28 ? var_9 : 2335847867986375865))))) || (arr_22 [i_1] [i_1] [i_2] [i_5] [i_7] [17] [i_1]));
                            arr_29 [i_0] [i_5] [i_0] = 135;
                        }
                        arr_30 [i_1] [i_0] [i_1] = 218;

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            arr_33 [i_0] [i_0] [i_0] = (((arr_5 [i_0] [i_0 + 1]) < var_8));
                            var_21 = 2335847867986375865;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_2] [i_5] [i_9] = 2145181795;
                            var_22 = var_0;
                        }
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_23 = 4294967295;
                            var_24 = var_5;
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 18;i_11 += 1)
                        {
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] = (9624 || 20183);
                            var_25 = ((~(arr_15 [i_0 + 2] [i_11 + 1] [i_11 + 1] [i_0])));
                            var_26 = (((arr_21 [i_0] [i_0] [i_0 + 1] [i_11 + 1] [i_11]) ? (arr_39 [i_0 + 1] [i_0] [i_0 + 2] [i_11 + 1] [i_11]) : var_12));
                            arr_43 [i_0] [i_0] [i_1] [5] [i_5] [i_0] [i_0] = (2335847867986375890 + -13316);
                            arr_44 [i_2] [i_0] [i_2] = ((var_13 ? ((119 ? var_2 : (arr_37 [i_0 + 1] [i_0 + 1] [i_2] [i_5] [i_11] [i_2] [i_2]))) : (var_0 || var_7)));
                        }
                        var_27 = ((((~-1992971483) | ((var_9 ? var_3 : var_3)))));
                    }
                    var_28 = 245;
                    var_29 = (max((arr_5 [i_0] [i_0 - 1]), (arr_4 [i_0] [i_0 + 2] [i_0])));
                }
            }
        }
    }
    var_30 = var_11;
    var_31 = (max((var_6 / var_12), var_3));
    #pragma endscop
}
