/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 14306;
    var_20 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 *= (max((((arr_5 [i_0] [i_0 + 4] [i_0 - 1]) ? var_17 : 4294967295)), ((min((arr_5 [i_0 + 4] [i_1 - 1] [i_0 + 2]), (arr_5 [i_1 + 1] [i_0 + 2] [i_0]))))));
                var_22 = (min(var_6, ((min((arr_0 [i_0 + 1]), (arr_5 [i_0] [i_1] [i_1]))))));
                var_23 = var_17;
                var_24 += ((max((min(var_4, (arr_3 [8] [8]))), (((172 && (arr_3 [4] [4])))))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_25 *= (min((max((arr_4 [i_0] [i_0 - 1] [i_1 - 1]), (arr_4 [i_0] [i_0 + 4] [i_1 - 1]))), (max((arr_4 [i_0] [i_0 + 1] [i_1 - 1]), (arr_4 [i_0] [i_0 + 4] [i_1 + 1])))));
                    var_26 = max((!var_15), (min((arr_6 [i_1]), (arr_5 [i_0 - 2] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] = ((max((arr_14 [i_0 - 3] [i_0 - 1] [i_1] [i_1] [i_1 + 1] [i_2] [i_2]), (((arr_12 [i_4] [i_2]) ? (arr_16 [i_4 - 4] [i_1] [i_2] [i_1] [i_1] [i_0]) : var_7)))) < (arr_14 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 1]));
                                var_27 = (max(var_27, 23719));
                                arr_18 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = var_15;
                            }
                        }
                    }
                    arr_19 [i_2] [6] [i_1] [i_2] = ((((arr_7 [i_1 - 1] [i_1 + 1] [i_1] [i_1]) - var_1)) - var_10);
                    var_28 = (((((var_16 ? ((var_10 ? 19086 : var_10)) : (((max((arr_13 [i_0 + 2] [i_0]), (arr_4 [i_0] [i_1] [i_2])))))))) ? ((((arr_10 [11] [i_0 - 3] [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 1]) == (max((arr_11 [i_2] [i_1] [i_1 + 1] [i_0]), 1933403020))))) : (((((arr_14 [i_2] [i_2] [i_1] [i_1 + 1] [i_1] [i_0] [i_0]) ? 1747770597279092977 : 0))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_29 &= ((max((arr_28 [i_5 + 1] [i_5 + 2] [i_5 + 3] [i_7 + 1]), (arr_30 [i_5] [i_5] [i_5]))));
                                var_30 = (min((arr_21 [i_6]), var_2));
                                var_31 = (min(var_31, (((max(-1, (min((arr_29 [i_9] [i_8] [i_5 + 1] [i_7] [i_6] [i_6] [i_5 + 1]), 3989683086680867245)))) < ((max((arr_26 [i_7] [i_6] [i_7 - 2] [i_8]), (arr_26 [i_8] [i_6] [i_7 - 2] [i_8]))))))));
                            }
                        }
                    }
                }
                arr_32 [i_5] [i_6] = (max((max(var_14, var_6)), ((max(var_15, (arr_23 [i_5 + 3] [i_5 + 1] [i_5 - 1]))))));

                for (int i_10 = 4; i_10 < 12;i_10 += 1)
                {
                    var_32 = -8328;
                    arr_35 [i_10] [i_6] [i_6] [i_5] = ((!((((arr_25 [i_5 + 1] [i_6]) ? (18425 & var_3) : 9223372028264841216)))));
                }
                var_33 = 52465;
            }
        }
    }
    #pragma endscop
}
