/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 719464398;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = 2147483647;
        var_18 = (-719464401 ? -2147483635 : 2147483647);
    }
    #pragma endscop
}
