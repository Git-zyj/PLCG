/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (((max(((((arr_1 [i_2]) ? 18323 : var_0))), (((arr_7 [1]) >> (arr_4 [i_2] [i_1] [i_0]))))) <= var_9));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_13 = ((!(arr_6 [i_0] [12] [i_2] [i_3])));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_14 = var_3;
                            var_15 = (((arr_10 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1]) | 16383));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_3] [i_2] [i_3] [2] [i_0] = ((!((17236670494790179578 != (arr_16 [i_0] [i_0])))));
                            arr_18 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_5] = (((arr_16 [i_3 + 2] [i_2 - 2]) ? (arr_16 [i_3 - 1] [i_2 + 2]) : var_5));
                            arr_19 [i_0] [4] [4] [i_0] = -3;
                            var_16 = (min(var_16, ((((arr_10 [i_3] [i_1] [i_2 - 1] [i_3]) ? (arr_8 [i_5] [10] [i_2 + 1]) : (arr_10 [i_2] [8] [i_2 + 3] [i_3]))))));
                            var_17 = (255 | -1);
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_6] = var_1;
                            arr_24 [0] [i_1] [i_2] [i_3] [i_6] = (arr_4 [0] [3] [i_2]);
                        }
                        arr_25 [1] [i_3] [i_2] [2] [i_0] = (1 ? (arr_5 [i_3 + 2] [i_3] [i_2 - 1]) : var_0);
                        var_18 = (arr_4 [i_3 - 1] [i_2] [i_2 + 2]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            arr_32 [i_8] [i_7] [i_2] [i_7] [i_0] = ((131071 | (arr_27 [i_2 + 1] [i_8 - 2] [5] [8] [i_7])));
                            var_19 = (max(var_19, (arr_0 [i_0])));
                        }
                        arr_33 [i_0] [i_0] [i_7] [i_2] [i_7] [11] = ((!(((50 >> (2047 - 2030))))));
                    }
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        arr_36 [i_0] [1] [i_9] = 13616;
                        var_20 = ((((!(65535 / 1125899906842623))) ? ((max(var_7, ((-(arr_5 [8] [i_1] [i_0])))))) : (arr_6 [i_9 + 1] [9] [2] [i_2 + 2])));
                        arr_37 [i_0] = ((((((((((arr_31 [i_0] [3] [0] [4] [i_1] [6] [i_2]) && (arr_8 [i_0] [i_1] [i_2]))))) & (max((arr_12 [12] [i_1] [i_2] [i_9] [i_2]), 1))))) ? ((((((arr_3 [8] [5]) ? (arr_14 [i_9] [2] [i_2] [9] [i_0]) : var_2))) ? (arr_28 [i_0] [11] [i_2] [i_9] [8] [3]) : ((min((arr_28 [i_0] [i_1] [i_2] [i_0] [i_1] [i_2]), var_5))))) : var_4));
                        arr_38 [4] [10] [i_1] [i_2] [i_9] = ((((min((arr_28 [i_1] [i_1] [i_2] [i_9] [i_9] [i_0]), 3726245781)) + (arr_26 [1] [i_9 - 1] [i_2 + 2] [1]))));
                    }
                }
            }
        }
    }
    var_21 += ((var_7 == ((-var_6 % ((var_7 ? 2147483647 : var_1))))));
    var_22 = (var_11 & var_2);
    #pragma endscop
}
