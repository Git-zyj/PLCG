/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3] [i_3] = (((arr_0 [i_2 - 1]) ? ((-(arr_0 [i_2 - 1]))) : (((arr_0 [i_2 - 1]) ? 23146 : (arr_0 [i_2 - 1])))));
                        arr_10 [i_0] [i_0] [i_2] = -var_13;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_14 [1] = ((1195455403 ? (arr_3 [i_4] [i_4] [7]) : (((-4150314284 ? 264241152 : var_11)))));
        arr_15 [i_4] = ((((((arr_3 [i_4] [i_4] [i_4]) ? (arr_3 [i_4] [i_4] [i_4]) : 254))) || (((2580 ? (arr_3 [i_4] [i_4] [i_4]) : var_8)))));

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_14 ^= (arr_6 [i_5] [i_5] [i_5]);
            var_15 = var_8;
            var_16 ^= (max(144653028, ((((arr_6 [i_5] [i_5] [i_5]) % (arr_6 [i_5] [i_5] [i_5]))))));
            var_17 &= var_12;
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_24 [i_4] [i_4] [i_6] [i_4] = ((2757837407 ? 4215768743 : ((1 ? 14499662966595677353 : 1934619872))));
                arr_25 [i_4] [i_6] [7] [7] = ((((min(((-(arr_20 [i_4] [i_6] [i_7]))), (((1 ? (arr_21 [i_7] [6] [i_4] [i_4]) : (arr_17 [i_4] [i_4] [i_6]))))))) ? (((((18446744073709551615 ? 1 : 65535))) + ((-(arr_11 [i_6]))))) : (18446744073709551594 != 41925)));
            }
            var_18 -= (max(((-1556968523 ? (arr_1 [i_4]) : (arr_1 [i_4]))), (((arr_1 [i_4]) ? (arr_1 [i_6]) : (arr_1 [i_4])))));
        }
        var_19 = (max(var_19, ((min((((arr_23 [i_4]) ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : (arr_23 [i_4]))), (((arr_23 [i_4]) ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : (arr_21 [i_4] [i_4] [i_4] [i_4]))))))));
        arr_26 [i_4] = (var_13 * 1);
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_31 [i_8] [i_8] = (min((min((min((arr_8 [i_8] [i_8] [i_8] [i_8]), 251)), var_12)), ((((arr_0 [i_8]) >= (arr_0 [i_8]))))));
        arr_32 [i_8] = ((((((-16836653207537433167 == (~3052667193015612501))))) | (max((arr_8 [i_8] [i_8] [i_8] [i_8]), -111))));
    }
    var_20 = (((((var_1 ? 43 : 12200))) ? 1 : (((!(((1208127765 ? 1 : 41925))))))));
    var_21 = var_8;
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 19;i_10 += 1)
        {
            {
                var_22 = (min(var_22, ((21200 ? (((arr_5 [i_10] [i_9] [i_9 + 1]) ? (arr_5 [i_10] [i_9 - 1] [i_9 - 1]) : (arr_4 [i_9 - 1] [i_10 - 4]))) : (max((arr_5 [i_10] [6] [i_9 - 1]), (arr_4 [i_9 + 1] [i_10 - 1])))))));
                arr_38 [i_10] [i_10] [i_9] = (((arr_37 [8] [i_10 - 2]) | 111));
                var_23 = ((37 ? -3013 : ((((!(~4716742547680644923)))))));
            }
        }
    }
    #pragma endscop
}
