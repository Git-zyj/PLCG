/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~((780548381 ? ((64167 ? 4294967295 : 0)) : (min(4294967280, var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        var_16 = 13;
        arr_2 [i_0] [i_0] = ((~(arr_1 [i_0])));
    }
    var_17 = 14352160745255800033;
    var_18 = ((((63 ^ 255) && (((var_8 ? var_2 : var_0))))));
    #pragma endscop
}
