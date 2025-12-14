/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_10 = var_9;
                            arr_11 [15] [i_0] [11] = (max((((min(1, 1)))), ((((43938 || var_5) && (((~(arr_4 [i_0] [i_0] [i_0])))))))));
                            arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] = ((((((max(170, (arr_9 [8] [i_2] [i_0]))))) | (11192545432104571796 ^ var_0))));
                            arr_13 [i_3] [i_3] [i_0] [i_0] = (~-var_6);
                            arr_14 [i_0] = (min(var_5, -var_7));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_11 |= var_6;
                                arr_23 [i_0] [4] [i_0] [1] [i_0] [4] [13] = (!var_1);
                            }
                        }
                    }
                    var_12 |= 252123386;
                    arr_24 [i_4] [i_0] [i_0] [i_0] = (((1 ? 13854 : -5719315805448087265)));
                    arr_25 [i_0] [i_1] [11] = (~-var_9);
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_13 = (min(var_13, ((+(((arr_5 [4]) ? (arr_7 [i_0] [4] [i_1 + 1] [i_7]) : (arr_7 [i_0] [12] [12] [i_0])))))));
                    var_14 = (max(var_14, ((((((((var_2 ? (arr_19 [i_0] [2] [i_7] [12] [12] [12]) : var_8))) ? (((~(arr_1 [0])))) : ((161389283 ? -5719315805448087265 : (arr_18 [i_7] [i_7] [7] [i_0] [i_0]))))) ^ (arr_22 [8] [i_1 + 1] [i_1] [i_1 + 1] [8]))))));
                    arr_29 [14] [1] [12] [8] |= 1;
                }
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    var_15 = ((((max((var_5 < var_1), var_1))) || (arr_21 [i_8] [0] [i_0])));
                    var_16 = (max(var_16, var_6));
                }
                var_17 &= (var_0 ? ((-(arr_2 [4] [i_1 + 1]))) : (((var_6 || (arr_2 [4] [i_1 + 1])))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        {
                            arr_37 [i_0] [i_0] [i_0] [14] [11] = ((((5719315805448087264 ? 0 : -100))) ? ((((arr_32 [1] [6] [i_0]) ? var_9 : (arr_20 [i_10] [0] [i_0] [i_1] [i_0] [i_0])))) : (arr_18 [i_0] [i_1] [i_1] [i_1] [i_10]));
                            arr_38 [i_0] [1] [i_0] [i_10 - 1] [1] [i_0] = (((!(((2 ? (arr_19 [0] [i_10] [i_0] [i_0] [i_1] [i_0]) : (arr_0 [i_1] [i_9])))))));
                            var_18 &= (!0);
                            var_19 = (((arr_19 [i_10 + 2] [13] [7] [i_0] [5] [i_10]) | ((((arr_19 [i_10 + 1] [3] [i_10] [i_0] [i_10] [i_10]) != (arr_19 [i_10 + 2] [8] [i_10 - 1] [i_0] [i_10] [12]))))));

                            for (int i_11 = 1; i_11 < 16;i_11 += 1)
                            {
                                var_20 += ((((arr_32 [i_0] [i_0] [0]) ? (arr_32 [i_1] [i_10 + 1] [8]) : (arr_32 [i_1 + 1] [i_1] [6]))));
                                arr_41 [i_0] = (((min((var_2 << 0), var_3)) | (((((arr_33 [i_1 + 1] [i_11 + 1] [i_10 + 2] [i_1 + 1]) || var_0))))));
                                var_21 -= (max(1, 1));
                                var_22 = ((!var_8) < (((arr_0 [i_1 + 1] [i_1]) ? (arr_17 [i_1 + 1] [i_1 + 1] [i_11 + 1] [i_0]) : (arr_0 [i_1 + 1] [i_1 + 1]))));
                            }
                        }
                    }
                }
                arr_42 [i_0] [14] [i_1] = (((((arr_36 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1]) ? (arr_20 [i_0] [1] [i_0] [i_1 + 1] [i_1] [i_1 + 1]) : (((arr_6 [9]) ? var_1 : 1)))) > 1));
            }
        }
    }
    var_23 |= (((((((1 ? 147 : var_7)) <= var_7))) <= (((!(~var_6))))));
    var_24 &= (((((((var_3 ? var_6 : var_5)) / var_0))) / -var_3));
    #pragma endscop
}
