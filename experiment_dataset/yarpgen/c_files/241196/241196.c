/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((-((-(arr_1 [i_0])))));
                    arr_8 [i_0] [i_1] [i_0] = var_2;
                    var_16 = (((arr_6 [i_2] [0] [i_2 - 2] [i_2 + 2]) ? (arr_6 [i_0] [i_1] [i_2 + 2] [i_1]) : var_6));
                    var_17 = (max(var_17, (((((((arr_4 [i_0] [i_0]) >> (4541353601634515655 - 4541353601634515654)))) ? (((-16 ? 558999161 : 3735968116))) : ((var_10 ? (arr_6 [i_2] [i_1] [i_0] [i_0]) : 558999191)))))));
                }
            }
        }
        var_18 = (min(var_18, ((((((var_5 / (arr_5 [i_0] [4] [i_0])))) ? ((((var_12 <= (arr_4 [i_0] [i_0]))))) : -558999161)))));
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_19 = 5196733164299376957;
        var_20 = (max(var_20, ((min(22, 31)))));
        var_21 = (max(var_21, var_10));
        arr_12 [i_3] [i_3] = arr_11 [i_3 + 1];
    }
    var_22 = (max(var_22, (((((min((var_6 != var_10), var_3))) ? -2147483645 : var_4)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_23 [i_7] [i_5] = (-(((arr_13 [i_7]) ? (arr_13 [i_6]) : var_14)));
                            var_23 += ((((min(var_9, (arr_20 [i_6] [i_6 - 1] [i_6] [i_6 + 2])))) ? ((234 / (arr_16 [i_6 + 2] [i_6] [i_6]))) : var_11));
                            arr_24 [i_4] [i_4] = (max(((558999178 * (var_6 | 1177750371))), ((((arr_15 [i_4] [i_5]) != (max((arr_17 [i_4] [i_5]), -2259202055482936115)))))));
                            arr_25 [i_4] [i_5] [i_6] [i_7] = var_2;
                        }
                    }
                }
                var_24 = (max(var_24, ((max(-var_6, 22)))));
                var_25 = arr_18 [i_4] [i_4] [i_4];
            }
        }
    }
    #pragma endscop
}
