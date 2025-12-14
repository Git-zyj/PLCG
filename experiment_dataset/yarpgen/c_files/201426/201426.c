/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 += (max((arr_0 [4]), ((((min(var_10, (arr_2 [i_0])))) ? ((var_8 ? (arr_10 [i_2] [i_1] [i_2] [2] [i_4]) : (arr_5 [i_0] [6] [i_2]))) : var_3))));
                                var_22 = (arr_7 [i_4] [i_1] [i_2] [i_3]);
                                var_23 = (-(min(var_4, (arr_10 [i_4] [0] [i_2] [i_1] [i_0]))));
                                var_24 = (max(var_24, (arr_6 [i_0] [i_0] [i_0])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_25 = ((!(((~(arr_8 [i_0] [i_1] [i_2] [4]))))));
                        var_26 = (min((arr_6 [i_0] [i_0] [i_1]), ((~(arr_3 [i_0] [i_0] [i_0])))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_16 [0] [i_6] [2] [i_6] |= ((!((((arr_7 [i_0] [i_1] [i_2] [i_6]) ? (arr_4 [i_0]) : var_8)))));
                        var_27 = ((!(((var_5 ? (((var_4 ? (arr_0 [i_0]) : (arr_3 [i_0] [i_1] [7])))) : (arr_12 [2] [i_6] [i_6] [i_6] [i_6] [i_1]))))));
                        var_28 = ((-(((!(arr_15 [5] [i_1] [i_2] [i_2] [i_6]))))));
                    }
                    var_29 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
