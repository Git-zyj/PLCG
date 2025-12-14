/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(var_12, -9223372036854775795));
                var_13 = (((((1 | var_7) >= 255)) ? 41498 : var_7));
            }
        }
    }
    var_14 = (-2147483647 - 1);
    #pragma endscop
}
