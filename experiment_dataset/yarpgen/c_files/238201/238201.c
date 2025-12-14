/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (min(var_18, (((((min(((min(var_16, var_11))), (var_12 ^ 54156)))) <= (max((min((arr_2 [1]), var_13)), var_10)))))));
        var_19 *= ((-4988700380259625219 ^ (min(11256831651350113789, 76))));
        var_20 = (min(var_20, ((max(511, 447676595)))));
        var_21 |= ((17609 >> (127 - 113)));
        var_22 += (max(((min(var_13, (arr_2 [i_0])))), (max((arr_2 [i_0]), var_1))));
    }
    var_23 -= (min(((max(var_15, var_14))), (min((var_10 - var_6), (var_11 - var_5)))));
    var_24 += (min((var_13 % var_7), (((var_7 ^ var_13) << (var_1 / -843296414)))));
    #pragma endscop
}
