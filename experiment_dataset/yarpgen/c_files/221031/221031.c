/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = var_7;
        var_16 += ((((max((arr_0 [i_0 - 1] [i_0 + 1]), (arr_0 [i_0 - 1] [i_0 + 1])))) && (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_4 [i_1] = ((((((((arr_3 [i_1] [i_1]) ? 188 : var_2))) ? (arr_3 [i_1] [i_1]) : (var_13 - var_12))) / (((~((var_7 << (((arr_3 [i_1] [i_1]) + 103)))))))));
        var_17 ^= ((!(arr_2 [i_1])));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((((arr_6 [i_2 + 1]) ? (arr_6 [i_2 - 3]) : (arr_6 [i_2 - 3]))) + var_6);
        arr_9 [i_2] |= ((-var_5 - ((((min((arr_6 [i_2]), var_14))) ? (arr_7 [i_2] [i_2]) : (-9091263225104503967 >= var_10)))));
        var_18 = (arr_6 [i_2]);
    }
    var_19 ^= var_14;
    var_20 = (((-((8 ? var_7 : var_5)))));
    #pragma endscop
}
