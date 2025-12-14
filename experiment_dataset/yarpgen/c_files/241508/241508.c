/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-var_7 || ((min(var_6, -1669005462)))))) >> (var_9 + 102)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_12 = ((var_7 ? (((arr_0 [i_2]) ? (var_9 & var_9) : 1669005462)) : (+-10470)));
                    var_13 = ((-(arr_6 [i_1])));
                    arr_8 [i_1] [i_2] |= ((((-(arr_3 [i_1] [i_2 - 1]))) - 65535));
                    var_14 = (max(((min(1669005473, var_6))), 10440));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] [0] = (((-(arr_1 [i_0] [i_3]))) | (((((arr_5 [i_0] [i_0] [i_3]) < var_6)))));
                        arr_12 [i_0] [i_1] [i_0] = -1669005475;
                        arr_13 [i_0] = (-((-(arr_0 [i_0]))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_2 - 1] [i_4] = (((((!(arr_14 [i_0] [i_1] [i_1] [6] [i_0] [i_4])))) + (arr_9 [i_1] [i_2 - 1] [9] [0] [i_0] [i_4])));
                        var_15 = (max(var_15, (((((arr_10 [i_0] [i_0] [7]) ? ((var_4 ? (arr_14 [i_1] [6] [i_1] [6] [i_1] [i_1]) : (arr_6 [i_0 - 1]))) : 1))))));
                        var_16 = ((((!(((-(arr_4 [i_0] [i_1])))))) ? (((var_2 != var_10) ? (min(1573310407, 10468)) : (((6873660110682387114 ? 70422811 : 1))))) : var_2));
                        var_17 = (arr_16 [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_18 = (min(var_18, ((-(arr_9 [10] [i_1] [i_0 - 1] [i_5] [i_1] [i_2 - 1])))));
                        var_19 = (min(var_19, -var_2));
                    }
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_20 = ((((~var_5) - ((((arr_23 [i_0 - 1] [i_1] [i_0]) || var_8))))) ^ ((((var_8 ? 23017 : -1669005467)) * var_4)));
                    var_21 *= ((~((-(max(10478, (arr_22 [i_0] [i_0] [i_6] [i_0 - 1])))))));
                }
                arr_25 [i_0 - 1] [i_0] = (((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_1] [i_0] [i_0 - 1] [i_0]) : var_8));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                var_22 = (((-(arr_27 [i_7 - 1]))));
                var_23 = ((-((((arr_26 [i_7 - 2]) <= ((-1669005467 ? (arr_28 [i_8] [i_7 + 3] [i_7]) : (arr_27 [i_8]))))))));
                arr_30 [i_8] [8] [8] = ((((((arr_29 [i_7 + 3] [i_7 + 2]) ? var_2 : var_8))) ? (((arr_29 [i_7 + 3] [i_7 - 2]) | (arr_29 [i_7 + 1] [i_7 + 4]))) : var_1));
            }
        }
    }
    var_24 = var_8;
    #pragma endscop
}
