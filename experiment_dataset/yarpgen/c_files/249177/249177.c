/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (((((0 ? (-4318 - 235) : ((3 ? 32291 : -32291))))) ? (((((32291 ? 19517 : -32291))))) : -7166731915526441210));
        arr_3 [i_0] = (-7166731915526441197 != -1554971263);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] = -323295634;
        arr_8 [i_1] = 3339784144418827344;
    }
    var_10 |= -7166731915526441210;
    var_11 = var_2;
    #pragma endscop
}
