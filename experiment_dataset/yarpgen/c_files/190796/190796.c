/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((~((-(71 > var_15)))));
    var_19 = (max(((var_12 ? var_1 : (var_12 - var_1))), (~var_12)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0]) ? (~var_12) : (max((((~(arr_1 [9] [i_0])))), ((var_15 ? -21 : var_4))))));
        var_21 += var_3;
    }
    #pragma endscop
}
