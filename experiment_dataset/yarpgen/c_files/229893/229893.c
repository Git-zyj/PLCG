/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((127 ? -119 : ((-127 ? -2689553967 : 1605413328))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((~(min(-119, 1536))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (max(((var_8 ? (max(125, (arr_9 [i_0] [i_2] [i_2] [i_3] [i_4 - 3] [i_2]))) : 103)), (((-(arr_0 [i_3 - 1]))))));
                                var_21 = ((max(var_17, var_11)));
                                var_22 = (max((max(114, -126)), (((~((var_3 ? (arr_10 [i_1] [i_3]) : 40548)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_23 = (((((min(1530, 0)) - var_12))));
                                arr_17 [i_0] [i_0] [i_5] [i_0] [i_0] = ((((((var_8 ? var_13 : (arr_16 [i_6] [i_5] [i_5] [i_1 + 1] [i_0]))) <= (((var_3 / (arr_12 [i_5])))))) ? var_5 : ((-31324 ? -89 : -16384))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2] = 59259;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                var_24 = (((min((((-131 ? var_5 : -24076))), -1605413328)) - (((~(arr_21 [i_8] [i_7]))))));
                var_25 |= 131;
                arr_26 [i_7] [i_7] = (((((((!(arr_23 [i_7]))))) <= (((var_7 + 9223372036854775807) >> (var_11 - 2452518710))))));
            }
        }
    }
    var_26 = (min(var_26, var_7));
    var_27 = (((max(var_3, (max(var_9, var_0)))) <= (((((7734 ? -89 : var_8)))))));
    #pragma endscop
}
