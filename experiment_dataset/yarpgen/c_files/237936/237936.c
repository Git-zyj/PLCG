/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3] = ((var_6 ? (((((((arr_4 [i_3] [i_0 + 1] [i_0 + 1]) - -16057)) != (!var_11))))) : (((arr_1 [i_0 - 2] [i_3 - 1]) >> (1332678297 - 1332678281)))));
                            var_14 = ((((((((arr_10 [18] [i_1] [14] [i_3 + 2]) || var_6)) ? ((((arr_3 [i_1]) || var_13))) : var_13))) % (((6 && var_12) ? ((var_2 ? var_9 : (arr_6 [i_0] [i_1] [i_2] [i_2]))) : (!var_7)))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_15 = (arr_8 [i_0 + 1] [i_0 + 1] [i_2] [i_4]);
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] = (8787 ? ((var_12 ? var_7 : 2047)) : (((!(arr_7 [i_3 - 1] [10] [i_3] [i_0 - 2] [i_4])))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_16 = (((~var_8) * (((!(arr_10 [i_3 + 1] [i_0 + 1] [i_2] [i_3 + 1]))))));
                                var_17 = ((-(arr_1 [i_3 + 3] [i_0 - 4])));
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1)
                            {
                                arr_20 [i_0] [i_0] [i_0] [9] [i_0] = (!var_8);
                                arr_21 [i_0] [17] [i_1] [i_2] [i_2] [i_1] = 1;
                            }
                            arr_22 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((14916553644860878747 ? ((var_10 ? var_2 : (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_3]))) : (!7)))) || ((!(arr_2 [i_0 - 3])))));
                            var_18 = (((((((min((arr_5 [i_0] [i_3 + 2] [i_3 + 2]), (arr_13 [i_3 + 1]))) != var_9)))) * ((6 ? ((var_1 ? var_12 : (arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))) : ((((!(arr_10 [i_0] [i_0] [i_2] [i_2])))))))));
                        }
                    }
                }
                var_19 = ((((((arr_9 [i_0] [i_0]) || (arr_0 [i_0] [i_0])))) >= ((((arr_16 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0 - 3] [i_0 - 3]) ? var_11 : (arr_16 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_1] [i_1]))))));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_20 = var_9;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_21 = min((((!(arr_3 [i_0 - 1])))), ((((arr_2 [i_0]) && var_13))));
                                arr_31 [i_8] [i_7] [8] [i_0] = (((((var_5 ? var_13 : var_0)) & var_11)));
                                arr_32 [i_0] [i_0] [i_7] [i_8] [14] [i_9] = var_13;
                                arr_33 [i_0] [i_7] [1] [i_7] |= max((((arr_25 [i_0 - 2] [1]) % 1)), (((!(arr_2 [i_9])))));
                            }
                        }
                    }
                }
                for (int i_10 = 3; i_10 < 16;i_10 += 1)
                {
                    var_22 = (max((((!(arr_23 [i_10 + 4] [i_0 + 1])))), (arr_23 [i_10 + 3] [i_0 + 1])));
                    var_23 = (min((arr_7 [i_10 + 2] [i_0 - 1] [i_10 + 2] [i_10 + 2] [i_10]), var_10));
                }
                var_24 |= (((!2) || (((arr_7 [i_0 - 4] [i_0] [i_0 - 4] [i_0 - 2] [i_0 - 4]) != var_0))));
            }
        }
    }
    var_25 = var_13;
    var_26 = 13284218957466094047;
    #pragma endscop
}
