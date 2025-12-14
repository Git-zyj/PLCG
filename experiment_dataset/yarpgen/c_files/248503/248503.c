/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 += (max(77, (min(880335545, 22))));
        var_21 -= (((min((arr_2 [i_0 + 2]), var_2)) * (((arr_1 [i_0 + 3]) * (arr_2 [i_0 + 1])))));
        var_22 = (max(((var_9 < (~32761))), (((25 && var_14) < var_10))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_23 = (max(var_23, ((+(((arr_7 [i_0 + 2] [i_0 + 2] [i_2]) ^ 127))))));
                        var_24 *= ((61526 | ((min((arr_8 [i_0 + 2]), (arr_8 [i_0 - 1]))))));
                        var_25 = (max(var_25, (((!(var_6 && var_0))))));
                        var_26 *= (+(min((arr_4 [i_0 + 2]), var_19)));
                    }
                }
            }
        }
        var_27 = (max(var_27, (((~((30765 + (arr_9 [i_0 + 2] [i_0 + 3] [i_0 + 2]))))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_23 [i_4] [i_7 + 1] = ((~(((3324515397 & -124) | (~var_19)))));
                            arr_24 [i_4] [i_5] [i_6 - 1] [i_4] [i_6] [i_6 - 1] = (((((var_13 * (arr_22 [7])))) <= ((((-(arr_11 [15])))))));

                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                arr_28 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_4] = (4146386904 || 689713018);
                                arr_29 [i_4] = (((max(var_9, (arr_3 [i_8] [i_6] [i_4]))) >> ((247 >> (var_18 - 69)))));
                            }
                            for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                            {
                                var_28 &= (min(((max(3, 5154))), (max(161, (~16)))));
                                var_29 = (max((var_13 / 3286), ((((arr_7 [i_7 + 1] [i_6 - 1] [i_6]) & var_18)))));
                                var_30 = (((~var_15) | ((var_16 << (var_16 - 21911)))));
                            }
                            for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
                            {
                                arr_34 [i_4] [i_5] [i_4] [i_7 + 3] [i_7] [i_7 + 3] = (((46 ^ 19876) >= (1317206052 >= 16136870515411222048)));
                                var_31 += ((~(min(2309873558298329567, ((((arr_16 [0] [i_5] [i_4]) + 46)))))));
                            }
                            for (int i_11 = 2; i_11 < 13;i_11 += 1)
                            {
                                var_32 = (max(var_32, (((!(((arr_9 [i_5 + 1] [i_5 + 1] [i_11 - 2]) || 1)))))));
                                var_33 = ((((max(19876, 21317))) || ((((max((arr_9 [i_6] [i_6] [i_4]), 6863))) || ((max(var_19, var_7)))))));
                                var_34 |= (((((var_12 || var_14) && var_9)) && ((((min(5254369115867547496, 1809871483))) && (!var_3)))));
                                var_35 = (min(var_35, (((((!(arr_14 [i_6 + 1] [i_6] [i_11]))))))));
                                arr_37 [i_4] [i_4] [i_5] [1] [i_7] [i_11] = ((((((var_13 >= -3287) > (((((arr_25 [9] [i_5 + 1] [i_6] [i_5 + 1] [12]) + 2147483647)) >> (((arr_32 [i_6]) + 17072))))))) - (max((max((arr_10 [i_6 - 1] [i_4]), (arr_31 [i_4] [i_5] [i_6] [i_4] [i_11]))), (((3447591610122776488 != (arr_3 [i_4] [7] [i_6 + 1]))))))));
                            }
                        }
                    }
                }
                arr_38 [10] &= ((-(!var_3)));
            }
        }
    }
    #pragma endscop
}
