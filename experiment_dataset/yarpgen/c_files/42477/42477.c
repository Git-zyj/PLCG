/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = ((arr_1 [i_0] [i_0]) && 0);
        var_17 = (max(var_17, 1712118071));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_18 ^= (min(((-(((arr_5 [i_1]) - var_5)))), (2582849225 / -7827100065066365681)));
        var_19 = (min(var_19, ((max((243 - 2582849240), 233)))));
        var_20 ^= (arr_4 [i_1] [i_1]);
        arr_6 [i_1] = ((41 ? ((((max(-7827100065066365667, 14845579222972217355))) ? -7827100065066365703 : (((((arr_1 [i_1] [i_1]) || 4294967289)))))) : ((((max((arr_3 [i_1]), (arr_2 [i_1] [i_1]))))))));
        arr_7 [i_1] [i_1] = (((2582849240 ? (max(var_3, 5598487528954367875)) : -6031)));
    }
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        var_21 = 224;
        var_22 = ((~(arr_8 [i_2 + 1])));
    }
    var_23 *= -var_12;
    #pragma endscop
}
