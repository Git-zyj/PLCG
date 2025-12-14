/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -60888;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 58;
        arr_3 [i_0] = ((((65533 ? 60904 : -1799463475))) ? (2 > 1) : (((!(arr_0 [i_0])))));
        var_21 = (max(var_21, 60888));
    }
    var_22 = (max(var_22, ((max(114, 0)))));
    var_23 = ((((max((323791508 ^ var_4), (var_19 / var_2)))) ? (((((27158 ? -14198 : var_14))) ? ((var_0 ? var_12 : var_16)) : (((max(1, 1)))))) : ((min(323791517, 1)))));
    var_24 = -6139505062109194348;
    #pragma endscop
}
