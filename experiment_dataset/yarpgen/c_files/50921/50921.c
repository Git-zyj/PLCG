/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = var_2;
                                var_16 = (((~(arr_0 [i_3]))) & ((((!2651454103) || (254538098 < 2651454103)))));
                                arr_15 [i_1] [i_1] [i_2] [i_3] [2] |= (((((!((((arr_1 [i_1]) ? 1011590032 : (arr_2 [i_1]))))))) << (((!(arr_3 [i_2] [i_1]))))));
                                arr_16 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] [i_3] = (((1643513192 * 2651454099) ? (((arr_5 [i_1] [i_2] [i_1]) / (arr_5 [i_1] [i_2] [i_3]))) : ((((arr_12 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0]) ? ((max(1, (arr_12 [6] [6] [i_3] [i_2] [6] [i_0])))) : ((~(arr_6 [i_0] [i_0] [i_0]))))))));
                            }
                        }
                    }
                    var_17 = (min(var_17, (((-((((var_6 ? var_12 : 2189417418)) ^ (arr_7 [i_0] [i_1] [i_2]))))))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_18 = (min(((-(((arr_2 [i_0]) ? (arr_9 [i_0] [1] [i_5] [i_0]) : var_4)))), (arr_10 [i_0] [i_1] [i_5] [i_0] [i_0] [i_5])));
                    arr_19 [i_0] [i_0] [i_0] [i_1] = 5421301985654211125;
                    var_19 = (((max((((arr_3 [i_1] [i_1]) % (arr_12 [i_0] [3] [3] [i_0] [i_0] [i_0]))), var_7)) & (min((arr_5 [i_0] [i_1] [8]), (arr_5 [i_0] [i_1] [i_5])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_7] [6] [i_5] [i_7] [i_6] [i_1] = (((arr_0 [i_0]) | ((-(!var_5)))));
                                arr_28 [i_0] [i_1] [i_5] [i_5] [i_6] [i_1] [i_0] = ((-((((((arr_17 [i_0] [i_0] [i_1]) + (arr_22 [i_0] [i_0] [i_5] [i_7 - 1]))) != (((-1011590032 ? var_10 : (arr_9 [8] [i_5] [7] [i_0])))))))));
                            }
                        }
                    }
                }
                var_20 = arr_9 [i_0] [i_1] [i_1] [i_0];
            }
        }
    }
    var_21 = ((max(((max(var_6, var_13)), (max(var_12, var_10))))));
    var_22 = (((var_6 + var_7) ? var_6 : var_13));

    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_33 [i_8] = (max((max((arr_32 [i_8] [i_8]), var_1)), var_14));
        var_23 += ((-(max(((((arr_31 [i_8] [i_8]) ? 190 : 2651454096))), var_0))));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_36 [i_9] = (((~7) ? 73 : ((-(arr_30 [i_9] [i_9])))));
        var_24 ^= var_2;
        arr_37 [i_9] [i_9] = (arr_29 [i_9] [i_9]);
        var_25 = (!-30);
    }
    #pragma endscop
}
