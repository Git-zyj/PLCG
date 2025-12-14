/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = var_5;
                arr_5 [12] [12] &= ((16490 ? (!var_8) : 33));
            }
        }
    }
    var_15 &= ((var_5 ? 222 : var_3));
    #pragma endscop
}
