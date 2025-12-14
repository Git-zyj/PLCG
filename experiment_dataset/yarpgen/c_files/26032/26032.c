/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_14 -= (arr_1 [i_0 + 1] [i_0 - 1]);
        var_15 *= (((var_5 ^ (((max(0, (arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = var_5;
        var_17 = (max(var_17, (((((((((max(var_3, -507)))) >= (min(var_7, (arr_6 [i_1] [14])))))) < (min(((0 >> (var_1 - 3362968973))), (arr_6 [2] [2]))))))));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_18 -= (arr_8 [i_2] [i_2]);
        var_19 = (min(var_19, (((((((~var_6) ? (arr_1 [i_2 + 2] [i_2 + 1]) : var_8))) ? ((~(((arr_3 [i_2 + 3] [i_2]) | var_3)))) : (((arr_6 [i_2 - 1] [16]) >> (arr_8 [i_2] [i_2]))))))));
        var_20 = (min(var_20, ((((max(var_13, ((max((arr_1 [i_2] [i_2]), (arr_2 [8]))))))) ? (min((var_11 - var_9), ((var_11 ? (-32767 - 1) : (arr_6 [i_2] [4]))))) : ((65530 / ((1 * (arr_2 [1])))))))));
        var_21 = (max(var_21, ((min((arr_5 [16]), (arr_5 [12]))))));
        var_22 += (!3);
    }
    var_23 = (max(var_23, (((((-16289 ? var_10 : var_13))) ? var_11 : var_7))));

    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        var_24 = ((!((min(255, 2147483647)))));
        var_25 *= var_3;
        arr_11 [i_3] = (~(arr_9 [i_3] [i_3 - 2]));
    }
    #pragma endscop
}
