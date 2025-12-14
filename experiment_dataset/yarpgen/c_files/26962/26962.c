/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(((8311 ? 33450 : 0)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = ((+((max((max((arr_0 [i_0]), var_10)), var_7)))));
        var_19 = ((((var_7 >> (((min(var_9, (arr_1 [i_0] [i_0]))) - 68)))) <= (min(var_13, ((var_13 ? var_10 : 32085))))));
        var_20 = ((~((var_3 ? 52663 : (var_13 == var_13)))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_21 -= ((((min((arr_3 [i_1 + 3]), var_0))) ? ((((((-7087035083314355585 || (arr_3 [i_1]))))) + ((var_2 ? var_4 : var_4)))) : (((14488 ? (((arr_4 [i_1]) >> (var_8 - 1926301117))) : (((arr_1 [i_1] [i_1]) ? (arr_0 [i_1]) : var_7)))))));
        arr_6 [i_1] = min((((((min(var_7, (arr_0 [i_1])))) << ((((2664991053952989604 ? 1290715805 : 8311)) - 1290715799))))), ((2571836970 ^ (arr_1 [i_1 + 3] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (~var_2);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_3] [i_2] = (arr_3 [i_2]);
                    var_22 *= (((((var_7 ? var_0 : 32085))) ? (((arr_7 [i_2]) >> (((arr_11 [i_4] [i_2] [i_2]) - 53)))) : (arr_4 [i_2])));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_20 [i_5] = ((min(130, ((var_12 ? var_13 : var_15)))));
        var_23 -= ((~((((-27367 ? -13 : 48))))));
        arr_21 [i_5] = (min((arr_18 [i_5]), ((((((arr_10 [i_5] [i_5] [i_5]) * var_8))) ? ((min(-14474, 13))) : 1))));
        var_24 = (min(0, 1));
        arr_22 [i_5] [i_5] = (min(((((((var_4 || (arr_19 [i_5])))) > (arr_0 [i_5])))), (((arr_4 [i_5]) - (max(143, var_11))))));
    }
    var_25 = (min(var_15, var_14));
    var_26 = var_4;
    var_27 = var_15;
    #pragma endscop
}
