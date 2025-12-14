/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 ? (min(var_4, var_2)) : (-127 / var_9)));
    var_17 = (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((!32768) ? (arr_2 [i_0] [i_0]) : var_5));
                var_18 = (min(var_18, (arr_3 [i_0] [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
