/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 2646425380533438710;
    var_12 = (min(var_12, ((min(((max((min(var_0, var_3)), (~var_3)))), (((var_3 ? var_4 : var_6))))))));
    var_13 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 ^= ((var_3 ? (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 2]))) : (arr_0 [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 &= (((var_7 ? (min(var_3, 221)) : (arr_8 [i_0] [i_4 - 1]))));
                                arr_10 [9] [i_1] [i_4] [i_1 - 2] [i_1] = min((((arr_1 [i_4 + 3]) ? (arr_1 [i_4 + 2]) : (arr_1 [i_4 + 3]))), ((~(arr_1 [i_4 - 2]))));
                                arr_11 [i_0] [i_4] = var_3;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_16 += ((var_5 ? (arr_6 [i_1 - 2] [15] [i_5 - 1] [i_5 - 1]) : (arr_6 [i_1 - 2] [0] [i_5 - 1] [i_1 - 2])));
                        arr_14 [i_5] [i_1] [i_2] [i_5] [i_5] = var_0;
                    }
                    for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_0] |= ((min(var_4, -6698111656802982414)));
                        var_17 = (max(var_17, ((((max((124 > var_7), (arr_7 [i_0] [2] [i_2] [i_6 + 1])))) ? (((((((arr_6 [17] [i_1 - 1] [i_2] [i_1]) > var_3)))) - var_9)) : ((((arr_12 [i_1] [i_1 - 2] [i_1] [i_6 - 1]) ? (arr_12 [i_0] [i_0] [i_0] [i_6 + 1]) : var_5)))))));
                        arr_20 [i_6 - 1] [i_6] [i_6] [12] = (min((max(63330, var_9)), (arr_1 [16])));
                    }
                    for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_18 = var_1;

                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            var_19 = (max(var_19, (((~((+(max((arr_8 [i_8] [0]), var_3)))))))));
                            var_20 = (max(var_20, ((min((((arr_21 [i_8 - 3] [i_7 - 3]) ? (arr_21 [i_8 - 3] [i_7 - 3]) : (arr_21 [i_8 - 3] [i_7 - 3]))), (((arr_21 [i_8 - 3] [i_7 - 3]) ? (arr_21 [i_8 - 3] [i_7 - 3]) : (arr_21 [i_8 - 3] [i_7 - 3]))))))));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_9] [i_7] [i_7] [i_9] = var_0;
                            var_21 -= (arr_16 [i_0] [i_0] [i_0] [i_0]);
                            arr_30 [i_0] [i_0] [11] [i_9] [i_9] = ((((((arr_28 [i_7] [i_9] [16] [14] [i_9]) ? (arr_28 [i_0] [i_9] [i_2] [i_7 + 1] [i_7 + 1]) : (arr_28 [i_2] [i_9] [i_0] [i_7] [i_0])))) / (min((max(var_10, var_4)), (arr_6 [i_0] [i_1] [i_2] [i_9])))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_22 = (max(var_22, (((var_2 << ((((var_6 ? 107 : var_1)) - 92)))))));
                            var_23 += 2204;
                        }
                        var_24 = (min(((((arr_28 [i_1 - 2] [i_1] [i_7 - 3] [i_7 - 3] [i_7 - 1]) ? (arr_28 [i_1 - 1] [i_1] [i_7 - 1] [i_7 - 2] [i_7 + 1]) : (arr_28 [i_1 + 1] [i_1] [i_7 - 1] [i_7 - 3] [i_1])))), (max(var_5, (max(58, var_7))))));
                        arr_35 [20] = 1;
                    }
                    var_25 = (max(((((((arr_5 [i_0] [i_1 + 1]) ? var_1 : 2793)) | 1))), (((~var_10) ? var_7 : 63303))));
                }
            }
        }
    }
    #pragma endscop
}
