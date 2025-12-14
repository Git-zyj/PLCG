/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_0 >> (16191618614374163390 - 16191618614374163332))))));
    var_14 = var_5;
    var_15 = ((var_6 & ((-((var_5 ? 2255125459335388224 : var_6))))));
    var_16 = (((~59114) | ((var_9 ? var_2 : 59114))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = 16191618614374163392;
                var_18 = var_4;
            }
        }
    }
    #pragma endscop
}
