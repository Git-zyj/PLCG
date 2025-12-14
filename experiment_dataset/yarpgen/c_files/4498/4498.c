/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_2 ? var_11 : var_7));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_21 = ((var_1 ? (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (((3727914100 << (((max((arr_0 [i_0]), (arr_0 [i_0]))) - 8303552521826211411)))))));
        arr_2 [i_0] = (min(65535, var_12));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {
                        var_22 = (13 <= 2507);
                        var_23 = 0;
                        arr_10 [i_3] [i_3] [i_2] [i_3 - 1] [i_1] [i_2] = ((((32757 ? var_4 : var_11))) ? (arr_7 [i_0 + 1]) : var_1);
                    }
                }
            }
            var_24 = (var_5 ? (arr_1 [i_0 - 1]) : -1300533581);
            var_25 = ((-1516022280 ? (((-9223372036854775807 - 1) - -32759)) : var_19));
            var_26 = (min(var_26, (((var_16 >> ((927499363 ? (arr_4 [i_0] [i_1] [i_1]) : var_15)))))));
            arr_11 [i_1] = ((32758 ? (arr_8 [i_0] [i_1] [i_1] [i_0 + 1]) : (arr_8 [i_1] [i_1] [i_1] [i_1])));
        }
        arr_12 [i_0] &= ((((min(7654418057918391495, 1))) ? ((((!(arr_1 [i_0]))))) : (arr_5 [i_0 + 2] [i_0 + 1])));
    }

    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_27 = var_7;
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_23 [i_4] = (~var_7);
                        arr_24 [i_4] [i_5 - 1] [i_6] [i_7] = ((2147483638 ? 4294967294 : 7));
                        arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (var_10 || -2147483640);
                        arr_26 [i_4] [i_5] [i_6] [i_6] [i_7] [i_7] = ((((32767 & (arr_15 [i_5 - 1]))) ^ ((((arr_15 [i_5 + 1]) && var_3)))));
                    }
                }
            }
        }
        arr_27 [i_4] = 1;
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        var_28 = max((((~(~-18828)))), (((arr_31 [i_8] [i_8]) & (((var_13 ? (arr_17 [i_8] [i_9] [i_9]) : var_13))))));
                        arr_38 [i_8] = (min(((var_1 ^ (arr_36 [i_8] [i_8] [i_8] [i_8] [i_8]))), ((max((arr_18 [i_9 + 1] [i_9] [i_10] [i_11]), (var_2 != -2147483646))))));
                    }
                }
            }
            arr_39 [i_8] [i_9] = ((~(var_5 != 32767)));
        }
        var_29 = var_15;
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_30 |= 9;
        arr_42 [i_12] [i_12] = (min(var_0, (~-8882775413439760462)));
        var_31 = var_16;
    }
    #pragma endscop
}
