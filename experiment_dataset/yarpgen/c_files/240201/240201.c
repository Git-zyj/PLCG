/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(0, (max((max(var_7, 109)), (var_2 == var_6)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(((max(0, (-127 - 1)))), (max(9223372036854775807, ((max(136, 1)))))));
        arr_2 [i_0] &= ((((max((arr_0 [i_0]), (arr_1 [i_0])))) << (((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) + 15712)) - 27))));
        arr_3 [12] [12] = (max((max(-1, 29110)), (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_12 = -29117;
        var_13 = (max((max((max(var_7, 65535)), (((var_4 ? (arr_0 [i_1]) : 1))))), (arr_1 [i_1 + 3])));
        var_14 -= (max((arr_5 [14] [2]), (max((arr_6 [2]), 57761))));
        var_15 = 1;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] = -12;
        var_16 = (((((((max(-118, var_2)))) == (-6864819419256516829 + var_6))) ? (((arr_7 [i_2]) ? (max(var_4, 27)) : 29116)) : (((~((max(-29111, (arr_9 [i_2] [i_2])))))))));
    }
    var_17 = (max(var_17, ((max(((((674504170363500087 & var_0) == var_9))), ((((max(1831666262, var_3))) ? (max(-435673475, var_8)) : var_2)))))));

    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_18 = (max(8340, 1639953917));
        var_19 = (min(var_19, ((max((arr_13 [i_3]), 8023820652547895447)))));
        arr_14 [i_3] |= ((!(((((((arr_9 [19] [i_3]) < var_5))) << ((((-101 ? 254 : (arr_8 [i_3 - 1] [i_3]))) - 236)))))));
        arr_15 [i_3] = var_3;
    }
    #pragma endscop
}
