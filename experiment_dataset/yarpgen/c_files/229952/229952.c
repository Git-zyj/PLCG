/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = ((-1964104318 ? ((min((24 + var_3), (arr_3 [i_0] [i_0])))) : (max((arr_2 [i_0] [i_1]), (~var_11)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_2] [i_2] [i_4] = (arr_4 [i_1] [6]);
                                arr_12 [i_0 + 2] [i_0 + 2] [i_1] [i_2] [11] [i_3 - 1] [i_4 + 1] = ((-(arr_8 [i_2] [i_1])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_14 = (((!12780) || ((((arr_6 [i_0 - 1] [i_5] [i_5]) ? 7302994944944631219 : (arr_8 [i_5] [i_5]))))));
                            arr_19 [i_5] [i_1] [i_5] [i_5] [i_5] [i_0] = ((~(min((arr_1 [i_0] [i_5]), (arr_15 [i_0 - 1] [i_1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_24 [i_8] = var_9;

                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 13;i_9 += 1)
                            {
                                arr_27 [i_0] [i_1] [i_0] [i_9] = (arr_8 [i_9] [i_1]);
                                arr_28 [15] [i_9] [i_0] [i_7] [i_9] [i_0] = (60974 != 1);
                                var_15 = -63;
                            }
                            for (int i_10 = 0; i_10 < 16;i_10 += 1)
                            {
                                var_16 = (max((-var_1 != 15), (min((min(var_3, (arr_0 [i_0] [i_1]))), -2))));
                                arr_32 [i_0] [i_1] [i_7] [i_8] [i_10] = (max(22, 1));
                                var_17 = ((var_1 && (!6668102342054476579)));
                            }
                            for (int i_11 = 0; i_11 < 1;i_11 += 1)
                            {
                                arr_35 [i_11] [i_8] [i_7] [i_1] [i_0] = 100;
                                var_18 = (arr_31 [i_11] [i_11] [i_7] [13] [i_11]);
                                var_19 = (arr_26 [i_0] [14] [i_0] [i_0] [i_0]);
                            }
                            for (int i_12 = 3; i_12 < 14;i_12 += 1)
                            {
                                arr_39 [i_0 + 2] [i_7] [1] [i_7] = 2096640;
                                arr_40 [i_0] [i_1] [i_0] [i_0] [i_12 - 1] [3] [i_12 + 2] = (max(140737488355327, 22721));
                            }
                            var_20 = (min(71, ((~(max(var_5, var_0))))));
                        }
                    }
                }
                var_21 = ((((((arr_6 [i_0 + 2] [i_0 + 1] [i_1]) != (arr_6 [i_1] [i_1] [i_0 + 1])))) | ((-(arr_6 [i_0 - 1] [i_0 - 1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
