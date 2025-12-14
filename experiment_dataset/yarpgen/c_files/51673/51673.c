/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = ((((max(var_11, var_10))) ? -18842 : ((((arr_0 [i_1]) ? (arr_0 [i_1]) : var_9)))));
                var_13 = (min(var_13, (((((((arr_0 [i_1]) ? var_4 : 206))) ? (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_0]))) : (arr_0 [i_0]))))));
            }
        }
    }
    var_14 = (max((~3473729824113984777), (((var_8 ? ((var_5 ? 0 : 0)) : (var_1 / -59))))));
    #pragma endscop
}
