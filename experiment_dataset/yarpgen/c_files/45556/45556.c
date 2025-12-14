/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((0 ? (min(var_1, var_7)) : var_7));
    var_12 &= (max((max(1, ((108 ? 6357736982453164209 : 108)))), (!var_4)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 &= (117 > 56272);
        var_14 = (max(var_14, (((((max(var_9, (min((arr_0 [i_0] [i_0]), var_1))))) ? 7868195536289107799 : ((((148 > ((1 ? 56272 : var_9)))))))))));
        var_15 = (max(var_15, (((((~(min((arr_0 [i_0] [i_0]), 194)))) >= (var_4 > 3023323851))))));
        var_16 += (max((max((arr_1 [8]), var_1)), ((((arr_0 [i_0] [i_0]) ? var_1 : var_8)))));
    }
    var_17 = ((var_2 << (((~var_8) + 1266326012))));

    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1 - 4] = (min((min((!140), (((arr_2 [i_1 + 1]) | 18400781968157420310)))), ((((((1 ? -4625 : 73))) ? ((-(arr_3 [i_1]))) : (arr_3 [i_1 - 4]))))));
        var_18 *= ((-(((~3715196338568200562) ? (arr_2 [i_1 - 3]) : (arr_3 [i_1 - 4])))));
        var_19 = (max(var_19, 3715196338568200562));
        var_20 = (min(-var_5, (arr_2 [1])));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_21 *= ((-(((var_3 >= ((var_1 ? 1 : var_7)))))));
        arr_8 [11] |= (min(((-1441194581 ? var_10 : 1424288449988333682)), ((((arr_6 [i_2]) ? (arr_6 [i_2]) : var_6)))));
        var_22 ^= ((((max(var_10, 0))) ? (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_5 [i_2] [i_2]))) : (max(-104494103, (arr_5 [i_2] [i_2])))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_13 [4] [i_3] &= ((!(((104494103 | ((2574318225 ? 3798053289 : 1)))))));
        var_23 += (min((arr_3 [i_3]), 9264));
    }
    #pragma endscop
}
