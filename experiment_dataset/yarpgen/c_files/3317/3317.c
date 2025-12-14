/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = ((var_6 / var_7) ? ((((var_0 ? var_8 : var_5)) / (var_1 - var_6))) : (max(var_2, var_1)));
    var_12 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((var_3 * (((arr_7 [i_1 - 3] [i_1 + 2] [i_1 - 1]) ? var_4 : (arr_7 [i_1 - 1] [i_1 + 3] [i_1 + 1]))))))));
                    var_14 = ((((((arr_6 [i_1 + 2] [i_1 - 3] [i_1 - 4]) + (arr_6 [i_1 - 2] [i_1 + 2] [i_1 - 4])))) ? (((arr_6 [i_1 + 3] [i_1 - 1] [i_1 - 4]) ? (arr_2 [i_1 + 2] [12]) : var_7)) : ((((arr_2 [i_1 + 2] [i_1]) ? (arr_2 [i_1 - 2] [i_1]) : (arr_6 [i_1 + 2] [i_1 - 2] [i_1 - 1]))))));
                    var_15 = (((var_6 + (arr_8 [i_2] [8] [22] [8]))));
                }
            }
        }
    }
    var_16 = (!var_9);
    #pragma endscop
}
