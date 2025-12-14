/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_12;
    var_18 = (min(var_18, var_13));
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((((((arr_1 [i_0]) ? (arr_1 [19]) : 0))) ? 255 : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = var_8;

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_20 = (min(var_20, (!var_9)));
            arr_8 [i_1] = arr_1 [i_0];
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_12 [i_2] = (((arr_11 [i_2] [i_2]) >= 16383));
            arr_13 [i_2] [i_2] = (!8407130009005780695);
            arr_14 [16] [i_2] = (16383 > -16392);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_20 [i_0] [i_2] [i_3] [i_2] = (-16384 ^ 21);
                        var_21 ^= (arr_19 [2] [2] [1] [i_3] [2] [i_4]);
                        arr_21 [i_2] [i_2] [i_3] [i_4] = (((arr_4 [i_2]) ? (arr_4 [i_2]) : 16357));
                    }
                }
            }
        }
        for (int i_5 = 4; i_5 < 20;i_5 += 1)
        {
            arr_24 [i_5] = var_6;
            arr_25 [i_5] = ((((((16383 == var_14) ? 101 : (103 != 155)))) ? (((min(101, var_9)))) : ((var_11 ? (arr_6 [i_5 + 2] [i_5]) : var_4))));
            var_22 = (((-(arr_0 [i_5 - 3] [i_5 - 2]))) + (53 <= -122));
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_29 [i_6] [i_6] = (17235339016642406090 & 1798761327055560638);
        arr_30 [14] = (min((arr_23 [i_6]), var_11));
        var_23 = (((var_14 ? var_6 : (arr_27 [i_6] [i_6]))));
        var_24 ^= ((16374 ? ((var_10 ? 1211405057067145523 : 17235339016642406106)) : (((-(arr_1 [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_25 ^= var_2;
        var_26 = (arr_16 [i_7] [i_7] [i_7] [i_7]);
        arr_34 [i_7] = var_11;
    }
    #pragma endscop
}
