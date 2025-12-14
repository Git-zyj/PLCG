/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((28672 * (arr_0 [i_0 - 2])));
        var_13 = (((arr_2 [i_0 + 2]) >= var_5));
    }
    var_14 = (max(-var_0, (4294967295 + 128)));
    var_15 = var_1;
    #pragma endscop
}
