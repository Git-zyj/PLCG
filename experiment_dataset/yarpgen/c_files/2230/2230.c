/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 ^= (max((min((-2 != -11), 174)), (arr_0 [i_0 - 1])));
        arr_2 [18] |= (((((48613 ? (arr_0 [i_0 + 2]) : var_0))) ? (-9223372036854775807 - 1) : 11));
    }
    var_21 = 13;
    var_22 *= (min(var_3, -11));
    var_23 = var_6;
    var_24 = var_5;
    #pragma endscop
}
