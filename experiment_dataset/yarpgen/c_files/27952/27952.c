/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = ((((max(35306, (max(var_19, 35317))))) * ((-9427 ? (30230 < 4240403202442871788) : (arr_4 [i_1] [i_1 + 1] [i_4])))));
                                var_22 = (min(var_22, (((((((34006 ? 1 : 35315)))) ? 192 : 13)))));
                                arr_15 [i_4] [10] [i_4] [i_4] [i_4] [i_0] = (max((((arr_11 [i_0] [i_1] [i_2] [i_4] [i_4]) - (arr_11 [i_0] [i_0] [i_2] [i_3 + 1] [i_4]))), (((!((max((arr_5 [i_0] [i_0]), (arr_3 [i_0])))))))));
                                arr_16 [i_0] [i_1] [1] [i_2] [i_2] [i_2] [i_2] = (max(var_1, (max(var_6, ((min(29892, 36274)))))));
                            }
                        }
                    }
                    var_23 = (min(var_23, (((var_10 << (82 - 69))))));
                    arr_17 [12] = (115 ^ 16767899174474396334);
                    arr_18 [16] [i_1] [i_2] = ((var_1 ? ((((arr_2 [i_0]) ^ ((min(88, 30522)))))) : ((((((arr_1 [i_1]) << (((arr_11 [i_0] [i_0] [i_0] [i_1] [i_2]) - 1811378542))))) ? (arr_11 [i_0] [i_1 + 1] [i_2] [i_2] [18]) : var_3))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] = (arr_13 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_24 = (min(var_24, ((max((arr_12 [i_1 - 1] [i_1 - 1] [i_1 + 1]), (arr_13 [i_1] [9] [i_1] [i_1]))))));
                    arr_23 [2] [i_1 + 2] [i_1] [4] = var_12;
                    var_25 = (arr_20 [i_0] [i_0]);

                    for (int i_6 = 4; i_6 < 23;i_6 += 1)
                    {
                        arr_26 [i_0] [i_1] [i_1 + 2] [i_6 - 3] = ((((!(arr_12 [i_1 - 1] [i_1 + 1] [i_1 + 2]))) || ((max(var_19, (arr_12 [i_1 - 1] [i_1 + 1] [i_1 + 2]))))));
                        arr_27 [i_0] [i_1] [i_5] [i_6 - 1] = (max(-9295, var_7));
                        arr_28 [i_0] [12] [i_1 - 1] [11] [i_6] = (max(82, (((!((max(120, 78))))))));
                        var_26 = (min(76, (var_2 - var_6)));
                        var_27 = (max(var_27, (var_6 - 229)));
                    }

                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        arr_31 [i_0] [15] [i_1 + 1] [i_5] [i_7] = (max(var_7, 6));
                        arr_32 [i_0] [i_0] [i_1] [23] [2] [i_7 - 2] = (max((min((((arr_12 [i_5] [i_5] [i_0]) ? 25549 : -70)), 127)), 16));
                    }
                }
                var_28 += ((var_4 | (min(((var_6 ? var_19 : var_1)), var_11))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {

                    for (int i_11 = 2; i_11 < 16;i_11 += 1)
                    {
                        var_29 = (min(var_29, ((min(((max((arr_41 [i_11 - 2] [i_11 + 1]), (arr_39 [i_9] [i_10] [i_9])))), (arr_12 [i_8 + 1] [i_10] [i_11]))))));
                        var_30 += (max(((max(var_4, 1))), (var_0 || -3899125866811417527)));
                    }
                    var_31 = (max(var_31, (2233104568811135196 * -157)));
                    var_32 = (max((max(var_6, (arr_37 [i_8 - 1] [i_9] [i_10]))), (arr_25 [1] [i_9] [i_9] [i_8 + 2] [i_8])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_33 = (min(var_33, ((((((((var_19 ? 3411933745 : (arr_13 [i_8] [11] [i_12] [i_13]))) > (arr_9 [i_12] [i_12] [i_12] [i_8 - 1] [i_9] [i_8 - 1])))) | ((var_9 ? ((var_13 ? var_18 : (arr_1 [i_8]))) : ((min((arr_36 [6]), var_13))))))))));
                                arr_50 [i_8] [i_9] [i_8] [i_12] [i_12] [i_13] = (((115 + var_15) | 47));
                            }
                        }
                    }
                }
            }
        }
    }
    var_34 = (min(var_34, ((max((max((var_7 & var_1), var_1)), ((max(var_16, var_5))))))));
    #pragma endscop
}
