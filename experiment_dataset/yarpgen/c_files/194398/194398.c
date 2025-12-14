/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(var_16, (((1 - var_6) ? (((~1264254960539696523) >> (((max((arr_0 [10]), 4294967295)) - 11708696771671261256)))) : (1023 / 7)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 = (min(var_17, (min((arr_2 [i_0] [i_1]), (2098662768 * var_11)))));
            var_18 = (max(var_18, (max((((var_4 ? var_4 : 1))), 4294967285))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_19 = (max(var_19, 32767));
                var_20 = ((((max(29497, 255)))));
                var_21 = (+((+(max((arr_6 [i_0]), var_15)))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_22 = (max(var_22, ((max(var_11, ((((min(var_13, 63))) ? ((1 + (arr_1 [i_1]))) : (arr_7 [i_0]))))))));
                arr_10 [i_0] [i_1] [i_0] = var_7;
            }
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                var_23 *= ((32767 ? ((var_7 ? (arr_12 [i_0] [i_0] [i_0]) : var_15)) : ((((max(9036453125547110087, 28)))))));
                var_24 &= ((max((((8924783248336533265 ? (arr_9 [i_0] [4] [i_4] [i_0]) : (arr_3 [12] [12] [i_0])))), (((arr_2 [i_1] [i_1]) * -32749)))));
            }
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_25 = (~49);
            arr_17 [i_0] [8] [i_0] = max(((-((15 ? 4479641318897264891 : 11276422672738030666)))), ((((min(4095, 0))) ? (arr_2 [2] [i_5]) : -4479641318897264891)));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_25 [i_0] = (max((0 & 1), var_9));
                            var_26 = (min(var_26, ((max((((7170321400971520950 | 1) - 1)), ((max(var_11, var_2))))))));
                            var_27 -= (((--32738) ? var_9 : 9036453125547110087));
                        }
                    }
                }
            }
        }
        var_28 = (min(var_28, (((15113269866250346753 ? 11276422672738030658 : 11)))));
        var_29 = (-(max(0, (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    var_30 = (max(var_30, (((min(14592192795138371457, (65521 % var_2)))))));
    var_31 |= ((-5865874091946329175 ? 127 : -8924783248336533261));
    #pragma endscop
}
