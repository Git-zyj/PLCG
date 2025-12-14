/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = 32767;
                                arr_13 [i_1] [i_3] [i_0] [12] [i_0] [i_1] = var_7;
                                var_19 = 21295;
                            }
                        }
                    }
                    var_20 -= -9839;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_21 = (arr_17 [i_0] [i_5] [i_2] [i_0] [i_1] [0] [i_1 - 3]);
                                var_22 = (arr_9 [i_6] [i_1] [i_1] [i_1]);
                                var_23 = 32761;
                                var_24 = 0;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        var_25 -= -32762;
                        var_26 = (arr_10 [i_8 + 1] [8] [0] [i_7] [8] [i_1 - 3] [i_0]);
                        arr_25 [23] [i_1 - 3] [i_1 - 3] [i_1] [i_7] = 6120;
                    }
                    var_27 = 24576;
                }
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_28 |= (arr_23 [i_0] [i_1 + 2]);
                            arr_30 [i_1] [i_1] = 26669;
                            arr_31 [i_1] [i_1] = -26669;
                        }
                    }
                }
                var_29 -= var_12;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                {
                    arr_39 [i_11] = 32750;
                    var_30 = 32767;

                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_31 = 23690;

                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            arr_48 [i_11] [i_12] [i_13 + 1] [10] [i_15] = -9839;
                            arr_49 [i_12] [12] [i_15] = (arr_26 [i_11] [14] [i_13] [i_12]);
                            arr_50 [2] [i_12] [i_11] [i_11] [i_12] [i_14] = -16957;
                        }
                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            arr_53 [2] = -8411;
                            var_32 = (min(var_32, (arr_28 [i_12] [i_13 - 1] [i_12] [i_12])));
                            var_33 = (arr_6 [15] [i_12] [i_13]);
                            var_34 = -26497;
                        }
                        for (int i_17 = 2; i_17 < 19;i_17 += 1)
                        {
                            arr_56 [i_13] [i_11] [i_13] [i_14] = 31094;
                            arr_57 [16] [i_17 + 2] = -4096;
                        }
                        var_35 = -30683;
                        arr_58 [3] [i_13 + 1] [i_14] = var_15;
                    }
                }
            }
        }
    }
    #pragma endscop
}
