/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((min(var_18, var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 -= (arr_9 [2] [i_1 - 2] [i_2] [i_3]);
                            arr_12 [i_0] [i_0] [i_2] [i_3] = (((((((arr_7 [i_1]) / (arr_1 [i_3]))) << (((var_7 ^ var_4) - 59)))) << (((((((-(arr_11 [i_0] [i_0] [i_0] [1] [12] [i_0])))) ? (226 | var_17) : ((max(var_11, var_17))))) - 2019))));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_21 += (((((var_11 ? (arr_13 [i_0] [i_4] [i_1 - 1] [i_3] [i_4]) : (arr_13 [i_0] [i_1] [i_1 - 1] [i_3] [i_1])))) ? 226 : (arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 1])));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [7] [i_3] = ((92 * (29 / var_10)));
                                arr_16 [0] [i_1] [i_2] [3] [i_4] = (((arr_14 [i_1 - 1] [0] [10] [i_1 - 1] [i_1]) + (arr_14 [i_1 - 1] [8] [12] [i_1 - 1] [12])));
                                var_22 = (max(var_22, (((30 && (((((((arr_10 [i_0] [i_0] [12] [i_3] [i_4] [i_2]) <= var_9))) * var_5))))))));
                                var_23 = var_4;
                            }
                            var_24 = (((((arr_1 [i_0]) != (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (min(((-7 ? 216 : (arr_4 [i_0] [i_1 - 1] [i_3]))), var_0)) : ((max(166, (((arr_1 [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [i_2] [8]) : 30)))))));
                        }
                    }
                }
                arr_17 [i_0] = ((min((arr_4 [i_1 - 1] [i_1 - 2] [i_1]), (arr_4 [i_1 - 1] [i_1 - 1] [5]))));
                var_25 += (min((~var_17), (arr_0 [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_26 = (min(var_26, (arr_19 [i_0] [i_0] [i_0] [i_0])));
                            arr_22 [8] [i_5] [i_0] [i_0] = ((7 >= ((((var_18 ? var_3 : var_4)) << (((arr_9 [i_1 - 1] [i_1 + 1] [1] [i_6]) - 200))))));

                            for (int i_7 = 0; i_7 < 13;i_7 += 1)
                            {
                                var_27 -= ((~(max((((var_12 != (arr_19 [i_1] [i_1] [0] [i_1])))), ((226 ? (arr_8 [12] [i_1] [i_0]) : var_11))))));
                                var_28 = (((arr_10 [i_0] [i_0] [i_1 - 2] [i_5] [i_0] [i_7]) <= var_14));
                            }
                            for (int i_8 = 0; i_8 < 13;i_8 += 1)
                            {
                                arr_29 [i_0] [i_5] [i_6] [i_8] = ((~((var_10 & (arr_19 [i_8] [i_6] [i_5] [i_0])))));
                                var_29 += (min((min((arr_11 [i_1 - 1] [4] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 2]), (arr_11 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1 + 1]))), (30 < 33)));
                                arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] = (((!(((33 ? 52 : 222))))));
                            }
                            for (int i_9 = 1; i_9 < 11;i_9 += 1)
                            {
                                arr_34 [i_0] [i_0] = 31;
                                var_30 = (((arr_3 [i_9]) / ((min((arr_3 [i_0]), (arr_19 [4] [i_1] [i_1 - 2] [5]))))));
                                arr_35 [10] [i_1] [i_5] [i_6] [i_6] = ((((169 ? (min((arr_6 [i_6]), (arr_18 [i_0] [i_5] [0]))) : 166)) == var_4));
                                var_31 = ((((max((arr_3 [i_1 - 1]), (arr_18 [12] [i_9 + 1] [i_1 - 1])))) <= ((~(arr_1 [i_0])))));
                            }
                            for (int i_10 = 0; i_10 < 13;i_10 += 1)
                            {
                                arr_38 [10] = (min((arr_28 [9] [9] [9]), ((~(arr_28 [i_0] [i_0] [i_0])))));
                                var_32 = arr_14 [i_10] [i_0] [i_5] [i_1] [i_0];
                                var_33 = (((~(arr_6 [i_10]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = ((var_10 ? var_0 : ((var_1 - ((var_16 ? var_6 : var_1))))));
    var_35 = var_4;
    var_36 = (min(var_36, (((((~(min(var_14, var_0)))) >> ((((-9338 % (-9 ^ 225))) + 238)))))));
    #pragma endscop
}
