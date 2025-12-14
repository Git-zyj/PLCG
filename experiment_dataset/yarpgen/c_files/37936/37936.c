/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 |= (((((((1401995898 >> (var_6 + 18169))) >> (var_6 && var_3)))) | (~var_2)));
    var_15 = var_6;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = ((2736824910 ? (min(((var_11 >> (arr_1 [0]))), (arr_0 [i_0]))) : (arr_0 [i_0 - 1])));
        arr_2 [i_0] = (((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1]))) == (((arr_0 [i_0 - 2]) / (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 = (((((!(arr_0 [i_1])))) <= ((var_6 ? -5295 : (arr_0 [i_1])))));
        var_18 |= var_5;
    }
    var_19 = -75;
    #pragma endscop
}
