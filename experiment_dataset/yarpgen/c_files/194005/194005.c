/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 -= var_4;
                                var_18 = ((42301 - (var_13 / -17248)));
                                var_19 = (max(var_19, (((~((-255 / ((max(var_5, 1))))))))));
                                var_20 = (arr_0 [i_1]);
                                var_21 = (arr_8 [19] [11]);
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] [i_0] = 0;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_6] [i_5] = (((~(arr_11 [i_0] [i_0] [14] [i_5]))));
                                var_22 = ((!(arr_13 [i_0] [1] [1] [1] [i_0 + 1])));
                                arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6 + 2] [i_5] &= (min(var_7, var_0));
                                var_23 = -64;
                                var_24 = (min(var_24, (((~((var_0 ? 32767 : 0)))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_25 = 1;
        arr_26 [i_7] [i_7] = ((~((+(((arr_25 [i_7]) ? 1058629698 : 2029396135))))));

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_26 = ((-(arr_27 [i_7] [i_7] [19])));
            var_27 = 239;
        }
        for (int i_9 = 4; i_9 < 24;i_9 += 1)
        {
            var_28 = 255;
            arr_32 [12] [12] [i_7] = (((max(((max((arr_24 [i_7]), 1))), 13821456295181417184)) - ((((arr_27 [i_9 - 4] [i_9 - 4] [i_9 - 4]) & (max(var_2, -75)))))));
            arr_33 [19] [11] [i_7] = ((!(((185 ? 1 : 1050151383)))));
        }
    }

    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_36 [i_10] [i_10] = ((-((2678 + ((var_3 ? var_10 : (arr_3 [i_10] [i_10] [i_10])))))));
        var_29 = (max(var_29, ((((arr_20 [i_10] [i_10] [i_10] [0] [14] [i_10]) ? (((max((arr_9 [i_10]), (arr_9 [i_10]))))) : 70)))));
    }
    #pragma endscop
}
