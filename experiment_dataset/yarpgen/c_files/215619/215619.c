/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((((var_3 ? (min(var_16, 13296361718271252477)) : (var_1 - var_2)))) && 1));
    var_20 ^= ((var_2 ? ((var_9 ? 1 : var_8)) : (((var_2 ? 15 : ((var_12 ? var_12 : -25158)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 ^= (((((((arr_1 [6] [3]) ? var_14 : (arr_2 [i_0] [i_0])))) ? var_5 : (arr_2 [i_0] [i_0]))));
        var_22 = (min(var_22, ((((((8387584 > 25159) ? var_9 : (((arr_0 [i_0] [i_0]) ? 1 : var_6)))) / var_6)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_23 ^= arr_3 [4] [4];
        var_24 -= (arr_4 [i_1] [i_1]);
        var_25 *= ((((((arr_3 [8] [8]) - var_18)) >> ((((0 ? (arr_3 [0] [0]) : (arr_4 [i_1] [1]))) - 11830176371012139750)))));
    }
    var_26 *= (((!var_9) > ((((25157 ? var_1 : var_7)) + ((var_18 ? var_13 : var_4))))));
    #pragma endscop
}
