/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [4] [i_1 + 2] [i_1 + 1] = ((((((arr_0 [i_0]) >> ((((-(arr_7 [i_0]))) - 8721964566764343912))))) % (min((~var_12), ((((var_14 + 9223372036854775807) >> (((arr_0 [i_0]) - 6806134516029980716)))))))));
                    arr_9 [i_1] [i_1] [i_1] = ((~(max((139 != var_7), (((arr_4 [i_0]) ? (arr_5 [i_0]) : var_14))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-((~(~var_5)))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = (((((123 ? (arr_6 [i_1 + 2] [i_0 - 1]) : var_3))) - ((-(arr_7 [i_4])))));
                        }

                        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0 - 1] = ((min((((var_3 ? var_13 : 32351)), (min((arr_4 [i_1 - 1]), -3))))));
                            arr_21 [i_1] [i_2] [i_1] [i_2] |= var_12;
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = var_7;
                            arr_27 [i_0] [i_1] [i_2 + 2] [i_3] [i_3] [i_6] = (((!-var_9) >> (((138 >= (arr_12 [i_6 - 2] [i_2 - 1] [i_1 + 2] [i_0 + 1]))))));
                        }
                        arr_28 [i_0] [i_1] [i_1] [i_1] [i_2 - 1] [i_3] = min((arr_23 [i_2 + 2]), ((var_8 ? ((((var_5 < (arr_6 [i_0] [4]))))) : (min((arr_19 [i_3] [i_0] [i_0] [i_2 + 2] [i_0] [i_0]), (arr_14 [i_3]))))));
                        arr_29 [2] [i_1] [i_2 + 1] [i_3] = (arr_6 [i_0] [i_1]);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_32 [12] [i_1] [1] [i_7] = (((111 + (arr_22 [i_0] [i_1] [i_0] [i_0 + 1] [i_2] [i_2 - 1]))));
                        arr_33 [i_7] [i_7] [i_1] [i_7] [i_0] = var_6;
                    }
                }
            }
        }
        arr_34 [i_0] = (min((max((arr_23 [i_0 + 1]), (arr_23 [i_0]))), ((((arr_23 [i_0 + 1]) >= (arr_23 [i_0 - 1]))))));
        arr_35 [i_0] = (((((((arr_7 [i_0]) * var_5)) * 16098)) >= 58958));
        arr_36 [i_0] [i_0] = (-6603934901971647119 ? (arr_11 [i_0] [i_0] [1] [i_0]) : (((((min((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0] [0]))) <= ((min(-379147641, var_10))))))));
    }
    for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
    {
        arr_41 [i_8] [i_8] = (((((arr_37 [i_8] [i_8 - 1]) ? (arr_37 [i_8] [i_8]) : (arr_37 [i_8] [i_8 - 1]))) + (min((arr_37 [i_8] [i_8 - 1]), (arr_37 [i_8] [i_8 - 1])))));
        arr_42 [6] = ((8380416 < (arr_10 [i_8 - 1] [6] [i_8] [i_8] [i_8 + 1])));
    }
    var_16 = (min(((var_4 ? var_7 : var_9)), var_7));
    var_17 = var_10;
    #pragma endscop
}
