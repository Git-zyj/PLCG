/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((-(min(4279001763, 4347))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (((((min((arr_4 [i_2 + 1]), (((var_4 ? (arr_0 [i_2]) : (arr_0 [2]))))))) ? var_17 : (((arr_6 [i_2 + 1]) * ((var_13 / (arr_1 [6]))))))))));
                    var_22 = (((((-((max((arr_5 [i_1]), var_19))))) + 2147483647)) >> (((arr_8 [i_2] [1] [0]) - 2155486627)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [3] [i_1] [i_2 - 2] [i_3] [i_0] [i_1] [i_1] = (((((((61189 ? 1184252122 : 25534)) >> var_3))) ? ((max(((var_16 ? (arr_1 [i_0]) : -676636005570455549)), (arr_6 [i_2 - 2])))) : (max(((max(var_17, (arr_0 [16])))), ((-(arr_9 [i_1] [i_3] [i_3])))))));
                                arr_14 [4] [i_1] [4] [4] [i_1] = (((((arr_11 [i_2 - 1] [i_2 - 3] [i_1] [i_2 + 1] [i_0]) != (arr_8 [1] [i_2 + 1] [3]))) ? (arr_1 [i_4]) : var_7));
                                var_23 = (min(var_23, (((min((arr_7 [i_0] [i_0] [i_0] [i_0]), (min((arr_1 [14]), (arr_2 [i_0] [i_0]))))) + -676636005570455566))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [9] [i_4] = (arr_1 [i_0]);
                            }
                        }
                    }
                    var_24 += ((-(((228600670 / -126) ? (!var_13) : (((var_10 < (arr_11 [i_2 - 1] [i_2 + 2] [i_0] [2] [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
