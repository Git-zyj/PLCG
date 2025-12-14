/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = min((max(1, ((var_12 | (arr_11 [i_1] [i_1]))))), 7110458421950210790);

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_18 = ((((max((arr_12 [i_1 - 1] [i_0] [i_1] [i_1] [i_0] [i_1 + 1]), (arr_10 [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1])))) ? (min(var_2, var_11)) : (arr_8 [i_2 + 2] [i_2 + 2])));
                                var_19 = 74;
                                var_20 = ((+(((arr_0 [i_2 + 1]) * (arr_0 [i_2 + 1])))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_21 = ((~((((77 & (arr_9 [i_0] [i_1]))) * (arr_13 [i_0] [i_0 - 2] [i_1 + 1] [i_2] [i_2 + 2])))));
                                var_22 |= (arr_0 [i_0]);
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_1] [i_1] = (((-var_8 / 74) + -1196299969));
                var_23 = ((((((-6121143966634859501 == (arr_16 [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))))) & (max(((-(arr_8 [i_0] [i_0]))), (arr_5 [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                var_24 = (max(var_24, (((181 & (max((max(16248826760732222798, 65535)), -25340)))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_25 = (max(70, 1));
                            arr_26 [4] [i_8] [i_8] [i_6] = (((((arr_0 [i_7]) ? (arr_0 [i_6]) : (arr_0 [i_6]))) / (arr_1 [i_6] [i_6])));
                            arr_27 [i_8] = 35417;
                            var_26 = ((((((arr_9 [i_6] [i_6]) * 39768))) ? (((((arr_11 [i_8] [i_7]) < 1474783327)))) : (max((arr_9 [i_8] [i_7]), (arr_11 [i_8] [i_9])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_27 = (max(var_27, (arr_24 [10] [11] [11] [i_11])));
                            var_28 = 154;
                            arr_32 [14] [3] [i_10] [3] = 16274006736745714543;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
