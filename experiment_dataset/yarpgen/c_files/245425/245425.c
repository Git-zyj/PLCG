/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((210 - (((arr_3 [i_1] [i_0] [i_0]) ? (arr_3 [i_1] [i_0] [i_0]) : (arr_3 [i_0] [i_1] [5]))))))));
                var_14 = (min((((((((arr_4 [i_1]) ? (arr_3 [i_0] [i_1] [i_1]) : var_12))) ? ((200306620 / (arr_3 [i_0] [i_1] [i_0]))) : (min((arr_2 [i_0]), (arr_3 [i_0] [i_0] [i_0])))))), (((arr_0 [i_0]) ? 1 : (var_12 - var_1)))));
                arr_6 [10] = var_0;
            }
        }
    }
    var_15 = (max(var_15, (((((min(var_10, -8482084067121578408))) ? (((var_10 ^ var_4) ? (min(-1, var_5)) : (var_0 && var_12))) : (~var_9))))));
    var_16 = ((min((((var_12 ? 8482084067121578408 : var_12))), ((1 ? var_1 : var_5)))));
    var_17 = ((var_12 / ((200306620 ? var_4 : (1 * var_8)))));
    #pragma endscop
}
