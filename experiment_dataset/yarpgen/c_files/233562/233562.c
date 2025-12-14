/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = ((((arr_0 [i_1 - 1]) * (arr_2 [i_1 - 1]))));
                var_16 = ((0 ? 1 : 0));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_17 = (min(var_17, var_0));
                    var_18 = 99;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_19 = (max(var_19, 3441333005643729301));
                        arr_8 [i_0] [i_1 - 1] [i_0] [i_3] = (((arr_4 [i_1] [i_1] [i_1] [i_1 + 1]) ? var_7 : var_0));
                    }
                    var_20 = (((arr_5 [i_0] [i_0] [i_2] [i_2]) && (arr_5 [1] [i_2] [i_2] [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_21 = (max(((1 ? (max(var_3, var_9)) : (65534 / var_3))), (((((1 ? var_8 : var_8)) & (arr_10 [i_4]))))));
                var_22 = (min(var_22, ((((arr_9 [i_4 + 2]) ? (max((arr_12 [18]), (arr_14 [i_4] [i_5]))) : ((((max((arr_11 [6]), (arr_11 [2])))))))))));
                var_23 = (max(var_23, ((max((arr_10 [16]), (arr_11 [6]))))));
            }
        }
    }
    var_24 = max(var_11, (var_2 || var_9));
    #pragma endscop
}
