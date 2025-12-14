/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    arr_7 [i_0] [i_2] [i_1] [i_2 - 3] = ((((((((arr_5 [i_2] [0] [7]) & var_2)) != var_2))) <= (((((((arr_2 [5] [5] [7]) && var_5))) != (arr_5 [i_2] [i_1] [1]))))));
                    var_12 = (arr_2 [i_0] [i_1] [i_2]);
                    var_13 ^= var_9;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [0] [i_1] [i_2] [i_1] [i_2] [1] = ((var_3 ? (arr_0 [i_2 - 2]) : (arr_2 [i_2 + 2] [0] [i_3])));
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = (((((((arr_0 [i_2]) != var_11)))) <= ((-1398266158 ? 8516160068986041084 : 1398266158))));
                        var_14 = (arr_3 [5] [5]);
                        arr_13 [i_0] [i_2] [i_2] [i_0] = (((arr_9 [11] [i_3] [i_3] [i_3] [i_3]) - ((var_4 ? (arr_8 [i_0] [i_1] [i_1] [i_3]) : var_11))));
                        arr_14 [i_0] [i_0] [8] [i_0] [i_2] = (!(arr_2 [6] [i_1] [4]));
                    }
                }
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    var_15 = (min(var_15, var_8));
                    var_16 = (min(var_16, ((((((max(var_6, var_4))) <= (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]))) ? (4880224 ^ -118) : (arr_8 [14] [i_4] [i_4 + 1] [i_0])))));
                }
                var_17 = (((((((var_3 ? (arr_4 [i_0] [2] [i_1] [i_1]) : var_3)) * (arr_4 [i_0] [i_0] [i_0] [i_0])))) ? (arr_1 [i_1]) : var_11));
                arr_19 [i_0] [i_0] [i_0] = ((max(((var_7 ? var_7 : (arr_17 [i_0]))), var_0)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_27 [14] [i_6] = (max(-var_6, ((var_7 ? var_8 : var_4))));

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                arr_31 [i_0] [5] [i_0] [5] [5] [i_0] &= var_1;
                                var_18 = (((((-(arr_9 [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((arr_18 [9] [5] [11]) * var_11)) : (arr_18 [i_0] [i_1] [i_5])));
                                var_19 = ((((((arr_9 [10] [i_1] [0] [i_1] [i_1]) && var_11))) << (((arr_2 [i_0] [i_1] [13]) - 11805740624849922163))));
                                var_20 = (min(var_20, ((((arr_29 [i_7] [i_5] [i_5] [i_1] [i_0]) ? (arr_29 [6] [i_1] [i_5] [i_6] [i_0]) : (arr_29 [i_0] [i_1] [i_5] [i_6] [6]))))));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 15;i_8 += 1)
                            {
                                var_21 = (~var_3);
                                var_22 = ((arr_22 [i_0] [i_6]) ? (arr_22 [i_8] [i_0]) : var_2);
                                arr_34 [i_0] [i_8] [i_5] [i_6] [i_8] [i_8] = ((-((var_0 ? var_4 : var_8))));
                                arr_35 [i_8] [i_8] [i_8] [i_1] [i_8] = (((arr_9 [i_0] [i_0] [7] [i_0] [i_0]) / (arr_9 [i_0] [1] [i_0] [i_6] [i_0])));
                                arr_36 [9] [i_8] [9] [14] [i_8] [11] = (arr_15 [i_8] [i_8] [i_8] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= (min(((((var_2 ? var_10 : var_9)) & (~var_1))), var_4));
    var_24 = (min(var_24, (((((((var_2 + 2147483647) << (var_8 - 11364989962984019353)))) ? ((((!((max(var_1, var_5))))))) : var_11)))));
    var_25 = (max(var_2, (((((var_5 ? var_6 : var_11))) ? -var_6 : (var_11 != var_7)))));
    var_26 = var_11;
    #pragma endscop
}
