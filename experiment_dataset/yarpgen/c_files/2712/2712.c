/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((((((!(~var_12))))) * (max((var_3 - var_14), ((0 ? var_10 : var_3))))));
                var_20 = var_4;
            }
        }
    }
    var_21 = var_12;
    var_22 = ((((((1 ? 1 : var_10)))) >> var_11));
    #pragma endscop
}
