/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= -1584433189131862450;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((((3055900492 != 0) / (722516999 && 11456481149374837687))) | -36)))));
                var_16 = ((((arr_1 [i_0]) >= 1125899906842622)));
            }
        }
    }
    var_17 = 21;
    var_18 = (((((var_8 ? -1584433189131862431 : var_2))) ? (((((-36 > 32) || (((-1584433189131862431 ? var_12 : 1650910995114895655))))))) : -1584433189131862447));
    #pragma endscop
}
