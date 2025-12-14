/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_8, var_0))) ? 16383 : var_5));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 -= ((~(min((min(var_15, (arr_1 [i_0]))), ((-983005778 ? var_3 : var_16))))));
        var_22 = (((max((((14 ? (arr_2 [i_0]) : (arr_1 [i_0])))), ((~(arr_0 [i_0]))))) * (arr_0 [i_0])));
    }
    #pragma endscop
}
