/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min(((260046848 ? var_15 : 255)), (56 < 2147483647))), var_12));
    var_17 = var_1;
    var_18 = -2147483647;
    var_19 = var_8;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_20 ^= 16;
        var_21 = (min(var_21, ((((arr_1 [i_0]) - (((arr_2 [i_0 - 1]) ? (max((arr_0 [i_0]), 42)) : 2147483647)))))));
        var_22 = var_15;
        var_23 = ((((max(var_0, var_6))) ? ((7 ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 + 2]))) : (((arr_0 [i_0 + 2]) ^ (arr_0 [i_0 + 3])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = min((min(0, var_2)), -109);
        arr_6 [i_1] = (((((0 ? (arr_4 [i_1]) : (((arr_4 [i_1]) ? (arr_3 [i_1]) : var_2))))) ? (arr_3 [i_1]) : (max(((max((arr_3 [5]), var_4))), (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_4 [i_1])))))));
    }
    #pragma endscop
}
