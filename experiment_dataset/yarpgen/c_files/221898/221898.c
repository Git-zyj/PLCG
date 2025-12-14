/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((max(var_4, -1117060389))) ? (((-1117060370 + 2147483647) << (((-5 + 25) - 19)))) : var_10))) + var_5));

    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((~(((!(arr_0 [6] [i_0]))))))) ? (((((55550 | (arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) ? (arr_1 [15] [15]) : (arr_1 [i_0 - 1] [i_0]))) : ((174 ? (arr_1 [i_0 + 3] [i_0 - 4]) : -1047763986)))) : ((var_7 % (arr_0 [i_0 - 3] [i_0 - 4])))));
        var_12 = ((((var_9 >> (1117060389 - 1117060378)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = ((((arr_1 [i_0 + 3] [i_0 - 3]) ? (min((arr_8 [i_0] [10] [i_0] [i_0]), var_5)) : (((max(var_1, var_9)))))));
                    arr_9 [i_0 - 3] [i_0] [10] = (min((min(((max((arr_6 [3] [3]), 536805376))), (((arr_5 [i_0] [i_1] [i_0]) * var_0)))), (min(((max((arr_6 [i_0 - 4] [i_0 - 4]), -1117060389))), var_5))));
                    arr_10 [i_0 + 2] [i_1] [i_0 + 2] = (arr_8 [i_0] [i_1] [0] [i_0]);
                }
            }
        }
        arr_11 [13] [i_0] = -1;
    }
    for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] [i_3] [i_3 - 2] [i_3] [i_3] = (arr_14 [i_3 - 3] [i_4 - 3] [i_7 - 1]);
                                arr_24 [i_6] [i_6] [i_6] [i_6] [1] = -1117060389;
                                arr_25 [12] [i_4] [14] = (((((max(408697273661841906, (arr_14 [1] [1] [i_5]))))) ? (arr_7 [i_3] [i_3] [i_3 + 2]) : (var_7 / var_0)));
                                var_14 = ((((max(((max((arr_13 [i_5]), 55559))), ((var_0 ? var_7 : var_6))))) ? ((((arr_18 [i_3 + 1]) && (((1117060389 ? var_7 : (arr_13 [i_3]))))))) : (!var_10)));
                            }
                        }
                    }
                    var_15 = var_3;
                    var_16 = (-56 != 127);
                }
            }
        }
        var_17 = (arr_18 [i_3]);
    }
    #pragma endscop
}
