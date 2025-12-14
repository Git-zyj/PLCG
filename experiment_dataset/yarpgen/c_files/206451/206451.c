/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 54;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_18 -= (((((~(2911 + 64)))) ? ((((1373896488 ? 120 : 54)) >> (var_16 - 27001))) : ((((((-2895 + 2147483647) << (240 - 240)))) ? var_10 : ((255 ? 99 : var_8))))));
                var_19 |= ((((54 ? 123 : 2895))) || ((max(var_15, 1))));
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
