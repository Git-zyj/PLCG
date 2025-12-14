/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (-1324486512 && -25902);
        var_17 ^= ((var_12 | (((var_9 - (min((arr_0 [i_0]), -1324486536)))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_18 ^= (((((1324486524 ? 1324486524 : var_14))) ? (((var_12 == 2022) ? (arr_5 [i_1] [20]) : 1)) : 1));
        var_19 ^= var_8;
        var_20 = (max(var_20, (min(((31196 ? 164 : ((var_10 ? 18446744073709551615 : -30769)))), (arr_5 [i_1] [6])))));
        var_21 = 1324486524;
    }
    #pragma endscop
}
