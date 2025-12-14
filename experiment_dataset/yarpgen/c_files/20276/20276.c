/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_16 = -3657204998943185298;
        var_17 = (arr_0 [i_0 + 1]);
        arr_3 [i_0] = ((var_15 != (arr_0 [i_0 + 1])));
        arr_4 [i_0] = (!-3657204998943185287);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_18 = (!var_1);
        arr_7 [i_1 + 1] = (min(((-((var_7 ? 560672316469198881 : 52)))), ((~(11 % -3657204998943185307)))));
        arr_8 [i_1 + 1] [i_1] = (!((max(((((arr_6 [i_1]) ? -6477893316843887440 : -2724113278194158278))), ((var_9 ? var_2 : 14504929464705726185))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                var_19 = -9223372036854775790;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_1] [i_4] [i_3] [i_1] [i_5] &= 17589779995260093959;
                            arr_20 [i_3 + 3] [i_2] [i_5] [19] [i_3] [i_4] [i_3] = (((arr_5 [i_4] [14]) == (-32766 <= 560672316469198869)));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_20 = ((!(1984 && -3657204998943185288)));
                    arr_25 [i_6] [i_6] [i_6] [21] [i_6] [i_6] |= 14204414950735973472;
                    arr_26 [i_1] [i_2] [22] [i_6] = (((((max(9223372036854775785, (arr_11 [i_1] [i_3] [i_6])))) ? (max(var_12, (arr_12 [i_1]))) : (((1 ? 180 : var_6))))) == -121);
                }
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            arr_37 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = -7;
                            arr_38 [i_1] [i_2] [i_7 - 1] [i_8] [i_9] = (min(((var_7 > (arr_22 [i_1] [i_2] [i_7 - 1] [i_8] [i_9]))), ((((((arr_23 [i_1] [i_1] [i_1 + 1] [i_1]) <= (arr_32 [i_9] [i_8] [i_7 - 1] [i_1 + 1])))) == 65535))));
                            arr_39 [23] = ((max((856964078449457668 <= -127), -2724113278194158300)));
                            var_21 = ((!((max(((var_2 ? (arr_13 [i_7 - 1] [i_8] [i_9]) : 19)), 2388334918)))));
                        }
                    }
                }
                arr_40 [i_7 - 1] [i_2] [i_1] [i_1] = ((+(max((14204414950735973471 * 79), (arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                var_22 = 6;
                var_23 = ((var_3 - (((((arr_32 [i_1 + 1] [i_1 + 1] [i_1 + 1] [14]) && -15))))));
                arr_43 [i_1 + 1] [i_1 + 1] [i_2] = ((~((22467 ? 226 : 43080))));
            }
            var_24 = ((~((var_0 ? var_2 : (arr_42 [i_1] [i_1 + 1] [i_2] [i_1])))));
            var_25 = var_7;
        }
        var_26 -= (min((min(67104768, -5621417943637982407)), (((var_4 >= (((((arr_2 [0]) > var_14)))))))));
    }
    var_27 = var_6;
    var_28 = -3;
    #pragma endscop
}
