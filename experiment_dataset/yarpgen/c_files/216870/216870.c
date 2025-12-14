/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((min(117, var_5)), (~-var_13)));
    var_16 = (max(118, var_11));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        arr_4 [i_0] = (((arr_1 [i_0 + 2] [i_0]) || var_7));
    }
    #pragma endscop
}
