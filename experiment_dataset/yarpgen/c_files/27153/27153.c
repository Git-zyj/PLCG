/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(-var_7, var_0));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (450518195786356870 && 1);
        var_17 ^= ((~((((var_8 ? (arr_1 [2] [2]) : 450518195786356862)) ^ ((((arr_0 [12]) ? 1145 : (arr_1 [0] [i_0]))))))));
        var_18 = (min(var_18, (max((arr_1 [12] [8]), (((929 <= 9223372036854775807) ? (((arr_1 [0] [0]) + (arr_0 [4]))) : (var_7 != 7293113262489451266)))))));
    }
    var_19 *= var_8;
    #pragma endscop
}
