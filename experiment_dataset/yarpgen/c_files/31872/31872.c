/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (var_6 > var_2);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 += (min((arr_1 [i_0]), var_4));
        arr_4 [6] [1] = ((-(((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : 0))));
        var_14 -= -24273;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = (max(var_15, ((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))))))));
        arr_8 [i_1] [i_1] &= (max(var_7, (min(-1, var_9))));
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [5] [i_2] = ((max(-11638, 1)));
        var_16 = ((((((arr_10 [i_2]) * (arr_10 [i_2])))) | ((-1 ? ((var_7 ? var_2 : (arr_2 [i_2]))) : (((((arr_0 [i_2] [10]) <= var_3))))))));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_17 = 6899691599325743532;
        var_18 &= var_7;
        var_19 += (arr_14 [i_3] [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_20 = (((-127 - 1) ? -533217602 : var_2));
        var_21 = (((arr_13 [i_4] [i_4]) * ((127 ? -10973 : (-127 - 1)))));
    }
    var_22 += 2305843009213693948;
    #pragma endscop
}
