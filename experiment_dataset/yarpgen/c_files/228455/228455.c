/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((var_10 ? (~var_1) : var_18))) ? ((var_15 ? var_9 : var_18)) : ((min(var_8, 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = var_17;
                arr_6 [6] [i_1] = ((1 == ((var_0 ? (((min(var_9, 1)))) : 0))));
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
