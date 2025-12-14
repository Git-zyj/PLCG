/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (min(var_15, ((((((arr_1 [i_0]) < ((((var_8 >= (arr_0 [i_0])))))))) - (((var_2 ? var_7 : 32767)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        arr_13 [i_2] [i_2] [i_0] = var_8;
                        var_16 = (max(var_16, (((~(((arr_1 [i_3 - 2]) ? ((var_3 ? (arr_10 [i_0] [i_1 - 1]) : (arr_2 [i_0] [i_1] [i_2]))) : (((65535 ? var_6 : (-127 - 1)))))))))));
                    }
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        var_17 = (arr_16 [i_2] [i_1 - 1] [i_0]);
                        arr_17 [i_2] [i_1] [i_2] [i_4 - 2] = ((((((arr_4 [i_1 - 1] [i_1 - 1] [i_4 - 2]) ? ((var_2 ? var_9 : var_6)) : (((9223372036854775800 ? 1 : 15760)))))) ? (((max((arr_16 [i_0] [i_4 - 3] [i_1 - 1]), (arr_11 [i_0] [i_1 - 1] [i_2] [i_4 - 2] [i_0]))))) : (min(((var_10 ? var_14 : (arr_4 [i_4 - 1] [i_2] [i_1]))), (arr_15 [i_0] [i_1] [i_2] [i_1 - 1])))));
                        var_18 = (min((((arr_4 [i_2] [i_4 - 1] [i_2]) ? (((var_1 ? -1 : var_3))) : (var_5 | var_6))), (~65531)));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_19 &= var_2;
                        var_20 = (max(var_12, ((-(arr_9 [i_0] [i_1 - 1])))));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_21 = ((((((arr_9 [i_1 - 1] [i_6 - 1]) ? (max(var_3, (arr_18 [i_0] [i_0] [i_0] [1] [i_0]))) : (arr_11 [i_6] [i_2] [i_0] [i_1] [i_0])))) ? (((var_5 ? var_3 : 15761))) : (arr_5 [i_2] [i_1] [14])));
                        var_22 = ((-((-(((arr_2 [i_0] [i_0] [i_0]) / (arr_10 [i_0] [i_6])))))));
                        var_23 = max((var_12 ^ 32767), (((arr_7 [i_6 - 1]) ? (arr_7 [i_6 - 1]) : (arr_7 [i_6 - 1]))));
                        arr_22 [i_0] [i_2] [i_0] [i_2] [i_0] = ((~((var_1 >> (((arr_5 [i_6 - 1] [i_1] [i_2]) - 107))))));
                        var_24 &= (arr_10 [i_1 - 1] [i_6 - 1]);
                    }

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_25 -= (min((max((arr_8 [5] [9]), (arr_2 [i_0] [13] [i_0]))), 2147483633));
                        var_26 &= ((arr_14 [i_1 - 1] [i_2] [i_1 - 1] [i_7] [i_2] [i_0]) ? -32765 : var_2);
                        arr_25 [i_2] [i_2] [i_2] [0] [1] [i_2] = 18088;
                        arr_26 [i_0] [i_0] [i_2] [i_2] [i_2] = ((!((!(arr_12 [i_0] [i_1 - 1] [i_7] [i_0])))));
                    }
                }
            }
        }
    }
    var_27 += var_13;
    #pragma endscop
}
