/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0] = (min(((max((arr_3 [i_0 - 1] [i_0 + 1]), (arr_3 [i_0 + 3] [i_0 - 1])))), (((arr_3 [i_0 + 1] [i_0 + 2]) >> (((arr_3 [i_0 - 1] [i_0 + 2]) - 29877))))));
        arr_5 [i_0 - 1] |= (min((((arr_0 [i_0 - 1]) ? 8288669777722578261 : 65535)), (arr_0 [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 = (max(((((arr_12 [i_3] [i_1 - 1] [i_2] [i_3]) % (arr_12 [i_1] [i_1 - 2] [i_2] [i_1 - 2])))), (((((((arr_8 [i_0] [i_2] [i_2] [i_3]) || 628865129809934373)))) * (arr_6 [i_2 - 1] [i_1 + 1])))));
                        arr_13 [i_2] [i_1] [i_1] [i_1] = (((((((arr_2 [i_0] [i_0]) | var_3)) ^ (min(var_14, 10)))) > var_10));
                    }
                }
            }
        }
        arr_14 [i_0] = (((arr_1 [i_0] [i_0]) * var_11));
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        arr_17 [i_4] &= var_11;
        var_20 = (arr_16 [i_4]);

        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            var_21 = (arr_15 [i_5 + 1]);
            arr_21 [i_4] [i_5] = ((!(arr_20 [i_4 - 1] [i_5 - 2])));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_24 [i_4] [i_6] = ((((min((arr_16 [i_4 - 1]), (!9)))) || (((((!(arr_15 [i_6]))) ? (arr_20 [i_4 - 1] [i_4]) : (arr_16 [i_4]))))));
            arr_25 [i_4] [i_4] = max((max(((15704674182179036969 ? 890325022775777618 : 65535)), (max((arr_18 [i_4] [i_4]), 4219133817116757672)))), (arr_19 [i_6]));
            arr_26 [i_4] [i_6] = (((((arr_23 [i_4 - 1]) + (arr_23 [i_4 + 1]))) + (((arr_18 [i_4 - 1] [i_4]) ? (arr_18 [i_4 - 1] [i_4 + 1]) : (arr_18 [i_4 - 1] [i_4])))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_35 [i_4 - 1] [i_7] [i_9] [i_9] |= (((arr_18 [i_4 - 1] [i_4 - 1]) <= (arr_18 [i_8] [i_7])));
                        var_22 &= (((min((min((arr_29 [i_9] [i_4] [i_4]), 8288669777722578287)), (arr_27 [i_4 - 1]))) - var_5));
                        arr_36 [i_4] [i_7] [i_8] [i_4] = (((((arr_18 [i_4 + 1] [i_4 + 1]) != (arr_18 [i_4 + 1] [i_4 + 1]))) ? (((~18446744073709551602) ? (arr_16 [i_9]) : (arr_16 [i_8]))) : ((((arr_33 [i_4] [i_4] [i_8] [i_9] [i_7]) > (arr_19 [i_7]))))));
                        var_23 = (((((65535 - var_15) << (!var_13))) | (((((arr_16 [i_4]) && var_6))))));
                    }
                }
            }
            var_24 |= (min((((arr_29 [i_4 - 1] [i_4 - 1] [i_4 + 1]) ? (arr_22 [i_4] [i_4 + 1]) : 8288669777722578245)), ((((arr_29 [i_4] [i_4] [i_4 - 1]) <= (arr_22 [i_4] [i_4 + 1]))))));
            arr_37 [i_4] [i_4] [i_7] = (arr_34 [i_4] [i_4] [i_7] [i_7]);
        }
        var_25 = 268435455;
    }
    var_26 = ((((((max(var_1, var_12)) ^ var_5))) ? (var_2 == 8191) : var_17));
    #pragma endscop
}
