/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((((min((min(255, 16824304461584668581)), 1622439612124883038))) ? (max(var_12, (((16824304461584668581 ? var_14 : -23688))))) : 0));
    var_16 = ((1 ? 1 : 1399491544043757077));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = 1649217809;
        arr_2 [i_0] = (1399491544043757077 || 1622439612124883056);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_18 = (min(var_18, ((min((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))), (arr_3 [i_1]))))));
        arr_5 [18] &= ((+((((192 || var_10) > var_8)))));
        var_19 = min((min((arr_4 [3] [3]), -79)), (((max((arr_4 [i_1] [1]), 20948)))));
        arr_6 [i_1] [i_1] = 119;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_20 = 130;
        var_21 = ((0 ? (arr_4 [i_2 - 1] [i_2 + 1]) : 1399491544043757079));
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] = (((min(((min(166, -117))), (min(0, var_12)))) >= (((min(var_5, 101))))));
        arr_14 [i_3] [i_3 + 1] = var_1;
    }
    var_22 -= var_5;
    #pragma endscop
}
