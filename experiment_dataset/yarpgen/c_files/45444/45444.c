/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        arr_2 [i_0] = var_11;
        var_14 = max((arr_1 [i_0]), 32765);
        var_15 = var_3;
    }
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        var_17 ^= (arr_4 [i_1]);
                        arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((~((max((arr_11 [i_4]), var_7)))));
                        var_18 |= (max(((var_12 ? ((max(var_3, 253))) : (arr_7 [i_3 + 1] [i_3 - 1] [i_4 - 1]))), (arr_5 [i_1] [i_1] [i_1])));
                        arr_14 [i_1] [i_2] [i_1] [i_1] [i_1] = var_9;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_19 = (arr_3 [i_1] [i_1]);
                        arr_19 [i_2] [i_2] = 251;
                        arr_20 [i_2] [i_2] [i_2] [i_2] = arr_11 [5];
                        var_20 = 16;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_21 = var_5;
                                var_22 = arr_11 [i_6];
                                arr_26 [i_1] [i_2] [i_1] = var_10;
                                arr_27 [i_1] [i_1] [i_3] [i_6 + 1] [i_6] [i_6 + 1] [i_2] = (max((min(var_2, (arr_21 [i_1]))), var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            {
                var_23 *= (max(((var_7 ? 32441 : ((max(var_2, (arr_31 [i_8] [i_9 - 1] [i_8])))))), var_9));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_24 = max((max(var_1, var_12)), var_4);
                                var_25 = (min((~108), ((((arr_12 [i_11 - 1] [i_10]) || (arr_23 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_10] [i_9 - 1]))))));
                                var_26 = var_10;
                                arr_39 [i_8] [i_8] [i_11] [i_10] [i_8] [3] = ((((max((arr_25 [i_8] [i_9 + 2] [i_12] [i_12]), 1))) ? (((arr_25 [i_8] [i_9 + 1] [i_10] [i_8]) ? (arr_25 [i_8] [i_9 + 2] [i_10] [i_11]) : 5)) : (((arr_25 [1] [i_9 - 1] [i_10] [i_10]) % (arr_25 [i_9] [i_9 - 1] [i_9] [i_10])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 0;i_14 += 1)
                    {
                        {
                            arr_45 [1] [i_8] = (((arr_4 [i_13]) / ((((-(arr_42 [i_8] [i_9] [i_14]))) | ((144 ? var_0 : var_2))))));
                            var_27 = (1 > 0);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
