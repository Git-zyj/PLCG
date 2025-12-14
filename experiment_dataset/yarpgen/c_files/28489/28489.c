/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(((~(arr_1 [i_0]))), var_10));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_6 [7] = (((arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2]) & (arr_4 [i_1 + 1] [i_1 - 2] [i_1])));
            var_14 |= ((~(max(((max(var_6, var_3))), var_11))));
        }
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_15 += var_8;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_16 = var_10;
                        var_17 *= (max(((-(var_5 % var_10))), (((~(var_3 - 65504))))));
                    }
                }
            }
        }
        arr_16 [i_2] = var_0;
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = var_1;
        var_18 *= ((((((arr_15 [i_6] [i_6] [i_6] [i_6]) ? (arr_15 [i_6] [i_6] [1] [i_6]) : var_8))) ? ((max((arr_15 [i_6] [i_6] [i_6] [i_6]), 1))) : (((var_7 || (arr_15 [i_6] [i_6] [i_6] [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_19 = (max((((((arr_2 [i_7]) || (-9223372036854775807 - 1))))), (max(32763, ((max((arr_1 [11]), -8)))))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_31 [i_8] = (max(var_3, (arr_14 [i_7] [i_8] [i_8] [i_9] [i_10])));
                        var_20 = (max((((((((arr_14 [i_7] [i_8] [i_9] [i_9] [1]) ? var_2 : -32763))) ? var_8 : (arr_12 [i_9 + 1] [i_9 - 2] [i_9 + 3] [i_9 + 3])))), (((max((arr_27 [i_8] [i_9] [i_8] [i_8]), var_0)) / ((max(-9223372036854775788, (arr_7 [1]))))))));

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_21 = (max(var_21, ((max(((((arr_26 [i_9] [i_11] [i_9] [i_9 - 2]) - (arr_28 [i_11] [i_9 - 3] [i_9] [i_9 + 1])))), (arr_26 [1] [i_11] [4] [i_9 - 1]))))));
                            var_22 = 1;
                            arr_34 [i_7] [i_8] [i_9 + 2] [i_7] [9] = (arr_29 [i_7] [i_8] [16] [i_7] [i_7]);
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_23 = max((arr_33 [i_9 + 2] [i_9 - 2]), ((((arr_33 [i_9 - 2] [i_9 + 3]) < (arr_33 [i_9 + 3] [i_9 + 3])))));
                            var_24 = (((((var_6 < (arr_0 [9])))) * (((arr_15 [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 + 2]) ? (((var_4 >= (arr_7 [i_7])))) : (!var_4)))));
                            var_25 = (min(var_25, (((((var_3 || var_9) ? (max(var_0, var_6)) : (!var_0)))))));
                            arr_38 [i_8] [i_8] = (((~(arr_24 [i_7] [i_7] [i_8]))));
                            var_26 = (max(((((((arr_18 [i_7] [7]) ? 6 : 255))) ? var_8 : 19297)), (!var_0)));
                        }
                    }
                }
            }
        }
        var_27 |= (((((9 - ((1 ? var_3 : (arr_19 [1] [i_7])))))) ? (((max(var_7, 1)))) : (max(-var_0, var_7))));
    }
    #pragma endscop
}
