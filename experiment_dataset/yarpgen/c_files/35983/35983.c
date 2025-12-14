/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_7 * var_7);
    var_18 |= ((var_10 ? (((max((!var_0), var_13)))) : (min(var_8, (max(947910936, 10284))))));
    var_19 = (((var_4 ? (~var_3) : (!var_10))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((!((((var_1 ? var_5 : var_1))))));
                arr_6 [i_0] [i_0] = (max(-2423241158988315548, (max((~var_1), (16 & var_9)))));
                arr_7 [i_0] = (min(-16, (max(((-15 ? 0 : var_13)), var_13))));
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
