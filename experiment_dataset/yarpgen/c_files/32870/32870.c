/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((((-2147483647 - 1) ? 1 : 1)) > var_1))))));
    var_15 |= (((((var_1 - (min(17887291639301902825, -10128))))) ? var_13 : var_5));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((((~(var_0 | 0))) > (((-(arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 -= ((var_2 ? 9223231299366420480 : (((var_10 ? 32 : 0)))));
        var_18 -= (((var_11 ? var_6 : 2805118121)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    var_19 = (65535 * -13);
                    arr_9 [i_1] [i_2] [i_3] [i_3] = ((var_5 / ((10142 / (arr_0 [i_1])))));

                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_3] [i_4] = var_0;
                        var_20 = 6045;
                        arr_13 [i_3 + 2] [i_2] [i_3 + 2] [i_4] [i_4] [i_1] = 18446744073709551615;
                        var_21 = (!0);
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        arr_16 [i_1] [i_2 - 1] [i_1] [i_1] = (((arr_1 [i_1]) ? 1 : ((var_8 ? 1 : var_1))));
                        var_22 = (((1 ? -32759 : var_5)));
                        var_23 = (2211100393 * -656970756);
                        arr_17 [i_1] [i_1] [i_1] = -var_9;
                    }
                    var_24 |= ((-var_5 ? (~1) : (237 - -10117)));
                    var_25 = (((arr_3 [i_1]) ? (arr_3 [i_1]) : var_2));
                }
            }
        }

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_26 = ((arr_15 [i_1] [i_1] [i_1] [i_6] [i_6] [i_6]) ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_6]) : (arr_11 [i_1] [i_6] [i_6] [i_6] [i_6] [i_6]));
            var_27 = (max(var_27, (((-((var_3 ? 239 : 23)))))));
            var_28 ^= ((-(arr_5 [i_1] [i_6])));
            var_29 = (((65535 ? var_13 : 10116)));
        }
    }
    for (int i_7 = 3; i_7 < 12;i_7 += 1) /* same iter space */
    {
        arr_23 [i_7] [i_7 - 2] = (max((((1 ? -1618579998 : 1))), (((4264591246 / var_3) / (max(9223372036854743040, 127))))));
        var_30 = ((((((arr_3 [i_7]) ? var_7 : (arr_0 [i_7 - 3])))) ? 2472624005 : var_12));
        var_31 -= ((-(((-var_9 <= (-32759 / -2158063558474808523))))));
        var_32 = 1;
    }
    for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
    {
        arr_26 [6] [6] |= ((var_8 ? (((arr_19 [i_8] [i_8 + 1]) ? var_13 : (arr_20 [i_8 - 3] [i_8 + 1]))) : (var_2 & var_2)));
        arr_27 [i_8] = (min((((min(var_8, 1)))), ((-4278 ? var_6 : (arr_18 [i_8 + 3])))));
        var_33 = ((~(min((arr_19 [i_8 - 2] [i_8]), ((var_12 / (arr_5 [i_8] [i_8 + 1])))))));
    }
    var_34 -= var_5;
    #pragma endscop
}
