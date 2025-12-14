/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = 7764458857986064471;
        var_10 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_11 = (~5212208807605364242);
        var_12 += (((arr_0 [i_1 + 1] [i_1 - 3]) < var_2));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_13 -= (((((arr_7 [i_2]) <= (arr_7 [i_2]))) ? (((arr_7 [i_2]) - var_9)) : (((max((arr_7 [i_2]), 71))))));
        arr_8 [i_2] = arr_6 [i_2];
        var_14 -= var_1;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_15 += 32704;
            var_16 |= (arr_9 [16] [i_3]);
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_17 = (var_1 ? (((arr_9 [i_4] [5]) ? ((537589355092168179 ? var_8 : var_8)) : (arr_12 [i_2] [i_4]))) : (((arr_13 [i_2]) ^ var_8)));
            var_18 ^= 1427056184;
            arr_15 [18] [i_4] [i_2] = (((((((var_5 ? (arr_12 [i_4] [i_4]) : var_2)) + 28463))) ? (((((arr_6 [i_2]) ? 52954 : 187451062)))) : var_5));
            var_19 = (min(var_19, (((((((var_5 < (arr_6 [i_4])))) >> (((min(4228604601, (arr_6 [i_4]))) - 20662))))))));
        }
    }
    var_20 = var_3;
    var_21 = (((((-var_5 ? 4079368116 : (var_3 + 65535)))) || (var_6 <= 56881)));
    #pragma endscop
}
