/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (max(var_8, var_1));
    var_16 = min(var_0, var_5);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = arr_0 [i_0 + 1];
        var_18 = ((~(((!(arr_0 [i_0 + 1]))))));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_19 = (min(var_19, (arr_3 [i_0 + 1])));
            var_20 *= ((-((((((arr_2 [i_0] [10]) ? (arr_1 [i_0]) : var_6))) ? (((arr_1 [0]) ? var_3 : (arr_0 [i_1 + 1]))) : var_7))));
            var_21 &= ((((!(((var_7 - (arr_1 [i_0]))))))) > (arr_2 [i_0] [i_0]));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_22 += ((((((((arr_0 [i_2]) * (arr_3 [i_0])))) ? (((var_6 || (arr_2 [i_0] [i_0])))) : (((4134674626 && (arr_0 [i_0]))))))) ? ((((arr_6 [i_0] [i_0 + 1]) ? (arr_2 [1] [i_0 + 1]) : var_0))) : (((arr_4 [i_0 + 1] [1]) ? (arr_5 [i_2] [i_2] [i_0 + 1]) : (arr_5 [i_0] [i_2] [i_0 + 1]))));
            var_23 *= (arr_3 [i_0 + 1]);
            var_24 = (~255);
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_25 = (((!(((var_4 - (arr_7 [18])))))) ? (arr_8 [i_3] [i_3]) : (1 - 2954444483));
        var_26 = var_1;
    }
    #pragma endscop
}
