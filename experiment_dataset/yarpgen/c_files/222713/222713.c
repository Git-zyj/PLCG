/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((((-9110759584136486509 ? var_5 : 9110759584136486509))) ? (min(9110759584136486521, var_4)) : var_10));
    var_15 = (min(var_15, ((max((~201686112), 797914132)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min((((-((4294967295 & (arr_3 [i_0] [i_1 + 1])))))), (((((5 ? 1240847184 : 41))) ? -var_7 : (max((arr_1 [i_0]), 1))))));
                arr_4 [i_0] [i_1] [i_1] = (arr_3 [i_0] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
