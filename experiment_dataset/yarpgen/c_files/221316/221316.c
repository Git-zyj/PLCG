/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max((min((1468442999590751799 - 2821577837756611210), ((((arr_1 [i_0]) + var_8))))), (((((var_3 ? var_5 : var_1))) ? ((((arr_1 [i_0]) - (arr_0 [i_0])))) : (min(1468442999590751799, 2215294349412280182)))));
        var_11 &= (min(var_1, (max((min(2911767011, 5872111088820319206)), ((2215294349412280182 << (var_9 + 20667)))))));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_6 [0] [0] &= (max((((max((arr_5 [2] [18]), (arr_4 [i_1]))) ^ (arr_4 [i_1 - 1]))), (arr_4 [i_1])));
        var_12 = 9223372036854775807;
        arr_7 [14] |= var_4;
    }
    var_13 = ((-(1 | var_10)));
    var_14 *= (var_9 / ((((max(var_7, var_9))) ? var_7 : -var_2)));
    var_15 = ((((min((~var_10), ((var_3 ? 9223372036854775807 : 2911767011))))) && var_3));
    #pragma endscop
}
