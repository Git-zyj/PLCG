/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_16 = ((arr_6 [i_0]) / ((((max(var_1, 4))) ? (arr_5 [i_0] [i_1] [i_1]) : var_10)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [20] [i_1] [i_1] [i_2] [4] [i_3] [4] = (((var_0 ? var_2 : var_1)));
                                var_17 &= (1073676288 != 0);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] = ((((var_11 ? (arr_7 [i_0] [i_1] [i_1] [i_1]) : (arr_16 [i_0] [i_1] [i_5]))) != (((var_12 ? 1 : var_14)))));
                    var_18 = var_6;
                    arr_19 [1] [i_1] [i_0] [i_5] = ((var_11 ? ((((((arr_3 [i_1]) ? var_5 : (arr_5 [i_0] [i_1] [i_0])))) ? ((32767 ? (-2147483647 - 1) : 29937)) : var_5)) : var_11));
                    arr_20 [i_1] = ((((max((arr_14 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5] [i_0]), var_10)))) | ((~(arr_0 [i_0]))));
                }
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    var_19 = var_4;
                    var_20 = ((-(((max(var_1, 0)) - (arr_9 [i_0] [i_1] [i_6] [5])))));
                    var_21 *= (arr_16 [i_1] [i_1] [13]);
                }
            }
        }
    }
    var_22 = var_2;

    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_23 = var_3;
        var_24 = (min(var_24, ((min(var_2, ((var_11 + (max(2344021630, var_7)))))))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_25 = (max(var_25, (arr_10 [i_8] [i_9] [i_10] [i_10] [i_9 + 1] [i_8])));
                    var_26 = (arr_21 [10]);

                    for (int i_11 = 4; i_11 < 11;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            var_27 = max((!3159896168440041244), var_5);
                            var_28 = (max((arr_2 [i_9 - 1] [i_11 + 2]), var_2));
                        }
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            arr_41 [i_8] [i_9] = (((((-1539914580 ? (arr_33 [i_9] [i_11 - 1] [i_11]) : (arr_17 [i_9 - 2] [i_9 + 1] [i_9 + 3] [i_11 - 4])))) + (((arr_21 [i_11 - 4]) ? ((var_4 ? var_0 : var_4)) : 50125))));
                            var_29 = (min(var_29, var_10));
                            var_30 &= ((!((!((max(var_6, (arr_8 [i_11]))))))));
                        }
                        var_31 *= (arr_13 [i_8] [4] [i_9 + 3] [i_9 + 3] [i_9] [i_8] [i_11]);
                    }
                }
            }
        }
        var_32 = (min(var_2, (1 * var_0)));
    }
    var_33 *= (min(var_5, (((max(-2, 0)) + 27903))));
    #pragma endscop
}
