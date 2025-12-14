/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = var_13;
                var_18 = (2864910477 < 0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_1] [i_2] = ((!(((var_6 ? (((arr_10 [i_0]) | (arr_9 [i_0] [i_0] [i_0] [i_0]))) : ((((arr_6 [i_3] [i_0]) < var_17))))))));
                            arr_15 [i_3] [0] [i_3] = ((-(((!(var_9 | var_1))))));
                        }
                    }
                }
                arr_16 [i_0] [i_1] = ((!((((max(2, 958319022095512007)) * ((((arr_11 [i_0] [i_0] [i_0] [8]) ? var_15 : var_1))))))));

                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    var_19 |= -var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((((arr_4 [i_0]) <= (arr_21 [i_0] [i_1] [i_4 - 3] [i_5 + 2] [i_4 - 3] [i_6]))) ? ((((arr_10 [i_0]) < var_5))) : (((arr_10 [i_4 - 1]) ? (arr_21 [i_0] [i_1] [i_4 - 2] [i_5 - 2] [i_1] [i_6]) : var_8)))))));
                                var_21 = (!var_5);
                                var_22 = (((arr_12 [i_0] [i_1] [i_4] [i_5] [i_4] [i_6]) && (arr_1 [i_4 + 1])));
                            }
                        }
                    }
                    arr_27 [i_0] [i_0] [i_4] = ((((((var_5 / var_13) ? (arr_12 [i_0] [i_4 + 2] [i_0] [i_0] [i_4 - 3] [i_0]) : ((var_11 ? var_8 : var_2))))) ? ((((arr_26 [i_4] [i_1]) / (arr_26 [i_0] [i_0])))) : -var_12));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_32 [i_0] [i_7] [i_4 + 1] [i_4 + 1] [i_8] = ((var_15 ? ((~((max(var_5, var_11))))) : ((((var_17 / (arr_30 [i_7] [i_8]))) * (arr_3 [i_0] [i_1])))));
                                arr_33 [i_0] [i_0] [i_4] [i_8] |= (((((20 ? -4424940612025635630 : 27400))) ? ((((max(var_4, (arr_17 [i_8] [i_7] [i_4 - 1] [i_1]))) <= -var_14))) : ((((((arr_23 [i_8] [i_7] [i_4] [i_1] [i_8]) ? (arr_12 [4] [i_4] [4] [i_4] [i_4 + 1] [i_4 + 1]) : var_9)) <= (((var_15 << (var_3 - 8489)))))))));
                                var_23 -= var_15;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((var_16 << (var_14 - 30428)));
    #pragma endscop
}
