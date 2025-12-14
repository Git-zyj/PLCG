/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 ^= 2452049474185941462;
                arr_5 [i_1] = var_12;
            }
        }
    }
    var_17 = 16909997738011921939;

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_18 = (min(var_18, var_1));
        arr_8 [i_2] = 86474514;
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_19 = var_3;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_20 -= var_3;
                                arr_25 [i_3 - 1] [i_4] [i_3 - 1] [i_3 + 1] [5] [i_5] [8] = var_14;
                                var_21 = var_6;
                            }
                        }
                    }
                    arr_26 [i_3] [i_4] [i_5] = var_2;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_22 = (min(var_22, var_13));
                                var_23 = var_2;
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_36 [i_3 - 1] [i_4] [i_5] [i_10] = 86474514;
                        var_24 = -86474522;
                        arr_37 [i_3 + 1] [i_4] [i_5] [i_10] = var_5;
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_25 ^= var_13;
                        var_26 &= var_0;
                        arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = 86474521;
                        arr_41 [i_3] [i_3] [i_3] [i_3] [i_11] = -86474515;
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_44 [i_12] = -714008610;
                        arr_45 [i_12] [i_5] [4] = var_14;
                        arr_46 [i_4] [i_12] [i_4] [7] [7] = 394998593;
                        var_27 ^= var_14;
                    }
                }
            }
        }
        arr_47 [i_3] [i_3] = 2847438151;
        var_28 = var_13;
        var_29 ^= var_6;
        arr_48 [i_3] = var_13;
    }
    #pragma endscop
}
