/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(var_17, ((max((max(((-(arr_0 [i_0] [i_0]))), (((arr_0 [9] [7]) ? 14336 : 1)))), (((((arr_0 [1] [i_0]) ? var_8 : (arr_1 [i_0]))) | ((max((arr_0 [1] [1]), 28894))))))))));
        var_18 *= arr_0 [i_0] [i_0];
        var_19 = (max(3307754735, (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_20 = (max(var_20, (arr_2 [12])));
        var_21 = (min(var_21, var_11));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_6 [i_2] = (((min(((max((arr_4 [20] [i_2]), 14333))), 14334)) >= ((((((var_11 ? 4723718177837108618 : -4723718177837108618))) || (arr_5 [i_2]))))));
        arr_7 [i_2] = (min(((min(var_3, -var_6))), (min(var_13, (((arr_5 [i_2]) ? -106580930641707647 : (arr_4 [i_2] [12])))))));
        arr_8 [i_2] = (!19087);
        var_22 = (((((((arr_4 [i_2] [23]) ? (arr_5 [10]) : 1037575108))) ? (arr_4 [24] [10]) : 4723718177837108618)));
    }
    var_23 = var_3;
    #pragma endscop
}
