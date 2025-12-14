/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = var_6;
                arr_6 [i_1] [i_1 - 1] = ((~(arr_2 [i_1])));
            }
        }
    }
    var_16 = max((((max(var_12, var_12)))), ((((var_9 ? var_12 : var_6)) ^ var_7)));
    #pragma endscop
}
