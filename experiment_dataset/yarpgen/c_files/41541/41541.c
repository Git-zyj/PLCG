/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_6 ? var_17 : var_10)))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] |= ((((((min(6439198538475220306, (arr_1 [i_0] [i_0]))) % (~var_1)))) ? ((((~(arr_2 [i_0] [i_0 + 2]))))) : (min(-var_14, var_13))));
        var_19 ^= ((!(arr_2 [i_0] [i_0])));
    }
    #pragma endscop
}
