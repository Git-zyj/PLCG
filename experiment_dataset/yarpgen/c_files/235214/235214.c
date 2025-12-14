/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = ((max((arr_2 [i_1] [i_1]), ((var_2 ? var_12 : var_9)))));
                arr_5 [i_1] = var_5;
            }
        }
    }
    var_14 = var_1;
    var_15 = ((((((!-2806258866491221939) ? (((var_10 ? var_7 : -104139779))) : (((-2485535325132728936 + 9223372036854775807) << (var_5 - 7644867793677730932)))))) ? var_12 : var_7));
    #pragma endscop
}
