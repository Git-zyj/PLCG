/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 &= (min(var_4, (--127)));
    var_13 -= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = ((((((~63) ? 23450 : 522240))) ? (max(0, (18446744073709029375 - 11484872700961967830))) : (arr_3 [2] [i_1])));
                    var_14 *= var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((((-73 ? -var_2 : (18446744073709551615 + 73))) - (min(30786325577728, 6988995088190667155)))))));
                                var_16 ^= (max((max((var_9 - var_5), 4294967295)), (((-((max(1, var_10))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [i_2] [i_6] = (arr_8 [i_1 + 1] [8] [i_1 + 1] [i_5 - 1] [i_1 + 1] [i_5 - 1]);
                                var_17 = (((arr_13 [i_1 + 2] [i_1 + 2] [i_5 - 1] [i_5]) && var_5));
                                var_18 |= ((((-(min((arr_2 [i_5] [i_2] [i_1]), var_1)))) * ((max(-1939296411465416916, 0)))));
                                var_19 *= (((~2432011939) ? 1 : (((((21732 + (arr_1 [i_2])))) ? var_10 : var_2))));
                                arr_21 [5] [5] [7] [5] [i_6] = ((((((arr_14 [i_6]) % 65535))) ? ((max((arr_5 [i_6] [i_6]), -23))) : (((var_4 > (arr_10 [i_2] [i_1 - 1] [i_1 + 2] [i_5 - 2] [i_6] [i_5 - 2] [i_1 - 1]))))));
                            }
                        }
                    }
                    var_20 *= (((((min(1, 132)))) & (((arr_15 [i_1 + 1]) ? 3404444560 : (arr_15 [i_0])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((((((arr_24 [i_7] [i_9] [i_9]) / (arr_25 [i_10] [8] [8])))) ? 221 : ((64349 >> (((((arr_27 [i_7] [i_7] [i_9] [i_10 + 4]) ? (arr_26 [i_7] [i_9] [12]) : 4194272)) - 199))))))));
                            var_22 = (((max(24494, 4095)) - ((((arr_28 [i_7 - 1] [i_9] [i_9] [12]) % ((var_9 ? 54 : 14)))))));
                        }
                    }
                }
                arr_32 [i_8] [i_7] [17] &= (arr_23 [i_8]);
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_40 [i_7] [0] [0] [i_12] = ((-30 ? 202 : ((1939296411465416916 ? ((65535 ? 777636103 : 4255507143312443436)) : 35942))));
                            arr_41 [i_12 + 1] [14] [14] [i_7 - 1] &= ((-((min(24494, 1)))));
                            var_23 &= (((((~(max(var_5, 4261412864))))) && (((((-5433567953566170984 ? 0 : 4255507143312443436)) * -1)))));
                            var_24 |= ((min((arr_24 [i_8] [i_8] [i_8]), ((max(var_0, var_6))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
