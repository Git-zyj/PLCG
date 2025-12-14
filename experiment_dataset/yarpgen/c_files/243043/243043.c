/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((((var_9 <= 0) ? ((var_4 ? 65534 : 65534)) : (max(65534, 15))))), (max(var_14, (max(var_13, -392131166013411998))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_18 = 0;
        arr_2 [i_0] [i_0 - 1] = (((arr_1 [i_0]) <= ((1352516966 ? (min((arr_1 [i_0 - 2]), (arr_1 [i_0]))) : (var_12 > var_8)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [0] = ((((min(var_15, 1252224073))) > (max((arr_1 [i_1]), (arr_1 [i_1])))));
        arr_7 [i_1] = ((((((-25843 <= 18446744073709551608) ? ((((arr_5 [11]) < 2942450318))) : 207))) ? ((max((((arr_4 [i_1] [i_1]) ? (arr_5 [i_1]) : 207)), (var_0 >= 78)))) : (((-9223372036854775806 + 2942450318) ? (127 / -1287) : 341368642752657593))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_19 = ((197 ? (max(1252224089, (min((arr_1 [i_2]), 1252224062)))) : ((((!-115) & var_6)))));
        arr_11 [i_2] [i_2] = (arr_5 [i_2]);
        var_20 += (((min(((((arr_5 [i_2]) > 48424))), (min(var_0, var_5)))) >> 32));
        arr_12 [6] &= 18105375430956894022;
    }
    #pragma endscop
}
