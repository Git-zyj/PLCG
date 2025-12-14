/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((!(((-120 ? var_5 : var_2)))))) > 120));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_13 = (max(((((max((arr_0 [i_1] [i_1]), 13529151510628406071))) ? ((var_10 ? (arr_0 [i_0] [i_0]) : var_10)) : (max(var_1, 18446744073709551613)))), (arr_2 [i_0])));
            var_14 = (max(((((arr_4 [i_1 + 2] [i_1 - 1]) << (((max(119, (arr_0 [i_0] [i_1]))) - 16956562356658014896))))), (max(var_1, (max(var_2, (arr_1 [i_1])))))));
            var_15 = -1;
        }
        arr_7 [i_0] = 30423;
        arr_8 [i_0] [i_0] = (min(((max(0, (max(var_2, var_2))))), (max(((max(var_2, var_2))), (13529151510628406071 / 2453093408)))));
        arr_9 [i_0] [i_0] = ((-((((max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [11] [i_0] [i_0])))) + (arr_1 [i_0])))));
    }
    var_16 = var_5;
    #pragma endscop
}
