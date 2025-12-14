/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (var_6 * var_6);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [8] |= ((arr_1 [i_0]) || ((min((arr_1 [i_0]), 159937170))));
        var_20 = (min(var_20, (((((min(2594745231, (0 & 0)))) ? (~var_2) : 20511)))));
    }
    var_21 ^= var_1;
    #pragma endscop
}
