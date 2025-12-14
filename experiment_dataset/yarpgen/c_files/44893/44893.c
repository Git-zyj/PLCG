/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 156;
    var_14 = (((var_0 >= var_10) >= ((((var_2 <= (min(var_3, var_9))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = (max(var_3, (((-(arr_3 [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 &= (max((((arr_9 [6] [i_0] [6] [6] [i_3] [i_4]) ? (arr_9 [i_0] [i_3] [i_2] [i_3] [i_4] [i_4]) : var_5)), ((-(~9381)))));
                                var_16 = ((((max((min(-354, 1)), (arr_4 [i_0] [i_1 - 2] [0] [i_3])))) ? (arr_8 [i_0] [i_0] [i_2] [1] [i_2] [i_0]) : (max((arr_10 [i_1 - 1] [i_0 + 1]), ((var_0 | (arr_4 [i_0 - 4] [i_1] [i_3] [i_3])))))));
                                var_17 = (min(var_17, (((+((156 ? var_10 : ((min((arr_3 [i_0] [i_0] [i_2]), var_7))))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = var_1;
                                arr_13 [i_4] [i_2] [i_2] [i_2] [i_0 + 2] = (max((((arr_1 [i_0 - 4]) ? ((var_5 ? (arr_7 [i_0 - 2] [i_0 - 2]) : var_10)) : (arr_2 [i_0]))), (((var_12 ? ((min(-36, (arr_4 [i_0] [i_0] [i_2] [9])))) : var_2)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1 - 1] [i_2] [i_1 - 1] = (min((((((min((arr_5 [i_0] [i_0] [i_2] [i_1 + 1]), var_12)) + 9223372036854775807)) << (((min(3658551493, (arr_8 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2]))) - 3658551493)))), (arr_11 [i_2] [i_2] [i_2] [i_1] [i_2] [i_0] [i_0])));
                    var_18 &= (((-(arr_5 [i_1 + 1] [i_1 + 1] [i_0] [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
