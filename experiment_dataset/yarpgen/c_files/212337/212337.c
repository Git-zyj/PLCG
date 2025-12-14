/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 += ((~((max((arr_4 [i_2 - 1] [i_0 - 1] [i_2 - 1]), (arr_4 [i_2 - 1] [i_0 - 2] [i_0 - 2]))))));
                            arr_11 [i_0] [i_2] [i_0] [i_3] = ((4018990101 << (((min(((min(4095, 2908682339))), (((arr_7 [i_2] [i_2] [i_2] [i_3]) ? var_6 : (arr_0 [i_3]))))) + 117))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_16 [6] [6] [i_1] [i_4] [i_5] = ((((((arr_8 [i_0 + 1] [i_5 - 1]) + (arr_8 [i_0 + 1] [i_5 - 3])))) > (-9223372036854775807 - 1)));
                            arr_17 [i_0] [i_1] [i_4] [i_0] = ((((((((arr_2 [i_4]) > var_5))) % var_10)) > (((!((((arr_3 [i_0 - 1]) ? 223 : var_1))))))));
                            arr_18 [i_0] [i_1] [i_4] [i_5 - 3] = 3423834831;
                            var_16 = (max(var_16, (((-(max(var_8, ((var_12 ? (arr_1 [i_4] [i_4]) : (arr_3 [i_0]))))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                arr_25 [i_6] [i_6] [i_7] = -1940673727;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_17 ^= (arr_20 [i_9] [i_6]);
                            var_18 = ((~1610612736) << (!10878537801741063510));
                            var_19 ^= ((min((arr_28 [i_9] [i_6] [i_6] [i_6]), (!1))));
                        }
                    }
                }
                arr_31 [i_6] [i_7] = (arr_24 [i_6] [i_7] [i_7]);
                var_20 -= ((~((min((arr_27 [i_6]), (arr_27 [i_6]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                {
                    var_21 = max((((((min(112, 3968))) ? (((3365917565 | (arr_34 [i_11 + 1])))) : (arr_29 [i_10 - 2] [i_10 - 1])))), ((((min(1832371495, var_8))) ? 171 : (max(1, var_11)))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_22 *= ((((((arr_13 [i_10 - 3] [i_11] [i_10 - 3] [i_12 - 1]) ? (arr_20 [i_11 - 1] [i_10 + 4]) : 121))) ? (arr_13 [i_10 + 1] [i_11] [i_12] [i_12 + 1]) : (min((arr_20 [i_11 - 2] [i_10 + 3]), var_0))));
                                var_23 &= (min(var_8, (arr_38 [i_10 - 2] [i_11])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
