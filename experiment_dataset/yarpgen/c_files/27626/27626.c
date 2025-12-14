/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= max(130, 1);
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = ((10049 || ((((arr_2 [i_0]) ? var_0 : (arr_2 [i_0]))))));
        arr_3 [0] [16] &= ((((min(var_14, -5521))) | ((max(104, var_4)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 += (((arr_1 [i_1] [i_1]) * ((min(65524, 15)))));
        var_21 = 1026338264925857671;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [1] = ((~((-1 ? -9251 : 15570476795735304125))));
        var_22 *= ((!((max(14625801488995986358, 1)))));
        arr_10 [i_2] [i_2] = (max(((var_10 ? (max(var_0, var_2)) : 51)), ((max(15, 9223372036854775807)))));
    }
    #pragma endscop
}
