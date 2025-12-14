/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((192 % ((55 ? 255 : 192))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (~1);
                    var_14 = (max(((1585735691 ? 2709231605 : 1585735691)), 33));
                    var_15 = (max(((min(var_2, 2026565226))), 1585735683));
                }
            }
        }
    }
    var_16 = (min(var_10, var_1));
    #pragma endscop
}
