/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-1 - var_1);

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [0] = (((((arr_2 [i_0 + 3]) / (arr_0 [i_0 + 3]))) * (((arr_2 [i_0 + 3]) ? (arr_0 [i_0 + 3]) : (arr_2 [i_0 + 3])))));
        arr_4 [i_0] [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 ^= ((-((0 ? (arr_6 [i_1] [7]) : -var_2))));
        var_14 += (((67108848 ? (min(-13547, 67108848)) : 2)) + (arr_7 [i_1]));
        var_15 += (((((-15 && (arr_6 [i_1] [i_1]))) && (!4227858448))));
        arr_8 [i_1] = (min((((-(~3)))), (min((arr_5 [i_1]), var_11))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 = (max(var_16, ((!((min((arr_9 [0]), 6)))))));
        var_17 = (((-((8 >> (-3968354906842776633 + 3968354906842776658))))));
        arr_12 [i_2] = min(var_7, ((var_10 ? var_4 : var_8)));
    }
    #pragma endscop
}
