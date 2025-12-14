/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (((arr_2 [i_0 - 1]) & (max((arr_2 [i_0 + 2]), 562949953421311))));
                var_12 = (arr_2 [i_0]);
                arr_4 [i_0] [i_1] [8] &= ((!(arr_2 [i_0])));
            }
        }
    }
    var_13 += ((var_4 ? var_3 : ((((max(var_7, var_1))) ? var_2 : 0))));
    #pragma endscop
}
