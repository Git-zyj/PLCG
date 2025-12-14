/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_15 = var_13;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1 + 3] [i_1] [i_1] = (((arr_0 [i_1 + 1] [i_2 + 3]) ? (((arr_0 [i_1 + 4] [i_2 - 1]) ? (arr_0 [i_1 + 2] [i_2 + 3]) : (arr_0 [i_1 + 2] [i_2 + 3]))) : (((!(arr_0 [i_1 + 1] [i_2 - 3]))))));
                            var_16 += var_2;
                        }
                    }
                }
                var_17 = arr_7 [i_0] [i_0] [i_0];
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_18 |= (((((-((min((arr_19 [i_5] [6] [i_1] [i_1] [1] [i_0]), var_7)))))) ? ((((!(var_5 * var_9))))) : (max((max(var_5, var_6)), ((min(var_13, var_7)))))));
                            var_19 = ((((var_6 ? (arr_2 [i_1 + 1] [i_1 - 1]) : (arr_2 [i_1 + 1] [i_1 + 2]))) >> ((((max((arr_14 [i_1 - 1]), (arr_14 [i_1 + 1])))) - 207))));
                            arr_21 [i_0] = (max((((arr_15 [i_4] [3] [i_0]) ? (arr_1 [i_0] [i_4]) : (arr_1 [i_4] [i_0]))), ((max((arr_1 [i_1 + 1] [i_1 + 1]), (arr_15 [i_0] [i_1 + 1] [i_4]))))));
                            arr_22 [i_1] = (min((((arr_10 [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_0]) ? (arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 3] [i_0]) : var_4)), ((min(var_7, var_0)))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = var_2;
    var_22 ^= ((-(((((var_6 ? var_10 : var_2)) != var_2)))));
    #pragma endscop
}
