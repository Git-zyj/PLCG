/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 ? ((min((min(var_0, var_10)), (max(var_2, var_11))))) : (((~var_1) ? var_10 : ((var_7 ? var_3 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (min(var_13, var_7));
                var_14 -= 1;
            }
        }
    }
    #pragma endscop
}
