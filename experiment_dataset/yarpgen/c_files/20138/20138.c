/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((min((((((min(var_1, var_2))) ? var_7 : var_2))), (((var_11 || var_0) ? var_2 : var_11)))))));
    var_13 = (max(var_13, ((min(var_3, (min((~var_2), -var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((47 ? 6806410943677788857 : 15040510082657609127));
                var_15 = var_9;
            }
        }
    }
    #pragma endscop
}
