/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (min(var_16, (((var_8 % (((~(!var_7)))))))));
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [2] [i_2] [i_1] [i_0] [i_0] = (((!3949828828) ? (arr_7 [i_0]) : (arr_1 [i_1])));
                                var_18 = ((!(((((max(-18350, 49043))) >> (var_14 / var_0))))));
                                var_19 = (min(var_19, (((!((!(~16493))))))));
                            }
                        }
                    }
                    var_20 = ((~((209 >> (((arr_5 [i_2] [i_2] [i_2 + 3] [1]) - 41))))));
                    var_21 = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_22 &= (min((min((max(var_9, 2605485665)), -1689481630)), ((max((arr_15 [i_2 + 2] [1] [i_2 + 3] [i_1] [i_1]), -17519)))));
                                arr_19 [1] [9] [i_2] [i_1] [i_0] = (arr_0 [i_0]);
                                var_23 = (min(var_23, (((-(max((arr_6 [i_2 + 3] [i_2 + 3] [i_2] [i_2]), 1040091071)))))));
                                arr_20 [i_0] [i_0] = 18446744073709551615;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_24 [i_7] [i_0] [i_0] [i_0] = 31;
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_8] [i_8] [i_0] = (arr_22 [i_9 - 1]);
                                var_24 = 4154076334;
                                var_25 += -972557210;
                                arr_32 [i_8] [i_1] = (max((!var_8), ((-28891 ? (arr_30 [i_9] [i_8] [i_9] [i_9 - 1] [i_9] [i_9 + 1]) : (arr_21 [9] [i_1] [i_1] [i_1])))));
                            }
                        }
                    }
                    var_26 -= (var_12 >> (268435455 - 268435430));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = -1;
                }
                var_27 = (min(var_27, (((min((min((arr_30 [i_0] [i_1] [i_0] [i_0] [i_0] [2]), var_13)), (((var_4 ^ (arr_3 [i_0] [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
