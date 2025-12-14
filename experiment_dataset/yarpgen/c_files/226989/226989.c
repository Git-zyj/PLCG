/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 - 2] = var_10;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_1 + 1] = (max(15141, (-2147483647 - 1)));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_15 [i_0 - 2] [i_1 - 1] [i_2] [i_3 - 1] [i_0] = -1357975803;
                        arr_16 [i_0 + 2] [i_3] [i_2] [i_1 - 1] [i_2] [i_1 + 1] |= ((-106 ? var_2 : var_15));
                        arr_17 [i_3 - 1] [i_2 - 3] [i_0] [i_0] = (arr_1 [i_0] [i_1]);
                        arr_18 [i_0] [i_0] [i_2 + 1] [i_0] [i_3] = ((-(((-32767 - 1) ? (arr_13 [i_3 - 1] [i_2 - 1] [i_0]) : 227))));

                        for (int i_4 = 4; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            arr_21 [i_4] [i_4] [i_1] = 2147483647;
                            arr_22 [i_4] = (((((arr_5 [i_0 + 3] [i_4] [i_2]) ? -2147483640 : 14512204471887063768)) * 1357975783));
                        }
                        for (int i_5 = 4; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_26 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_5 + 1] [i_1 - 2] [i_3 - 1] = (((2155368623 <= 32756) ? var_9 : (arr_12 [i_0 + 4] [i_5 - 1] [i_5 - 4] [i_3] [i_5] [i_5 - 4])));
                            arr_27 [i_0] [i_0] [i_1 - 2] [i_2 + 1] [i_2] [i_2 + 1] [i_5 - 1] &= var_13;
                            arr_28 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] = ((-(arr_8 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 2])));
                            arr_29 [i_0] [i_0] = (arr_19 [i_1] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_1 - 2] [i_3 - 1]);
                        }
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_0] [i_0] [i_6] = var_13;
                        arr_33 [i_6] [i_6] [i_6] [i_1] [i_6] [i_0] = 9223372036854775807;
                    }
                    arr_34 [i_2] = ((-(max((max(var_8, var_17)), (-72 - var_16)))));

                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_43 [i_8] [i_8] [i_8] [i_8] [i_8] [i_7] [i_7 + 1] = ((0 * (arr_24 [i_0] [i_0])));
                            arr_44 [i_7] [i_8] [i_8] [i_8] [i_8] = (arr_13 [i_1 - 1] [i_1] [i_1 - 1]);
                            arr_45 [i_7] [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 1] = var_16;
                            arr_46 [i_7] [i_1] [i_1] [i_1] [i_1] = (arr_3 [i_2] [i_0]);
                        }
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            arr_50 [i_9 + 1] [i_7] [i_2 - 4] [i_7] [i_0] = (132 / 106);
                            arr_51 [i_0 + 4] [i_7] = (!-24194);
                        }
                        arr_52 [i_1] [i_1] [i_0 + 4] [i_1] [i_0 + 4] = 32767;
                        arr_53 [i_7] = (-32767 - 1);
                    }
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        arr_56 [i_10 - 1] [i_2 - 2] [i_1 - 1] [i_0 + 2] [i_0] = 2791981385210466478;
                        arr_57 [i_0] [i_1 - 1] [i_1 - 1] [i_10 - 1] [i_0] [i_10 + 1] = (((max((arr_14 [i_0]), (~2047))) * (((((max(-1286048339, 1))) ? var_7 : (max((arr_4 [i_0] [i_0] [i_0]), (arr_42 [i_1] [i_1] [i_1]))))))));
                        arr_58 [i_0 - 2] [i_1] [i_1] [i_2] [i_10] = 1;
                        arr_59 [i_2] [i_1] [i_0] = (max(0, 8865092882060064802));
                    }
                }
            }
        }
        arr_60 [i_0] = 554616983;
    }
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            {
                arr_65 [i_11 - 1] [i_11] = ((((max((max((arr_48 [i_12]), var_0)), 3322184775801955428))) ? (((var_11 ? (arr_7 [i_11]) : (max(105, var_9))))) : 1071644672));
                arr_66 [i_11 + 1] [2] = (~199);
            }
        }
    }
    #pragma endscop
}
