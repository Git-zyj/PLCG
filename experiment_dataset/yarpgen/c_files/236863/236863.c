/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_16 ? ((-32762 ? 32312 : 46880)) : ((5696 ? var_14 : ((min(var_7, var_13)))))));
    var_18 = (((((var_14 + var_14) || var_15)) ? ((var_12 ? (var_12 != var_5) : ((var_3 ? var_14 : var_5)))) : (((var_9 < ((1 ? var_4 : 12010153436204657299)))))));
    var_19 = (~var_2);
    var_20 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = ((((((((17794 & (arr_4 [i_0] [12])))) ? 5781889685964775280 : (15799 ^ 13076450908072876286)))) ? ((var_7 ? 5423123004629828132 : 32311)) : var_4));
                    var_22 = ((min((max(var_11, var_3), (arr_0 [i_0] [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [1] [i_0] [i_0] [i_0] = (((~12809) ? (arr_12 [i_0] [i_0] [i_2] [i_3]) : (((18446744073709551610 ? 1 : 224)))));
                        var_23 = (11188543414784032273 || 255);
                        arr_14 [i_0] [i_1] [i_0] = arr_12 [3] [i_1 - 1] [i_2] [0];
                    }
                    var_24 = (min(var_24, ((((arr_3 [i_2]) ? (((arr_3 [i_2]) ? (arr_0 [i_1 + 1] [i_1 + 1]) : var_3)) : (((!(arr_0 [i_1 + 1] [8])))))))));
                }
            }
        }
    }
    #pragma endscop
}
