/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1440219744;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (~-14978);
        var_13 &= ((-(max(((var_0 ? (arr_0 [i_0]) : -1440219744)), var_3))));
        var_14 -= (arr_1 [i_0]);
        var_15 = 15;

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_16 = (((((var_6 / (arr_0 [i_1 + 1])))) ? ((1440219744 ? 1 : -32102)) : (-1440219761 - 2812)));
            var_17 *= ((var_2 && (((~(arr_2 [i_1] [i_1]))))));
            var_18 -= ((((((((arr_4 [i_1 - 2] [i_0]) ? 1 : (arr_4 [i_1] [i_1]))) - (arr_0 [i_0])))) - ((-(arr_5 [i_1] [i_0])))));
            var_19 = (min(var_19, var_11));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_9 [4] [i_2] = ((var_7 >> ((min(((max((arr_1 [i_0]), var_2))), (arr_7 [i_0] [i_2] [i_2]))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_20 -= (((arr_14 [i_0] [i_0] [i_0] [i_0]) ? var_5 : ((((((!(arr_2 [i_2] [i_2])))) >= (402653184 | 1))))));
                            var_21 -= (((65535 && 0) <= ((((arr_8 [i_2] [i_2]) > (max(1, -1055063566)))))));
                            var_22 *= ((+((~(((arr_11 [i_3] [i_4] [i_5]) << (arr_1 [i_0])))))));
                        }
                    }
                }
            }
            var_23 = (((((18446744073709551606 ? (((arr_16 [i_0] [2] [i_0] [i_2] [i_2]) ^ (arr_14 [i_0] [i_0] [i_0] [i_0]))) : var_1))) > (((((arr_6 [i_0]) ? var_1 : (arr_17 [i_0] [i_0] [1] [i_2] [i_2] [i_2]))) * ((((arr_12 [i_0]) / 1)))))));
            var_24 *= ((((min((arr_14 [i_0] [i_0] [i_0] [i_0]), (((arr_5 [i_2] [i_0]) ? (arr_11 [i_0] [i_0] [i_2]) : var_4))))) ? ((((((var_10 + 9223372036854775807) << (((((arr_10 [i_0] [i_0] [i_0] [i_0]) + 56550594)) - 9))))) ? var_6 : (arr_15 [i_0] [i_2] [i_2] [i_2]))) : 1));
        }
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        arr_23 [i_6] |= ((((var_3 & var_2) & (~2811918831626741666))) == (((arr_0 [i_6 - 1]) ? (max(1, 3439579052930026121)) : ((((arr_22 [i_6 + 2]) & var_11))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_31 [i_7] [i_7] [i_8] [i_6] = (((((0 ? 1 : 31))) ? 538412 : (arr_14 [i_6] [8] [i_8] [i_8])));
                    arr_32 [i_6] [i_6] [0] [18] = ((min((((arr_12 [i_6]) & (arr_12 [i_8]))), (arr_13 [i_6] [i_8]))));
                    arr_33 [i_6] [i_7] = (arr_7 [16] [i_7] [i_8]);
                    var_25 = (max(var_25, (((((((arr_4 [i_6] [i_6 + 3]) * (((arr_7 [i_8] [i_7] [i_8]) * -1))))) || ((((-5495 ? 1789193789 : 21082)))))))));
                    var_26 = (((((((((arr_24 [i_6] [i_6] [20]) == (arr_26 [i_8] [i_8])))) >= (arr_24 [i_6] [i_7] [i_8])))) * var_7));
                }
            }
        }
        var_27 *= (((((((min(22, var_1))) ? (arr_12 [i_6]) : (arr_16 [i_6 + 3] [1] [i_6 + 1] [i_6] [i_6])))) ? ((((arr_1 [i_6 + 3]) <= ((63 ? -5936 : var_0))))) : (arr_16 [i_6] [i_6] [i_6] [i_6 + 2] [i_6 - 1])));
        var_28 = (min(5, 45));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_29 = (max(var_29, (((-(arr_10 [i_9] [i_9] [i_9] [20]))))));
        var_30 = ((-var_11 || (arr_13 [i_9] [i_9])));
        var_31 = (max(var_31, (((((var_11 ? var_6 : (arr_15 [9] [i_9] [i_9] [1]))) | var_11)))));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_32 += 65472;
        arr_40 [i_10] [i_10] = ((~((~(arr_22 [i_10])))));
    }
    var_33 += var_3;
    var_34 = (min(var_34, (!var_3)));
    #pragma endscop
}
