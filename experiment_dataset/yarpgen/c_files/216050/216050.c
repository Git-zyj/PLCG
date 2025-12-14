/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((((((75562060 ? -75562083 : -32))) ? (max((arr_4 [i_0] [i_1]), var_3)) : -1)), ((-var_17 + (arr_0 [i_0 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = ((((75562061 ? 75562083 : 1))) ? (arr_6 [i_0] [i_0] [i_2]) : (min((arr_9 [i_0 + 1] [i_0] [i_0 + 2]), (arr_9 [i_0 + 2] [i_0] [i_0 + 2]))));
                                var_21 = (min(var_21, 75562083));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, ((min((min((arr_6 [i_1] [6] [i_1]), (((arr_8 [i_0] [i_1] [i_0] [i_1]) ? (arr_6 [i_1] [1] [8]) : 1)))), (-127 - 1))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_23 -= ((((min(46871533, 0))) ? -4 : (75562072 % 837132876)));
                            var_24 = (arr_19 [i_0] [i_1] [i_5] [5]);
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_1 ? (max((max(var_2, var_17)), ((var_12 ? var_4 : var_4)))) : var_12));
    var_26 = (min(var_26, (((+(((~25) ? -26 : -93)))))));

    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_27 = (min(var_27, (arr_21 [i_7])));
        arr_23 [i_7] [i_7] = min((min((arr_22 [i_7]), (arr_21 [i_7]))), ((-8 ? (-127 - 1) : -8)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_28 = (!(arr_24 [i_8]));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_29 = (min(var_29, ((((arr_25 [i_9] [i_10]) * 0)))));
                    var_30 = (arr_24 [i_8]);
                }
            }
        }
        var_31 = ((arr_28 [i_8] [i_8]) ? 4 : (arr_27 [i_8] [i_8]));
    }
    for (int i_11 = 1; i_11 < 11;i_11 += 1)
    {
        var_32 = (min(var_32, ((min((max((((arr_34 [i_11]) / (arr_34 [i_11]))), -42)), (~-78768770))))));
        var_33 = ((+(((arr_35 [i_11] [i_11 - 1]) & ((-(arr_34 [i_11])))))));
    }
    var_34 = (((min((max(2049771095, 1)), var_10))) ? (max((max(-75562073, -75562068)), 4)) : (((var_14 + 2147483647) << (var_4 - 94))));
    #pragma endscop
}
