/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = 60;
                var_11 -= (((var_5 ? var_2 : var_2)));
                var_12 = (min(var_12, ((((((-8330 ? var_5 : var_9))) ? ((var_8 ? var_0 : 60)) : ((221 ? var_5 : var_2)))))));
            }
        }
    }
    var_13 = var_8;
    #pragma endscop
}
