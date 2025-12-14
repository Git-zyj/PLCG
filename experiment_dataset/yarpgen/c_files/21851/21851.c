/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = 190;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (max(((min(((min(66, 24))), ((-(arr_0 [i_0])))))), (((max(4064, var_2)) / (((58 ? 197 : 2378948002180462650)))))));
        var_17 ^= (max((min(4274722428055229393, 65)), (((var_1 ? 201 : ((~(arr_1 [i_0]))))))));
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 ^= (arr_3 [i_1] [i_1]);
        var_19 ^= -107;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_20 = (max((((-(arr_7 [i_2] [i_2])))), var_3));
        var_21 = ((-((((max((arr_7 [i_2] [i_2]), var_11)) == var_13)))));
        var_22 = ((((max((((!(arr_7 [i_2] [i_2])))), 190))) ? 192 : (min((min(var_9, var_4)), (-2065101880 & var_9)))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_23 ^= (!0);
        arr_12 [i_3] |= var_5;
        var_24 = ((var_2 * (var_10 & var_13)));
    }
    #pragma endscop
}
