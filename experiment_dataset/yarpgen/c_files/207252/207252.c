/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2043019422254572758;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (min(115, (max((min(2147483647, 998228057)), -2147483625))));
        arr_2 [i_0] = ((min(2954795073220771425, (max(4294967295, 1529577187725652759)))));
    }
    #pragma endscop
}
