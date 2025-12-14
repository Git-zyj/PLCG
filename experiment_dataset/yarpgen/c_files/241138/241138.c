/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (((max(1073741823, ((240 ? 1495367835261876328 : -1)))) >= var_7));
        var_14 = (max(var_14, ((min(27, (((max(var_9, -2)) & (arr_1 [i_0]))))))));
        var_15 = (min(var_15, (arr_1 [i_0])));
    }
    var_16 = max((var_11 - var_0), var_10);
    var_17 = ((((min((min(27, var_10)), ((min(var_7, var_9)))))) ? ((var_9 ? ((min(7, var_7))) : (((-6 + 9223372036854775807) << (var_6 - 49161))))) : var_2));

    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        var_18 = (min((min(240, (min(var_5, (arr_1 [i_1]))))), -51));
        var_19 = (((arr_2 [11]) ^ (arr_2 [i_1 + 1])));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_20 = var_12;
        var_21 = ((((5 ? 281474708275200 : 0)) - (0 * var_8)));
        var_22 = ((var_12 ? (((-(arr_4 [i_2])))) : (((max(-14, (arr_4 [i_2]))) * (var_1 & var_5)))));
        arr_6 [i_2] = ((+(min((arr_5 [i_2] [i_2]), 31))));
    }
    #pragma endscop
}
