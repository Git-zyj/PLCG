/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 ? var_1 : var_7));
    var_13 = ((var_9 ? ((var_6 ? var_7 : var_1)) : (var_9 || -var_4)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 += ((((max(((-(arr_0 [i_0 - 2]))), -var_9))) ? (((arr_0 [i_0]) ? (arr_0 [i_0 - 1]) : (((max((arr_1 [i_1]), (arr_1 [i_0 - 2]))))))) : (max((arr_0 [i_0 - 4]), (max(var_5, var_1))))));
                var_15 = (arr_2 [i_1] [i_1] [i_1]);
            }
        }
    }
    var_16 = (!-26810);
    #pragma endscop
}
