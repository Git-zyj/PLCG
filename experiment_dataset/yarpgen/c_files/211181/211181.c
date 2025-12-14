/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2674184064;
    var_13 = 22;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = -6633503894934316092;
                var_15 = -818512207;
            }
        }
    }
    #pragma endscop
}
