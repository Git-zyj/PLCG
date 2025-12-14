/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= 25041;
    var_18 = (((!133189233887010972) ? -1187878033 : var_14));
    var_19 ^= ((var_9 ? ((((!(var_9 >> 26))))) : ((var_5 ^ (min(-2654122540366108471, var_10))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 -= ((max((arr_0 [i_0]), var_4)));
        var_21 *= 3551806055;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_22 ^= ((((min(34601, (arr_4 [i_1 - 1] [i_1 - 1])))) || ((max((arr_4 [i_1 + 1] [i_1 - 1]), 1)))));
                        var_23 = (arr_3 [i_0]);
                        arr_10 [i_0] = (((!((max(var_13, 17968793492826217481))))));
                        var_24 = (max(var_24, (((32666 ? ((((!(arr_1 [i_1 + 1]))))) : (min((arr_0 [i_1 - 1]), (arr_1 [i_1 + 1]))))))));
                        var_25 = (min(var_25, 32767));
                    }
                }
            }
        }
        var_26 = (((arr_7 [i_0] [i_0] [i_0]) - 56592));
        var_27 = (arr_5 [i_0]);
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_28 = (min(var_28, ((((((((arr_11 [i_4] [i_4]) ? var_4 : 12396189177959882650)))) + 32666)))));
        var_29 &= ((((var_15 >= (-31395 <= 32864))) ? (arr_11 [i_4 + 2] [i_4]) : (((-32767 - 1) ? (arr_12 [i_4]) : var_3))));
        arr_13 [4] |= var_8;
    }
    var_30 |= var_12;
    #pragma endscop
}
