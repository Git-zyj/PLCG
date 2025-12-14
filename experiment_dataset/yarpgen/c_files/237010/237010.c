/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_9));
    var_15 = (((((min(var_7, var_7)) * ((var_0 ? 0 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [3] [i_0] = (max((arr_1 [i_1] [i_0]), 240));
                var_16 -= (237 > 0);
            }
        }
    }
    #pragma endscop
}
