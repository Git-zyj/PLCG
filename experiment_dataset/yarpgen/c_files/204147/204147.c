/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = (((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0 + 1]))) + 2147483647)) >> (((arr_0 [i_0]) & (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 = (max(var_13, ((((99 - (arr_0 [i_0])))))));
            var_14 = (((var_11 ? var_3 : (arr_1 [i_0]))));
            arr_6 [i_1] [i_0] = var_4;

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_15 = (((arr_5 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])));
                arr_9 [i_0] [7] [7] = (((var_7 + 11698261349659052339) != ((((arr_7 [i_0] [i_0] [i_0 + 1]) ? var_4 : (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_16 = (max(var_16, var_6));
                            arr_14 [i_0] [4] [7] [0] [i_4] [0] [i_0] = ((238 ? (arr_5 [i_0 + 1]) : var_6));
                            var_17 = (max(var_17, ((((arr_1 [6]) ? (arr_8 [i_0 + 1] [2]) : (arr_3 [i_0] [i_0 + 1]))))));
                            var_18 = (max(var_18, (arr_5 [i_0 + 1])));
                            var_19 = (((arr_0 [i_0 + 1]) ? ((var_9 ? var_0 : var_8)) : (((arr_3 [5] [1]) ? var_4 : var_1))));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_17 [i_0] [5] [i_0] [3] = (((arr_16 [i_0]) ? (((arr_0 [i_5]) ? (arr_10 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0]) : (arr_8 [i_0] [i_0]))) : (((var_8 >> (((arr_7 [i_0] [i_1] [i_5]) - 13154)))))));
                arr_18 [8] [8] [i_5] [0] |= (((((arr_7 [i_5] [9] [i_0]) != var_8)) ? (((var_0 ? -1 : (arr_1 [i_5])))) : var_6));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    arr_24 [i_0] = (((arr_22 [7] [7] [i_7 - 1] [i_0]) > (arr_22 [9] [i_7] [i_7 - 1] [i_0])));
                    var_20 = ((-((-(arr_5 [i_0])))));
                    var_21 = (max(var_21, var_0));
                    arr_25 [i_0] [i_0] = ((((((arr_7 [i_0] [i_0] [2]) ? var_6 : var_5))) ? (arr_15 [i_0 + 1] [i_0 + 1] [6] [7]) : (15 % var_9)));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    arr_28 [2] [i_1] [i_8] &= (((var_0 ? (arr_15 [i_0] [i_0] [i_6] [i_8]) : (arr_15 [i_0] [1] [1] [1]))));
                    arr_29 [i_6] [i_0] = (-9223372036854775807 - 1);
                }
                arr_30 [9] [i_0] = (arr_12 [i_0] [i_1] [i_6] [i_0 + 1] [i_0 + 1]);
            }
        }
        for (int i_9 = 3; i_9 < 8;i_9 += 1)
        {
            var_22 = (((((var_3 ? var_11 : (arr_20 [i_0] [i_0] [i_0] [9])))) ? (((-4 || (arr_21 [i_9] [i_0] [i_0] [i_0])))) : 65531));
            var_23 = ((-((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        }
    }
    var_24 = var_10;
    var_25 = ((!(((var_3 ? var_10 : var_0)))));
    #pragma endscop
}
