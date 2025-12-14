/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (((max((~1), ((28 ? -32 : 60)))) < (!38)));
                var_15 = (((-32767 - 1) < ((-32 ? 38627 : 15564435125495967041))));
                var_16 = ((((max(32767, 2961237000))) ? 81 : (65519 % 3593779594)));
                var_17 = (~1754401568);
            }
        }
    }
    var_18 = (~1);
    #pragma endscop
}
