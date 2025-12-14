/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (((((arr_5 [i_0] [i_1 + 2] [i_1] [i_1 + 3]) ^ (arr_5 [i_0] [i_1 + 1] [i_1] [i_1 + 3]))) * ((min(0, 127)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_2] = (~var_6);
                                var_13 = (max(var_13, (min((arr_6 [i_1 + 2] [i_3 - 2] [i_3]), ((!(arr_10 [i_1] [i_1 + 2] [i_3 - 2] [i_1 + 3] [i_4] [16])))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_14 = (min(var_14, 125));
                        arr_15 [i_0] [i_1] [15] [i_0] = ((((((arr_13 [i_0] [i_1] [i_2] [i_1] [i_0]) < (arr_13 [i_0] [i_1] [8] [i_1] [2])))) & (((var_1 > (arr_13 [17] [i_1] [16] [i_1] [14]))))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_20 [i_0] [i_1] = -105;
                            var_15 = ((-(var_5 / -1061254282)));
                            arr_21 [i_1] = ((((min(var_2, 0))) > ((((!(arr_3 [i_1] [i_1 - 1])))))));
                        }
                        var_16 = (max(var_16, ((((18446744073709551615 * 0) * ((((0 * (arr_9 [7] [15] [13] [i_1] [i_2] [i_2] [1]))) / var_8)))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_17 -= (((arr_18 [i_1 + 2] [i_1 + 3] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1 + 3]) >> (((arr_3 [i_1 + 2] [i_1 - 2]) + 2904))));
                            var_18 = (min(var_18, (arr_16 [i_0] [i_7] [i_1 - 2] [i_5] [1] [1] [14])));
                            var_19 = ((var_9 ? (((arr_22 [5] [i_1] [i_2] [i_1] [1]) % 1702859041)) : var_5));
                            arr_26 [i_1] = ((-9240 | (arr_18 [i_0] [6] [i_2] [0] [9] [19] [i_7])));
                            arr_27 [i_7] [i_5] [i_1] [i_1] [i_0] [2] = (arr_19 [i_1] [i_1] [i_1 + 2] [i_1 + 1] [0] [15]);
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_3, -115));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    var_21 -= (((-1061254292 || (arr_29 [i_10]))) && ((max((arr_17 [i_10] [i_10] [i_10] [i_9] [i_9] [i_8] [i_8]), (arr_17 [i_8] [10] [i_8] [20] [i_8] [i_8] [i_8])))));
                    arr_37 [i_8] [i_9] [i_10] = (min((arr_17 [i_8] [i_8] [17] [i_9] [i_9] [i_10] [i_10]), ((-(((62460 || (arr_34 [4] [11] [4] [i_10]))))))));
                    var_22 = (max(var_22, ((((((((min((-127 - 1), -112))) + 2147483647)) << (((((arr_8 [i_8] [i_8] [i_9] [i_10] [i_10] [i_10] [i_10]) + 31)) - 14)))) > (arr_14 [i_8] [4] [i_9] [i_10])))));
                    var_23 = 1550287440;
                }
            }
        }
    }
    #pragma endscop
}
