/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((~var_18), ((994157895 ? -994157895 : 1106933225364780102))));
    var_20 = ((!((max(var_3, (~-994157895))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (max(var_21, (((arr_0 [i_0] [14]) & (((var_4 ? 1106933225364780096 : 17339810848344771519)))))));
        var_22 = ((!(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_23 = -1211398776;
        var_24 = (~(min(6218594619358615782, 17684495779836566109)));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_25 = ((var_2 ? 251658240 : 60));
            var_26 = (min((((~(-994157887 != 994157895)))), (arr_6 [8] [i_2])));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_27 = (max((min((arr_11 [i_2]), 17339810848344771527)), (((arr_11 [i_1]) ? 11254055976053645495 : 17339810848344771521))));
                arr_12 [i_1] [i_1] [i_3] [i_3] = 13194139533312;
                var_28 -= ((!(arr_11 [i_2])));
            }
            var_29 = (~1555461582);
        }
        var_30 = (-(max(((max(var_6, var_17))), (arr_9 [i_1] [i_1] [i_1]))));
    }
    #pragma endscop
}
