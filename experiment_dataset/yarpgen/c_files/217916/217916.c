/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_0 ? var_2 : 920)) < var_1)))) > (min(var_0, var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 -= ((var_4 ? (((((max((arr_0 [i_1]), (arr_3 [i_1])))) ? (arr_3 [i_0]) : (arr_5 [8] [i_0])))) : (max((arr_5 [2] [2]), ((6427112730458539716 >> (((arr_3 [i_0]) + 5234914690780485630))))))));
                var_17 = (((((((min(5867265915544239236, (arr_2 [i_0])))) ? var_0 : (arr_0 [i_0])))) ? ((((arr_4 [i_0 - 1] [i_0 - 1]) ? (((922202283 >= (arr_4 [i_0] [i_0 - 1])))) : -1431741132))) : (max(((1897365241 ? (arr_4 [i_0 - 1] [i_0]) : (arr_2 [i_0]))), ((max((arr_5 [i_0] [i_0]), 2397602052)))))));
            }
        }
    }
    #pragma endscop
}
