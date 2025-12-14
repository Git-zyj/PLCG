/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((((var_4 ? (var_10 <= var_9) : (var_2 | var_12)))) ? var_9 : var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 = (max(var_16, (((var_11 ? ((min((arr_0 [i_1] [i_1 - 1]), (arr_0 [i_1] [i_1 - 3])))) : 1)))));
                    arr_7 [i_0] [i_1] = (arr_1 [i_1]);
                    arr_8 [i_0 - 1] [i_2] = (min((((((arr_5 [i_2]) | var_0)))), (((arr_5 [i_0 + 2]) ? (arr_0 [i_1 - 2] [i_1]) : var_5))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_17 |= ((max((var_10 % var_14), 3880305642)));
                    var_18 |= ((((max(var_5, (arr_3 [i_3]))) - (arr_2 [22] [i_1 + 1]))));
                    arr_11 [6] [6] [20] = ((((arr_9 [i_1 - 1] [i_1] [i_0 + 1]) && (arr_3 [i_0 + 1]))));
                }
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    arr_15 [i_0 + 2] [i_1] [i_4] = ((min((arr_2 [i_1 - 3] [i_0 - 1]), (arr_9 [i_1 - 2] [i_0 + 2] [i_4 + 1]))));
                    var_19 = (((arr_4 [i_0] [i_1] [i_4 - 2] [i_4]) && ((((arr_4 [i_0 + 2] [i_1 + 1] [i_1 - 1] [i_4 - 2]) ? (arr_4 [i_0 - 1] [i_1 - 2] [i_1] [i_4 - 3]) : (arr_4 [i_0 + 2] [i_1 - 3] [15] [i_4 + 3]))))));
                    var_20 = (arr_4 [i_4] [i_1] [i_4] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((min(((((min((arr_18 [10] [10] [i_5] [i_4] [i_0 + 2] [i_0 + 2] [i_0 + 2]), var_6))) ? (arr_9 [i_4 - 1] [i_4 - 2] [i_5]) : (min(var_9, (arr_19 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5] [i_4]))))), ((((arr_18 [i_0 + 2] [i_1 - 2] [i_4 + 1] [i_4 + 2] [i_4 + 3] [i_6 - 2] [i_6 + 1]) << (((arr_18 [i_0 - 1] [i_1 - 2] [i_4 - 2] [i_4 + 3] [i_4 - 2] [i_6 - 2] [i_6 - 2]) - 1201023027))))))))));
                                var_22 *= ((((((18446744073709551611 ? var_2 : (arr_12 [i_1] [i_4 + 1] [1] [i_4 + 1]))) << (var_3 - 1155342480)))) != (arr_19 [i_1] [i_1] [1] [1] [i_6] [i_1] [i_0]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_23 = (+(min((((arr_21 [i_0] [i_1 - 3] [i_4] [i_0] [i_8]) ? (arr_19 [i_0] [i_0] [21] [i_7] [i_1 - 1] [i_8] [i_7]) : (arr_10 [i_1 - 2] [i_4 - 2] [i_8]))), var_11)));
                                arr_24 [6] [i_1] [i_4] [6] [i_7] = (max((arr_13 [i_0 + 1] [i_1] [i_7]), ((((var_2 ? var_14 : 12843413813335858622)) | ((-(arr_19 [8] [10] [8] [10] [i_7] [i_7] [i_8])))))));
                                var_24 = ((((((((arr_6 [i_1] [i_4 + 1]) * var_7)) / ((var_4 * (arr_18 [i_0 - 1] [i_1] [i_1] [i_4 - 2] [i_7] [i_8] [i_8])))))) ? ((max(-16081, var_4))) : -16081));
                            }
                        }
                    }
                }
                arr_25 [i_0] [i_1 + 1] [13] = (max(((((((arr_19 [i_1] [i_1] [i_0 + 1] [i_0 + 1] [9] [i_1] [i_0]) ? var_14 : -16081))) ? 16080 : (((arr_13 [i_1 - 2] [i_1] [i_1]) - (arr_5 [i_0 + 2]))))), ((((arr_1 [i_0 + 2]) ? (arr_4 [i_0 - 1] [i_0] [i_0 + 2] [i_1 - 1]) : 16070)))));
            }
        }
    }
    var_25 = (min(var_25, ((var_1 ? 16080 : (!var_4)))));
    var_26 = (((var_12 / ((var_5 ? var_6 : var_4)))));
    #pragma endscop
}
