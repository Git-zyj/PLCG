/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 ^= (255 == -126);
                var_18 = (-2147483647 - 1);
            }
        }
    }
    var_19 ^= ((((-65 * (18 < 251)))) ? 0 : (((((!127) || 1130681544)))));
    var_20 += ((~(--126)));
    #pragma endscop
}
