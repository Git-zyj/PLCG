/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (max(((min(var_8, var_4))), var_6));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((+(((((((arr_1 [i_0]) & (arr_0 [i_0] [i_0])))) && (arr_1 [i_0]))))));
        var_17 &= arr_0 [i_0] [i_0];
        var_18 = ((((((!77) >= ((var_3 << (var_7 - 60)))))) >> (max(((-28556 ? (arr_0 [16] [16]) : (arr_0 [i_0] [14]))), (arr_1 [i_0])))));
        var_19 = (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_20 = ((-((((((arr_1 [i_1]) ^ 28568))) ^ (((arr_0 [i_1] [0]) | var_13))))));
        var_21 -= (max(28568, ((((arr_2 [15]) | ((max((arr_1 [12]), var_7))))))));
    }
    #pragma endscop
}
