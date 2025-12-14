/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 119;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [13] [i_1] = (min((((arr_3 [i_0 + 1]) / (((arr_5 [i_1] [i_0]) ? 116 : var_0)))), (arr_2 [i_0 + 1] [i_0 + 1])));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_16 += (arr_9 [i_0] [i_1] [i_1] [i_0 - 1]);
                    arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] = 18446744073709551615;
                    arr_12 [i_0] [i_2] = (arr_2 [i_1] [13]);
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_17 [i_3] [i_0] [i_0] = 1846162761;

                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_17 ^= (min((arr_4 [i_0 - 1] [i_0 - 1]), (((arr_4 [i_0 + 1] [i_0 - 1]) ? (arr_4 [i_0 + 1] [i_0 - 1]) : var_13))));
                        arr_22 [i_0 + 1] [i_1] [i_3] [i_4] = (min((var_2 == var_10), (1409221042 || 63)));
                        var_18 = (((arr_9 [i_0] [5] [i_3] [i_4]) ? (((arr_15 [i_1]) >> (((arr_15 [i_3]) - 963813612)))) : ((((arr_21 [14] [i_0] [8] [i_0] [i_4]) & ((-3141 ? (arr_3 [i_0]) : var_9)))))));
                        var_19 += ((((((arr_10 [i_0 - 1]) ? (arr_10 [i_0 + 1]) : (arr_10 [i_0 + 1])))) ? ((((arr_10 [i_0 - 1]) || (arr_10 [i_0 - 1])))) : (((arr_10 [i_0 - 1]) ? (arr_10 [i_0 - 1]) : (arr_10 [i_0 + 2])))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_20 = (-(((arr_2 [i_0] [i_3]) | (arr_21 [i_0] [i_1] [12] [i_5] [i_5]))));
                        var_21 += ((min((((var_6 ? (arr_7 [8]) : var_11))), -var_12)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_22 = (arr_4 [i_0 - 1] [i_0]);
                                arr_31 [i_0] [i_7] [i_1] [i_7] [i_6] [i_7] = ((23 ? (arr_26 [i_0 + 2] [i_0] [i_0] [i_0 + 1]) : (arr_9 [i_0] [9] [14] [i_7])));
                                var_23 += 11719493784683843769;
                                var_24 = ((-(arr_3 [i_0 + 2])));
                            }
                        }
                    }
                }
                var_25 = ((-(((((arr_20 [i_1]) * var_6))))));
            }
        }
    }
    var_26 |= min(var_5, ((min(2875331358504610896, (min(var_10, var_2))))));
    var_27 = ((var_13 ? var_4 : (min((18 + 18446744073709551611), (var_9 | var_0)))));
    #pragma endscop
}
