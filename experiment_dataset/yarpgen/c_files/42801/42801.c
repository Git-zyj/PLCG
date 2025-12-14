/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [4] [i_1] [i_1] = (max((((min((arr_4 [i_1] [6] [i_0]), (-9223372036854775807 - 1))))), ((((!(arr_2 [i_1]))) ? (arr_0 [i_0]) : (arr_4 [i_1] [i_1] [i_1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    var_13 = (((var_3 && (arr_2 [i_0]))) || (arr_2 [i_0 + 1]));
                    var_14 = ((((((arr_3 [2] [i_1] [i_0]) ? (arr_8 [i_2]) : (arr_2 [i_0])))) ? (arr_4 [10] [i_1] [i_2]) : (((((-9223372036854775807 - 1) > 262143))))));
                    var_15 = (((arr_3 [i_2] [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_1]) : (var_10 > 9223372036854775800)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_18 [i_0 + 1] [10] [i_0 + 1] [i_5] [1] = (arr_4 [i_0] [i_0] [i_0]);
                                arr_19 [i_5] [i_4] [i_4] [i_4] [i_4] [i_4] = (((arr_14 [i_5 + 1] [i_5] [i_4] [i_5] [i_5]) / (arr_9 [i_5 - 3] [6] [i_3])));
                                var_16 = ((0 << (((((-9223372036854775807 - 1) - -9223372036854775804)) + 13))));
                            }
                        }
                    }
                    var_17 = (arr_15 [i_3] [i_3] [i_3] [i_3] [2] [1] [i_3]);
                    var_18 = (min(var_18, ((((((var_2 ? var_5 : var_11))) ? (((!(arr_13 [i_0] [i_1] [i_3] [i_3])))) : (arr_16 [i_0 - 1] [4] [4] [i_3] [i_1]))))));
                    arr_20 [i_3] = -42870;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_19 = (arr_24 [i_0] [i_1]);
                                var_20 = (arr_7 [i_7 + 1] [i_0 + 1]);
                            }
                        }
                    }
                }
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    arr_27 [i_0] [i_1] [i_1] [i_8] = ((!(((min(122, 3725022884))))));
                    var_21 = ((-((((((3494720646 ? (arr_13 [i_8] [i_1] [i_1] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_0 + 1])))) >= (~-9223372036854775792))))));
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    arr_30 [i_9] [i_1] [1] = (((arr_28 [i_0 - 1]) & (((((var_5 << (var_2 - 142))))))));
                    var_22 = (((-112 & 30) || ((((arr_28 [i_0 + 1]) ? (arr_28 [i_0 - 1]) : (arr_5 [i_0 + 1]))))));
                    arr_31 [i_9] = ((max(-var_5, (81 || 106))));
                    var_23 -= (arr_5 [i_0]);
                    var_24 = (((((max((arr_23 [10] [10] [10] [i_9] [i_9] [i_9]), var_6)))) / (min((((arr_16 [8] [6] [i_0] [8] [i_9]) ? var_10 : (arr_28 [i_9]))), var_11))));
                }
                var_25 = (min(var_25, (((((((arr_16 [i_0] [2] [i_0] [2] [i_0 - 1]) ? (arr_17 [i_0 + 1] [12] [i_0 + 1] [12] [i_0 - 1]) : (~-122)))) ? (arr_29 [1] [10] [1] [1]) : (!19052))))));
                arr_32 [11] = ((((((arr_17 [i_0] [2] [i_0] [i_1] [i_0]) || 1))) > (arr_2 [i_1])));
                arr_33 [i_1] = max((min((!-32724), (max(25545, var_3)))), ((((arr_7 [i_0 + 1] [i_1]) || (arr_21 [i_0 + 1] [i_0 + 1] [i_1] [i_0 - 1])))));
            }
        }
    }
    var_26 = ((var_5 ? var_2 : var_0));
    var_27 = ((var_0 ? ((((~var_10) && var_2))) : (((min(-32725, var_9))))));
    var_28 = (((~var_9) ? var_0 : ((((((var_3 ? var_7 : 5487))) ? var_2 : var_7)))));
    #pragma endscop
}
