/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 -= (arr_1 [i_0]);
        var_21 &= (1148011168346161143 >= 4595471373789361791);
        var_22 = (min(var_22, ((((arr_1 [i_0]) ? ((1 ? (arr_1 [5]) : (arr_1 [i_0]))) : (arr_1 [i_0]))))));
        var_23 -= (((var_3 ? 21813 : var_19)));
    }
    var_24 = ((((((min(var_15, var_17))) ? -5447615564571450048 : (min(583396085, 14777171618878369013)))) > -7814150353324500817));
    #pragma endscop
}
