/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1772208131;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min(var_18, ((min(63758, -21603)))));
        var_19 -= ((((((-(arr_0 [2]))) + 2147483647)) >> (var_7 - 912955324)));
    }
    var_20 = var_2;
    var_21 = var_1;
    #pragma endscop
}
