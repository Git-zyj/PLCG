/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(var_19, -var_17)) << (min(var_16, (41 / -15928)))));
    var_21 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = (arr_1 [i_0]);
                var_23 *= ((!(~15937)));
            }
        }
    }
    var_24 = (((((-(~var_17)))) ? ((((var_18 + var_4) * var_9))) : var_15));
    #pragma endscop
}
