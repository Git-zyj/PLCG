/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((170 ? var_5 : (var_5 ^ var_6)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_17 = (((-9326 < -1386544185149704476) ? (arr_1 [i_0] [1]) : var_13));
        arr_3 [i_0] = ((-((var_5 ? var_6 : var_15))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_18 = (min((min(var_4, (arr_5 [i_1 - 1]))), ((~(((arr_5 [i_1]) ? (arr_4 [i_1]) : var_12))))));
        var_19 = (min(var_19, -107));
        var_20 ^= (((arr_4 [i_1 + 1]) | ((((var_3 ? var_13 : (arr_4 [i_1]))) | ((((arr_5 [1]) ? (arr_4 [i_1]) : var_14)))))));
    }
    #pragma endscop
}
