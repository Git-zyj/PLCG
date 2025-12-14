/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (~0);
        var_15 = (((((arr_0 [i_0]) + 2147483647)) >> (11 == 56)));
        var_16 = (max((~var_12), ((min(var_0, 87)))));
        var_17 &= ((!(((+((var_4 ? (arr_1 [i_0]) : 29329)))))));
        var_18 = (((~3) ^ (((49 | 49) | (!1)))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_19 = (min(var_19, ((((!(arr_2 [i_1 - 1])))))));
        arr_5 [i_1] [i_1] = var_4;
        var_20 = ((((arr_4 [i_1 - 1] [i_1 + 1]) / var_12)));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                {
                    var_21 = (((!1) < (arr_10 [i_1] [i_1] [i_3] [i_3 + 1])));
                    var_22 = var_11;
                    var_23 = ((((((((((-127 - 1) + 2147483647)) << (((((arr_11 [i_1] [i_1]) + 112)) - 4))))) - (arr_4 [13] [i_3]))) | -7616130516459544186));
                }
            }
        }
        var_24 = (46 != var_3);
    }
    var_25 = var_12;
    #pragma endscop
}
