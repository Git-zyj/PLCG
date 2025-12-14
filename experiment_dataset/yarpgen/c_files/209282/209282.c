/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((((192 ? 4228124124883315864 : var_13)) >> (((~var_0) + 65)))), var_14));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = arr_4 [i_0] [i_0] [i_2 - 1];
                    var_19 = 62;
                }
            }
        }
    }
    #pragma endscop
}
