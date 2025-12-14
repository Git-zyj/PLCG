/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0 - 2] = (((~(((arr_0 [i_0]) ? (arr_3 [i_0 + 4]) : -1462324220)))));
        var_18 ^= 3931569807836285852;
    }
    var_19 += ((var_3 ? (((3931569807836285852 + var_5) | (var_0 && 1))) : ((((min(var_0, 3931569807836285852)) + (var_17 ^ -686454863799877899))))));
    #pragma endscop
}
