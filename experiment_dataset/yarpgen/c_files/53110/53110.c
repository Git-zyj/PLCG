/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = 1;
                    var_21 = (((-1 <= -95) - ((max(95, -2108473440)))));
                    var_22 ^= var_3;
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_23 = (min(var_23, ((((0 & (arr_0 [i_0])))))));
            arr_9 [i_0] = (((var_19 ^ (arr_3 [i_0] [i_3]))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_13 [i_4] [i_0] [i_0] = ((~(arr_3 [i_0] [i_4])));
            arr_14 [i_0] [i_0] [i_0] = (!954343841);
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            var_24 |= 1;
            arr_19 [i_0] [i_0] = (252 ? -29558 : -1243309243);
            var_25 ^= ((var_4 ? ((-116 ? -95 : -110)) : var_17));

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_23 [i_0] [i_0] = (~-62);
                arr_24 [i_0] = ((((max(2022655379, (arr_7 [i_5 - 1])))) ? 12113 : 6840));
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                arr_27 [i_0] [6] [i_0] [i_0] = ((((max((arr_4 [i_5 - 1] [i_7] [i_0]), (arr_4 [i_5 - 1] [i_5 - 1] [i_0])))) ? ((max((arr_4 [i_5 - 1] [i_5] [i_0]), (arr_4 [i_5 - 1] [i_5] [i_0])))) : ((-(arr_4 [i_5 - 1] [i_5 - 1] [i_0])))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        {
                            var_26 = ((~var_2) ? (((arr_22 [i_0] [i_5] [0] [3]) ? (((2491971463 ? var_18 : var_1))) : (arr_5 [i_0] [i_5 - 1] [i_7]))) : ((((arr_4 [i_0] [i_5 - 1] [i_0]) | (arr_4 [i_0] [i_5 + 1] [i_0])))));
                            arr_33 [i_0] [i_8] [i_8] [i_7] [i_0] [i_0] = ((((((var_14 | 4389121641575895401) >> ((var_4 ? (arr_28 [i_0] [i_0] [i_0]) : var_0))))) ? 116 : ((var_12 ? var_13 : var_14))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_42 [i_0] [i_5 + 1] [1] [i_11] [i_12] = ((((var_6 ? (max(3929465669, var_10)) : 0))) ? (((arr_40 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_11]) * (arr_40 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1] [i_10]))) : (arr_15 [i_12] [i_5] [i_5]));
                            var_27 = -var_18;
                            var_28 *= ((+(((arr_38 [i_10] [i_11]) >> ((((9223372036854775804 ? 65535 : -4389121641575895401)) - 65510))))));
                            var_29 *= (((max((arr_35 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1]), (arr_29 [i_5 - 1] [i_5 - 1] [i_5 - 1]))) < (!var_1)));
                            var_30 = ((1540023777 - (arr_8 [i_5 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_31 = ((max(var_4, 9223372036854775804)));
    #pragma endscop
}
