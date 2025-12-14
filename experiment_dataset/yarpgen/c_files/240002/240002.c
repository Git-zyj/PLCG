/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 4141197971173906800;
        var_20 = (max(1101752499, ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        var_21 = var_5;
        var_22 = (((arr_1 [i_0]) ? ((((arr_1 [i_0]) <= (arr_1 [11])))) : -7867));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = (max(7884, var_13));
        arr_7 [i_1] = (min((min(5836270202706262545, 611790211041429608)), (((((((-83 + 2147483647) >> 1))) ? 65535 : var_4)))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_11 [i_2] = (max((((arr_5 [i_2]) ? (arr_5 [i_2]) : (arr_10 [i_2]))), (min(-15662, (arr_5 [i_2])))));
        var_24 |= (((((0 ? 27068542 : -1))) ? 18446744073709551602 : ((((((113 ? (arr_6 [i_2] [i_2]) : var_7))) ? (-9 <= -85) : ((max(11396, 85))))))));
        arr_12 [i_2] = var_18;
        var_25 = 5836270202706262545;
        var_26 = ((15328855363345328240 ? 0 : 5836270202706262545));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_27 = (min(var_27, (((((((arr_6 [i_3] [i_3]) ? (arr_14 [i_3]) : 249444954))) ? ((((arr_4 [6]) < (arr_5 [i_3])))) : (arr_4 [i_3]))))));
        arr_15 [i_3] = 824906476;
        var_28 = (((arr_13 [i_3] [i_3]) ? (arr_13 [i_3] [6]) : (arr_13 [i_3] [i_3])));
    }
    var_29 = var_6;
    #pragma endscop
}
