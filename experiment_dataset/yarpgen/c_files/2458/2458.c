/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = ((3894 & ((((arr_2 [i_0]) >= (arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] |= (max(1134907106097364992, (-9223372036854775807 - 1)));
    }
    var_14 = -1;
    #pragma endscop
}
