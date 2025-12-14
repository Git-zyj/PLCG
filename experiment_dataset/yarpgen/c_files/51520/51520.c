/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(~-2708604506859528690)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = ((((((-(arr_0 [i_0]))) ? (~49) : 17643))));
        arr_4 [i_0] [i_0] = ((-(((~5639438965556520372) ? 0 : -702158114))));
    }
    #pragma endscop
}
