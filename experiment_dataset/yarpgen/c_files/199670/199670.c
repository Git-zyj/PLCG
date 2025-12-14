/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((1 ? 194 : 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max(var_14, ((var_0 ? (arr_1 [i_1] [i_1]) : (((1 ? 2142768675 : (arr_4 [i_0]))))))));
                arr_6 [6] [i_1] = ((1 - ((~((var_9 ? 1 : var_5))))));
            }
        }
    }
    var_16 = (min(var_16, (((((((2181843386368 | 1) ? 4294967295 : (((var_0 ? -1 : var_3)))))) ? var_9 : (!-1018690062))))));
    var_17 = var_8;
    #pragma endscop
}
