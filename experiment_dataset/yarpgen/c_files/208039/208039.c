/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_10 ? -var_1 : ((var_8 ? var_5 : var_4))))) ? ((((max(var_12, var_6))) >> ((((max(var_5, var_10))) - 19766)))) : ((var_9 ? var_12 : (min(var_9, var_6))))));
    var_14 *= ((!(((var_4 ? ((var_11 ? var_8 : var_5)) : (!var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (max(var_1, var_6));
                arr_6 [i_0] [i_0] = (((min((max(var_7, (arr_0 [i_1]))), (arr_2 [i_0]))) % (((((arr_4 [i_1 - 2] [i_0] [i_0]) ? (arr_0 [i_1]) : (arr_0 [i_0]))) - var_5))));
            }
        }
    }
    #pragma endscop
}
