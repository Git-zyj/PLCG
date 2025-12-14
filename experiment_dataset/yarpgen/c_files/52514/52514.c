/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((max(((var_10 ? 18446744073709551612 : var_13), var_2))));
    var_15 = ((var_5 >> (var_6 - 9270417071800627122)));
    var_16 &= ((!((((~var_9) / (max(var_5, var_13)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0]) || ((((arr_0 [i_0] [i_0]) ? var_12 : (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] &= max((min(((16474 ? (arr_1 [i_0]) : (arr_1 [i_0]))), (!49061))), (((((min((arr_1 [i_0]), 16498))) || ((((arr_1 [6]) ? var_11 : 74)))))));
    }
    #pragma endscop
}
