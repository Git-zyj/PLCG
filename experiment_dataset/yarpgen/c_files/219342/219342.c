/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_13));
    var_19 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_6 < (var_1 & var_2)))) != (max(-552797177, ((~(arr_1 [i_0])))))));
        var_20 = (max(var_20, ((((((var_8 | -23299) && -552797177)) ? (((-(var_8 / var_5)))) : ((-(((arr_2 [i_0]) + var_4)))))))));
    }
    var_21 = (((1 ^ (~var_11))) | (var_8 & 65509));
    #pragma endscop
}
