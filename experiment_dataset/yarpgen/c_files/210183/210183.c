/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 65535;
                var_11 = (min(var_11, ((min((max(0, (arr_3 [i_0 + 2]))), (~0))))));
            }
        }
    }
    var_12 = min(-30375, -2147483646);
    #pragma endscop
}
