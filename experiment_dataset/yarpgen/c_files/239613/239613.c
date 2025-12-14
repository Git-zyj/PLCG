/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_20 |= -9223372036854775806;
        var_21 |= ((((((~(arr_1 [i_0] [2])))) ? ((((arr_1 [i_0 + 2] [13]) & -118))) : (arr_0 [i_0]))));
        var_22 = ((~(arr_0 [i_0 + 2])));
        arr_2 [i_0 + 1] [i_0 + 1] |= 4512496882145037240;
    }
    var_23 = ((max(var_18, (~var_15))));
    var_24 = (min(var_11, ((+(min((-9223372036854775807 - 1), var_15))))));
    var_25 ^= (min(-1, ((9223372036854775807 ? -4512496882145037261 : 2296534516))));
    #pragma endscop
}
