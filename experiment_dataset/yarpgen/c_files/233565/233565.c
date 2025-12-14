/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(var_4, (((var_6 ? var_2 : var_3))))) | (((((!0) || 2699494096))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2] [i_1] [11] = (((((-(((arr_0 [i_0] [i_1]) ? var_5 : var_9))))) ? ((-13884 ? var_8 : ((1 ? 4194303 : var_8)))) : (((((((arr_8 [i_0] [3] [i_1] [3] [i_3]) / 4194293))) ? (max((arr_9 [i_2] [16] [16] [i_3 - 1]), 0)) : (max(var_8, var_0)))))));
                        var_12 = (min(var_12, ((((min(((min(0, (arr_4 [i_0] [i_0])))), (arr_7 [i_3 - 3] [i_3 - 4] [i_3 - 3] [i_3 - 2])))) ? (((min((arr_9 [i_3 - 1] [i_3] [i_3] [i_3 - 2]), (arr_9 [i_3 - 2] [i_3 + 1] [i_3] [i_3 - 1]))))) : var_4))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_4] [i_0] = -13885;
                        arr_15 [17] [i_4] [i_2] [i_4] = (((arr_13 [i_4] [i_4 - 1]) ? (arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]) : (((arr_6 [i_2]) | (arr_0 [i_0] [i_0])))));
                    }
                    var_13 = (max((-13905 && 4194292), (((min(-104484577, -13880)) - (arr_4 [i_2] [i_2])))));
                }
                var_14 = (min(var_14, (4194285 && var_6)));
            }
        }
    }
    var_15 = var_6;
    var_16 = -4194304;
    #pragma endscop
}
