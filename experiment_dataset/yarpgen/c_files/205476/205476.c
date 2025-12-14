/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = var_11;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 -= (1 ? ((min(-178103731092678384, (((-(arr_1 [i_0]))))))) : (max(0, (arr_2 [i_0]))));
        var_20 |= ((((((-(min((arr_0 [i_0] [i_0]), var_16)))) + 9223372036854775807)) << (((min(-889389051, (min(var_4, var_2)))) - 2694862863))));
        var_21 = (((((max(var_5, var_16))) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
    }
    var_22 = ((-19384 + ((var_11 ? 0 : 60891))));
    #pragma endscop
}
