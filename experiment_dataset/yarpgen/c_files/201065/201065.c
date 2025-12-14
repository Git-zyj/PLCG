/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_0] [i_0] [i_1] [i_0] = (~-4507505432047350034);
                                arr_14 [i_0] [i_1] = (((((59772 / (~-3661)))) || ((max((~152), 127)))));
                                arr_15 [i_0 - 1] [i_1] [i_2] [i_2] [i_4 - 1] [i_2] = ((((((58 ? -1 : -57)))) != ((25731 ? -7870742919894314881 : 1447277101211392847))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [i_0 + 1] [i_1] [i_2] [i_5] [i_0 + 1] [i_0] |= ((619992138 - ((var_12 ? 9416 : -3903))));
                                arr_21 [i_0 + 2] [i_1] [i_2] [10] [i_6] = -var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] = 4053269871687410212;
                                arr_27 [i_2] = 123;
                                arr_28 [i_0] [i_1] [i_1] [i_1] [i_8] [i_8] [i_8] &= ((-var_12 >= (min(123, -var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_40 [i_9] [i_9] [i_11] [i_12] [i_9] = var_6;
                            arr_41 [i_9] [i_9] [i_9] [i_9] [i_9] = (1 == -150042658);
                            arr_42 [i_9] [i_10] [i_11] [i_12] = ((-var_12 ^ ((127 ? 115 : -33342))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            arr_48 [i_9] &= (max((((!(((-124 ? var_3 : var_4)))))), -112));
                            arr_49 [i_9] [i_10] [i_9] [i_14] = -14924867505047826274;
                            arr_50 [i_9] [i_9] [i_13 - 2] [i_14] = var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
