/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 4095;
        arr_4 [i_0] [i_0] = -690192398;
    }
    var_20 = ((((var_11 ? 3088895526971122053 : (~var_10)))) ? (max((max(-121, -4037743472464326836)), var_5)) : var_17);
    #pragma endscop
}
