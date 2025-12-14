/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((var_10 / ((var_0 ? (max(-302777830, var_16)) : var_5))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 &= (((arr_1 [i_0]) > ((1394910008 ? 86 : -8856))));
        var_19 = -8856;
        var_20 = var_2;
        arr_4 [4] = (var_1 * -8856);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 -= (max((((!(arr_6 [i_1])))), ((((arr_5 [i_1]) ? (arr_6 [i_1]) : 19)))));
        arr_7 [i_1] &= ((((min(255, (arr_5 [i_1])))) ? ((max((arr_6 [i_1]), -39))) : ((2066416075 ? var_1 : 21390))));
    }
    #pragma endscop
}
