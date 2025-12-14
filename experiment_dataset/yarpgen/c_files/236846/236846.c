/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_2 [i_0] [i_0] [i_0]);
                arr_5 [i_0] [10] = ((-970436128 & (arr_3 [i_0 - 2] [9])));
            }
        }
    }

    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 24;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [i_4 - 1] &= (arr_13 [i_2] [i_3] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_20 = (-(arr_12 [1] [1] [i_3]));
                                var_21 *= (((+(min((arr_6 [i_2]), 0)))));
                            }
                        }
                    }
                }
            }
        }
        var_22 = (max(var_22, (arr_7 [i_2 + 2])));
        arr_20 [i_2] &= (arr_15 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]);

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_23 = 1;
            arr_23 [i_2] [i_7] = (((var_18 + 2147483647) << (((((-2147483647 - 1) - -9223372036854775805)) - 9223372034707292157))));
        }
    }

    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        arr_26 [i_8] = (arr_18 [i_8] [i_8] [i_8] [i_8 + 1] [i_8 - 1] [i_8]);
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 12;i_10 += 1)
            {
                {
                    arr_33 [i_8] [i_8] = max(var_10, ((max((arr_28 [i_8 + 2]), (arr_28 [i_8 + 1])))));
                    arr_34 [i_8] [i_9 - 2] [i_8] = ((var_0 <= (2367246631 & 2198567218)));
                    arr_35 [i_10] [i_10] [i_8] = (max(((max(1160848976, 1160848971))), (arr_27 [i_8] [i_8 - 1] [i_8])));
                }
            }
        }
        arr_36 [i_8] = (arr_24 [i_8]);
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_24 = (((max((arr_25 [i_11] [i_11]), (arr_25 [i_11] [i_11]))) / ((max((arr_8 [i_11] [i_11]), (arr_8 [i_11] [i_11]))))));
        arr_39 [i_11] = (arr_21 [i_11]);
        arr_40 [i_11] = (((max((arr_3 [i_11] [i_11]), (arr_12 [i_11] [i_11] [i_11]))) << (((min(var_14, (arr_0 [i_11] [i_11]))) - 212657258))));
    }
    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        var_25 = arr_9 [i_12 - 1];
        var_26 = (((arr_6 [i_12 - 1]) ? var_2 : (arr_18 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])));
    }
    var_27 = var_19;
    #pragma endscop
}
