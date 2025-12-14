/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_0 ? (var_12 - var_4) : var_6))) ? (((((1340716685 ? 27931 : var_0)) < (!var_8)))) : ((max(37577, (min(var_13, 31)))))));
    var_15 = ((!((min(var_12, (!var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = 0;
                arr_5 [i_1] = (min(1369000722, 37577));
                arr_6 [i_0] [i_1] = (max((((arr_4 [i_0] [5]) ? (((arr_4 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : -1)) : (!11))), (arr_3 [i_0])));
            }
        }
    }
    var_17 = (min(var_17, ((((var_2 ? (min(var_12, var_11)) : (var_0 || 43)))))));
    #pragma endscop
}
