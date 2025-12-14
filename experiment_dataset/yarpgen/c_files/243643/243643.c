/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 27543));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 = (arr_0 [i_0 - 2]);
        var_16 = (max(var_16, (((+(((arr_2 [i_0 - 2]) ? (arr_1 [i_0 + 2] [i_0]) : var_11)))))));
    }
    #pragma endscop
}
