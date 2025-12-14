/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_13 = ((((4060379772 ? 11176 : -4218267137528041917))) ? (arr_1 [i_0]) : ((((max((arr_6 [i_0] [i_2]), (arr_8 [i_0] [i_0] [i_0] [24])))) ? (min(var_8, -4218267137528041917)) : ((((arr_3 [11] [i_1] [i_2]) + var_8))))));
                    var_14 += -11177;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_15 = arr_11 [8] [i_0] [14] [i_0] [i_3];

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            arr_16 [i_2] = (arr_10 [1] [i_1 + 2] [i_2] [i_3] [i_4 - 1]);
                            var_16 = (max(var_16, ((var_1 ? (arr_13 [i_0] [i_1] [i_2] [i_1] [12] [i_4 - 1]) : (arr_5 [i_1 + 1] [i_1 + 2] [i_4 + 1])))));
                            var_17 = (arr_7 [i_0] [i_2]);
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [1] [14] = (arr_10 [20] [20] [20] [7] [19]);
                    arr_20 [i_0] [i_1] [i_5] = var_5;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_18 &= ((((!(arr_22 [0] [i_1 - 2] [i_6]))) ? (((268435452 ? 641965513 : (-32767 - 1)))) : var_0));

                    for (int i_7 = 3; i_7 < 24;i_7 += 1)
                    {
                        var_19 = ((-(1 >= 65519)));
                        var_20 = ((-641965519 ? (arr_3 [1] [i_1 + 1] [1]) : (arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 3] [i_7 - 1] [12])));
                    }
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        var_21 = ((((arr_23 [i_0] [i_0]) >> (var_1 - 7264))));
                        var_22 = (((((arr_15 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]) + 2147483647)) << (((((arr_9 [i_0] [i_0] [i_6] [i_6] [i_8 + 1] [1]) + 13734)) - 19))));
                    }
                    var_23 = ((-(arr_21 [i_0] [2] [3] [i_6])));
                    var_24 = 8796093022207;
                    var_25 = ((((((arr_26 [i_0] [i_1] [i_1] [i_1]) + -4218267137528041900))) ? (arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 2]) : -17743));
                }
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_26 &= ((-(326018209 >> 0)));
                                arr_37 [i_10] [i_10] [i_10] [3] = 3968949106;
                                arr_38 [15] [1] [i_9] [21] [i_11] = (min((max((arr_21 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1 - 2]), (arr_4 [i_1] [i_1] [i_1]))), (arr_11 [i_0] [8] [1] [i_0] [i_0])));
                                arr_39 [i_0] [i_0] [i_9] [i_9] = ((-(arr_18 [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 *= (max(-45, (max(var_3, (max(65535, var_10))))));
    var_28 = var_5;
    #pragma endscop
}
