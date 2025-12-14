/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((var_12 ? (((var_1 ? var_9 : var_3))) : 12089582269713386018))));
    var_16 = (min(var_1, (var_8 / var_6)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [9] [i_1] [9] = ((max((max(var_10, var_12)), 121)));
                var_17 = (((((((~(arr_1 [i_0]))) & (((max((arr_4 [i_0 - 1]), (arr_0 [i_0 + 1] [0])))))))) ? ((max(-17373, 136))) : (max(0, -1032777741))));
            }
        }
    }
    #pragma endscop
}
