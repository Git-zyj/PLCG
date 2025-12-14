/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_2 != 119) ? (((min(240, 26992)))) : ((min(251, 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_2;
        var_19 = -1;
        arr_4 [3] [i_0] = (((((16 ? (arr_1 [i_0]) : var_10))) ? (var_1 != 22) : (var_16 | 1)));
    }
    var_20 = ((26 << ((((~(~207))) - 182))));
    #pragma endscop
}
