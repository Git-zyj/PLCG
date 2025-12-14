/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 ^= ((-(((arr_1 [i_0]) ? 13710102376693340786 : 1))));
        arr_2 [i_0] = ((-(arr_1 [i_0 + 3])));
    }
    var_19 = ((((max((var_5 % 2446210144606188271), var_0))) ? (var_17 | var_10) : -6183));
    #pragma endscop
}
