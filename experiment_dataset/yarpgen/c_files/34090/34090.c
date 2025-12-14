/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min(-7536099461186713014, var_9));
                var_17 *= (min(4294967295, var_1));
            }
        }
    }
    #pragma endscop
}
