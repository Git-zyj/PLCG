/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 ? var_14 : var_6));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = max(((min((arr_0 [i_0 + 2]), (arr_0 [i_0])))), -var_9);
        var_17 += (((2980212056172721207 - (arr_0 [i_0]))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = 0;
        var_18 = (min(var_18, (((((max(-5959744747900349721, var_14)) >> (-var_5 - 4870463061914475562)))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_9 [4] = -868382732;
        arr_10 [i_1] [i_1] |= (max(-1, (min(var_7, 34990))));
    }
    var_19 &= (max(var_1, ((-(min(var_8, var_8))))));
    var_20 = var_5;
    #pragma endscop
}
